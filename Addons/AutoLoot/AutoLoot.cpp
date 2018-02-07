#include "stdafx.h"

#include "AutoLoot.h"
#include "../../Common/ETypes.h"
#include "../../Common/Helpers/RapidHelper.hpp"

#include <ATF/global.hpp>

namespace GameServer
{
    namespace Addon
    {
        bool CAutoLoot::m_bActivated = false;
		bool CAutoLoot::m_bPitBossNormalDrop = false;

        void CAutoLoot::load()
        {
            enable_hook(
                (ATF::Global::Info::CreateItemBox111_ptr)&ATF::Global::CreateItemBox,&CAutoLoot::CreateItemBox);
        }

        void CAutoLoot::unload()
        {
            cleanup_all_hook();
        }

        Yorozuya::Module::ModuleName_t CAutoLoot::get_name()
        {
            static const Yorozuya::Module::ModuleName_t name = "addon.autoloot";
            return name;
        }

        void CAutoLoot::configure(const rapidjson::Value & nodeConfig)
        {
			CAutoLoot::m_bActivated = RapidHelper::GetValueOrDefault(nodeConfig, "activated", false);
			CAutoLoot::m_bPitBossNormalDrop = RapidHelper::GetValueOrDefault(nodeConfig, "PitBossNormalDrop", false);
        }

        ATF::CItemBox* CAutoLoot::CreateItemBox(
            ATF::_STORAGE_LIST::_db_con* pItem,
            ATF::CPlayer* pOwner,
            unsigned int dwPartyBossSerial,
            bool bPartyShare,
            ATF::CCharacter* pThrower,
            char byCreateCode,
            ATF::CMapData* pMap,
            uint16_t wLayerIndex,
            float* pStdPos,
            bool bHide,
            ATF::Global::Info::CreateItemBox111_ptr next)
        {
            ATF::CItemBox* result = nullptr;
            do
            {
                if (!CAutoLoot::m_bActivated)
                {
                    result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
                    break;
                }

				if (!pThrower)
				{
					result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
					break;
				}

				if (pThrower->m_ObjID.m_byKind == 0 && pThrower->m_ObjID.m_byID != (uint8_t)e_obj_id::obj_id_monster)
				{
					result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
					break;
				}

				ATF::CMonster* pMonster = (ATF::CMonster*)pThrower;
				if (CAutoLoot::m_bPitBossNormalDrop && pMonster->IsBossMonster())
				{
					result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
					break;
				}

				for (auto& item : pOwner->m_Param.m_dbInven.m_List)
				{
						if (!item.m_bLoad)
							continue;

						if (item.m_bLock)
							continue;

						if (item.m_byTableCode != pItem->m_byTableCode)
							continue;

						if (item.m_wItemIndex != pItem->m_wItemIndex)
							continue;

						if (item.m_dwDur + pItem->m_dwDur <= 99)
						{
							pOwner->Emb_AlterDurPoint(0, item.m_byStorageIndex, 1, 1, 1);
							pOwner->SendMsg_TakeAddResult(0, &item);
							return 0;
						}
				}

				auto emptyIndex = pOwner->m_Param.m_dbInven.GetIndexEmptyCon();

				if (emptyIndex == 255)
				{
					result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);
					break;
				}

				pItem->m_wSerial = pOwner->m_Param.GetNewItemSerial();
				pItem->m_byStorageIndex = emptyIndex;

				if (pOwner->Emb_AddStorage(0, (ATF::_STORAGE_LIST::_storage_con *)&pItem->m_bLoad, 0, 1))
				{
						pOwner->SendMsg_TakeNewResult(0, pItem);
						return 0;
				}
				else
				{
						pOwner->SendMsg_TakeNewResult(-1, 0);
						return 0;
				}
				
				result = next(pItem, pOwner, dwPartyBossSerial, bPartyShare, pThrower, byCreateCode, pMap, wLayerIndex, pStdPos, bHide);

            } while (false);

			return result;
        }
    }
}
