#include <CItemStoreDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CItemStorector_CItemStore2_ptr CItemStorector_CItemStore2_next(nullptr);
        Info::CItemStorector_CItemStore2_clbk CItemStorector_CItemStore2_user(nullptr);
        
        Info::CItemStoreCalcBuyPrice4_ptr CItemStoreCalcBuyPrice4_next(nullptr);
        Info::CItemStoreCalcBuyPrice4_clbk CItemStoreCalcBuyPrice4_user(nullptr);
        
        Info::CItemStoreCalcSecIndex6_ptr CItemStoreCalcSecIndex6_next(nullptr);
        Info::CItemStoreCalcSecIndex6_clbk CItemStoreCalcSecIndex6_user(nullptr);
        
        Info::CItemStoreCalcSellPrice8_ptr CItemStoreCalcSellPrice8_next(nullptr);
        Info::CItemStoreCalcSellPrice8_clbk CItemStoreCalcSellPrice8_user(nullptr);
        
        Info::CItemStoreGetLastTradeActPoint10_ptr CItemStoreGetLastTradeActPoint10_next(nullptr);
        Info::CItemStoreGetLastTradeActPoint10_clbk CItemStoreGetLastTradeActPoint10_user(nullptr);
        
        Info::CItemStoreGetLastTradeDalant12_ptr CItemStoreGetLastTradeDalant12_next(nullptr);
        Info::CItemStoreGetLastTradeDalant12_clbk CItemStoreGetLastTradeDalant12_user(nullptr);
        
        Info::CItemStoreGetLastTradeGold14_ptr CItemStoreGetLastTradeGold14_next(nullptr);
        Info::CItemStoreGetLastTradeGold14_clbk CItemStoreGetLastTradeGold14_user(nullptr);
        
        Info::CItemStoreGetLastTradePoint16_ptr CItemStoreGetLastTradePoint16_next(nullptr);
        Info::CItemStoreGetLastTradePoint16_clbk CItemStoreGetLastTradePoint16_user(nullptr);
        
        Info::CItemStoreGetLimitItem18_ptr CItemStoreGetLimitItem18_next(nullptr);
        Info::CItemStoreGetLimitItem18_clbk CItemStoreGetLimitItem18_user(nullptr);
        
        Info::CItemStoreGetLimitItemAmount20_ptr CItemStoreGetLimitItemAmount20_next(nullptr);
        Info::CItemStoreGetLimitItemAmount20_clbk CItemStoreGetLimitItemAmount20_user(nullptr);
        
        Info::CItemStoreGetNpcCode22_ptr CItemStoreGetNpcCode22_next(nullptr);
        Info::CItemStoreGetNpcCode22_clbk CItemStoreGetNpcCode22_user(nullptr);
        
        Info::CItemStoreGetNpcRaceCode24_ptr CItemStoreGetNpcRaceCode24_next(nullptr);
        Info::CItemStoreGetNpcRaceCode24_clbk CItemStoreGetNpcRaceCode24_user(nullptr);
        
        Info::CItemStoreGetNpcRecord26_ptr CItemStoreGetNpcRecord26_next(nullptr);
        Info::CItemStoreGetNpcRecord26_clbk CItemStoreGetNpcRecord26_user(nullptr);
        
        Info::CItemStoreGetStorePos28_ptr CItemStoreGetStorePos28_next(nullptr);
        Info::CItemStoreGetStorePos28_clbk CItemStoreGetStorePos28_user(nullptr);
        
        Info::CItemStoreInit30_ptr CItemStoreInit30_next(nullptr);
        Info::CItemStoreInit30_clbk CItemStoreInit30_user(nullptr);
        
        Info::CItemStoreInitLimitItemInfo32_ptr CItemStoreInitLimitItemInfo32_next(nullptr);
        Info::CItemStoreInitLimitItemInfo32_clbk CItemStoreInitLimitItemInfo32_user(nullptr);
        
        Info::CItemStoreIsBuy34_ptr CItemStoreIsBuy34_next(nullptr);
        Info::CItemStoreIsBuy34_clbk CItemStoreIsBuy34_user(nullptr);
        
        Info::CItemStoreIsSell36_ptr CItemStoreIsSell36_next(nullptr);
        Info::CItemStoreIsSell36_clbk CItemStoreIsSell36_user(nullptr);
        
        Info::CItemStoreSetLimitItemInitTime38_ptr CItemStoreSetLimitItemInitTime38_next(nullptr);
        Info::CItemStoreSetLimitItemInitTime38_clbk CItemStoreSetLimitItemInitTime38_user(nullptr);
        
        Info::CItemStoreSetZeroTradeMoney40_ptr CItemStoreSetZeroTradeMoney40_next(nullptr);
        Info::CItemStoreSetZeroTradeMoney40_clbk CItemStoreSetZeroTradeMoney40_user(nullptr);
        
        Info::CItemStoreSubLimitItemNum42_ptr CItemStoreSubLimitItemNum42_next(nullptr);
        Info::CItemStoreSubLimitItemNum42_clbk CItemStoreSubLimitItemNum42_user(nullptr);
        
        Info::CItemStoreUpdateLimitItemNum44_ptr CItemStoreUpdateLimitItemNum44_next(nullptr);
        Info::CItemStoreUpdateLimitItemNum44_clbk CItemStoreUpdateLimitItemNum44_user(nullptr);
        
        
        Info::CItemStoredtor_CItemStore48_ptr CItemStoredtor_CItemStore48_next(nullptr);
        Info::CItemStoredtor_CItemStore48_clbk CItemStoredtor_CItemStore48_user(nullptr);
        
        
        void CItemStorector_CItemStore2_wrapper(struct CItemStore* _this)
        {
           CItemStorector_CItemStore2_user(_this, CItemStorector_CItemStore2_next);
        };
        float CItemStoreCalcBuyPrice4_wrapper(struct CItemStore* _this, char byTableCode, uint16_t wItemIndex, char* pbyMoneyUnit)
        {
           return CItemStoreCalcBuyPrice4_user(_this, byTableCode, wItemIndex, pbyMoneyUnit, CItemStoreCalcBuyPrice4_next);
        };
        int CItemStoreCalcSecIndex6_wrapper(struct CItemStore* _this, float x, float z)
        {
           return CItemStoreCalcSecIndex6_user(_this, x, z, CItemStoreCalcSecIndex6_next);
        };
        int CItemStoreCalcSellPrice8_wrapper(struct CItemStore* _this, int nGoodIndex, char* pbyMoneyUnit)
        {
           return CItemStoreCalcSellPrice8_user(_this, nGoodIndex, pbyMoneyUnit, CItemStoreCalcSellPrice8_next);
        };
        int CItemStoreGetLastTradeActPoint10_wrapper(struct CItemStore* _this, char byActCode)
        {
           return CItemStoreGetLastTradeActPoint10_user(_this, byActCode, CItemStoreGetLastTradeActPoint10_next);
        };
        int CItemStoreGetLastTradeDalant12_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetLastTradeDalant12_user(_this, CItemStoreGetLastTradeDalant12_next);
        };
        int CItemStoreGetLastTradeGold14_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetLastTradeGold14_user(_this, CItemStoreGetLastTradeGold14_next);
        };
        int CItemStoreGetLastTradePoint16_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetLastTradePoint16_user(_this, CItemStoreGetLastTradePoint16_next);
        };
        struct _limit_item_info* CItemStoreGetLimitItem18_wrapper(struct CItemStore* _this, int nIndex)
        {
           return CItemStoreGetLimitItem18_user(_this, nIndex, CItemStoreGetLimitItem18_next);
        };
        void CItemStoreGetLimitItemAmount20_wrapper(struct CItemStore* _this, struct _limit_amount_info* pAmountInfo)
        {
           CItemStoreGetLimitItemAmount20_user(_this, pAmountInfo, CItemStoreGetLimitItemAmount20_next);
        };
        char* CItemStoreGetNpcCode22_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetNpcCode22_user(_this, CItemStoreGetNpcCode22_next);
        };
        bool CItemStoreGetNpcRaceCode24_wrapper(struct CItemStore* _this, char* pbyRaceCode)
        {
           return CItemStoreGetNpcRaceCode24_user(_this, pbyRaceCode, CItemStoreGetNpcRaceCode24_next);
        };
        struct _base_fld* CItemStoreGetNpcRecord26_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetNpcRecord26_user(_this, CItemStoreGetNpcRecord26_next);
        };
        float* CItemStoreGetStorePos28_wrapper(struct CItemStore* _this)
        {
           return CItemStoreGetStorePos28_user(_this, CItemStoreGetStorePos28_next);
        };
        bool CItemStoreInit30_wrapper(struct CItemStore* _this, int nIndex, struct CMapData* pExistMap, struct _store_dummy* pDum, struct _base_fld* pRec)
        {
           return CItemStoreInit30_user(_this, nIndex, pExistMap, pDum, pRec, CItemStoreInit30_next);
        };
        void CItemStoreInitLimitItemInfo32_wrapper(struct CItemStore* _this)
        {
           CItemStoreInitLimitItemInfo32_user(_this, CItemStoreInitLimitItemInfo32_next);
        };
        char CItemStoreIsBuy34_wrapper(struct CItemStore* _this, char byOfferNum, struct _sell_offer* pOffer, float fDiscountRate, char byRace)
        {
           return CItemStoreIsBuy34_user(_this, byOfferNum, pOffer, fDiscountRate, byRace, CItemStoreIsBuy34_next);
        };
        char CItemStoreIsSell36_wrapper(struct CItemStore* _this, char byOfferNum, struct _buy_offer* pOffer, unsigned int dwHasDalant, unsigned int dwHasGold, long double dHasPoint, unsigned int* dwHasActPoint, char* pbyActCode, float fDiscountRate, char byRace, char byGrade)
        {
           return CItemStoreIsSell36_user(_this, byOfferNum, pOffer, dwHasDalant, dwHasGold, dHasPoint, dwHasActPoint, pbyActCode, fDiscountRate, byRace, byGrade, CItemStoreIsSell36_next);
        };
        void CItemStoreSetLimitItemInitTime38_wrapper(struct CItemStore* _this)
        {
           CItemStoreSetLimitItemInitTime38_user(_this, CItemStoreSetLimitItemInitTime38_next);
        };
        void CItemStoreSetZeroTradeMoney40_wrapper(struct CItemStore* _this)
        {
           CItemStoreSetZeroTradeMoney40_user(_this, CItemStoreSetZeroTradeMoney40_next);
        };
        void CItemStoreSubLimitItemNum42_wrapper(struct CItemStore* _this, int nLimitItemIndex, int nSubNum)
        {
           CItemStoreSubLimitItemNum42_user(_this, nLimitItemIndex, nSubNum, CItemStoreSubLimitItemNum42_next);
        };
        void CItemStoreUpdateLimitItemNum44_wrapper(struct CItemStore* _this, bool bUpdate)
        {
           CItemStoreUpdateLimitItemNum44_user(_this, bUpdate, CItemStoreUpdateLimitItemNum44_next);
        };
        
        void CItemStoredtor_CItemStore48_wrapper(struct CItemStore* _this)
        {
           CItemStoredtor_CItemStore48_user(_this, CItemStoredtor_CItemStore48_next);
        };
        
        ::std::array<hook_record, 23> CItemStore_functions = 
        {
            _hook_record {
                (LPVOID)0x140260630L,
                (LPVOID *)&CItemStorector_CItemStore2_user,
                (LPVOID *)&CItemStorector_CItemStore2_next,
                (LPVOID)cast_pointer_function(CItemStorector_CItemStore2_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)())&CItemStore::ctor_CItemStore)
            },
            _hook_record {
                (LPVOID)0x140262600L,
                (LPVOID *)&CItemStoreCalcBuyPrice4_user,
                (LPVOID *)&CItemStoreCalcBuyPrice4_next,
                (LPVOID)cast_pointer_function(CItemStoreCalcBuyPrice4_wrapper),
                (LPVOID)cast_pointer_function((float(CItemStore::*)(char, uint16_t, char*))&CItemStore::CalcBuyPrice)
            },
            _hook_record {
                (LPVOID)0x1402622b0L,
                (LPVOID *)&CItemStoreCalcSecIndex6_user,
                (LPVOID *)&CItemStoreCalcSecIndex6_next,
                (LPVOID)cast_pointer_function(CItemStoreCalcSecIndex6_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)(float, float))&CItemStore::CalcSecIndex)
            },
            _hook_record {
                (LPVOID)0x1402624b0L,
                (LPVOID *)&CItemStoreCalcSellPrice8_user,
                (LPVOID *)&CItemStoreCalcSellPrice8_next,
                (LPVOID)cast_pointer_function(CItemStoreCalcSellPrice8_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)(int, char*))&CItemStore::CalcSellPrice)
            },
            _hook_record {
                (LPVOID)0x140262220L,
                (LPVOID *)&CItemStoreGetLastTradeActPoint10_user,
                (LPVOID *)&CItemStoreGetLastTradeActPoint10_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLastTradeActPoint10_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)(char))&CItemStore::GetLastTradeActPoint)
            },
            _hook_record {
                (LPVOID)0x1402621c0L,
                (LPVOID *)&CItemStoreGetLastTradeDalant12_user,
                (LPVOID *)&CItemStoreGetLastTradeDalant12_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLastTradeDalant12_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)())&CItemStore::GetLastTradeDalant)
            },
            _hook_record {
                (LPVOID)0x1402621e0L,
                (LPVOID *)&CItemStoreGetLastTradeGold14_user,
                (LPVOID *)&CItemStoreGetLastTradeGold14_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLastTradeGold14_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)())&CItemStore::GetLastTradeGold)
            },
            _hook_record {
                (LPVOID)0x140262200L,
                (LPVOID *)&CItemStoreGetLastTradePoint16_user,
                (LPVOID *)&CItemStoreGetLastTradePoint16_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLastTradePoint16_wrapper),
                (LPVOID)cast_pointer_function((int(CItemStore::*)())&CItemStore::GetLastTradePoint)
            },
            _hook_record {
                (LPVOID)0x140262a30L,
                (LPVOID *)&CItemStoreGetLimitItem18_user,
                (LPVOID *)&CItemStoreGetLimitItem18_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLimitItem18_wrapper),
                (LPVOID)cast_pointer_function((struct _limit_item_info*(CItemStore::*)(int))&CItemStore::GetLimitItem)
            },
            _hook_record {
                (LPVOID)0x140262940L,
                (LPVOID *)&CItemStoreGetLimitItemAmount20_user,
                (LPVOID *)&CItemStoreGetLimitItemAmount20_next,
                (LPVOID)cast_pointer_function(CItemStoreGetLimitItemAmount20_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)(struct _limit_amount_info*))&CItemStore::GetLimitItemAmount)
            },
            _hook_record {
                (LPVOID)0x140262450L,
                (LPVOID *)&CItemStoreGetNpcCode22_user,
                (LPVOID *)&CItemStoreGetNpcCode22_next,
                (LPVOID)cast_pointer_function(CItemStoreGetNpcCode22_wrapper),
                (LPVOID)cast_pointer_function((char*(CItemStore::*)())&CItemStore::GetNpcCode)
            },
            _hook_record {
                (LPVOID)0x140262380L,
                (LPVOID *)&CItemStoreGetNpcRaceCode24_user,
                (LPVOID *)&CItemStoreGetNpcRaceCode24_next,
                (LPVOID)cast_pointer_function(CItemStoreGetNpcRaceCode24_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemStore::*)(char*))&CItemStore::GetNpcRaceCode)
            },
            _hook_record {
                (LPVOID)0x140262400L,
                (LPVOID *)&CItemStoreGetNpcRecord26_user,
                (LPVOID *)&CItemStoreGetNpcRecord26_next,
                (LPVOID)cast_pointer_function(CItemStoreGetNpcRecord26_wrapper),
                (LPVOID)cast_pointer_function((struct _base_fld*(CItemStore::*)())&CItemStore::GetNpcRecord)
            },
            _hook_record {
                (LPVOID)0x140262480L,
                (LPVOID *)&CItemStoreGetStorePos28_user,
                (LPVOID *)&CItemStoreGetStorePos28_next,
                (LPVOID)cast_pointer_function(CItemStoreGetStorePos28_wrapper),
                (LPVOID)cast_pointer_function((float*(CItemStore::*)())&CItemStore::GetStorePos)
            },
            _hook_record {
                (LPVOID)0x140260720L,
                (LPVOID *)&CItemStoreInit30_user,
                (LPVOID *)&CItemStoreInit30_next,
                (LPVOID)cast_pointer_function(CItemStoreInit30_wrapper),
                (LPVOID)cast_pointer_function((bool(CItemStore::*)(int, struct CMapData*, struct _store_dummy*, struct _base_fld*))&CItemStore::Init)
            },
            _hook_record {
                (LPVOID)0x1402626e0L,
                (LPVOID *)&CItemStoreInitLimitItemInfo32_user,
                (LPVOID *)&CItemStoreInitLimitItemInfo32_next,
                (LPVOID)cast_pointer_function(CItemStoreInitLimitItemInfo32_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)())&CItemStore::InitLimitItemInfo)
            },
            _hook_record {
                (LPVOID)0x140261c50L,
                (LPVOID *)&CItemStoreIsBuy34_user,
                (LPVOID *)&CItemStoreIsBuy34_next,
                (LPVOID)cast_pointer_function(CItemStoreIsBuy34_wrapper),
                (LPVOID)cast_pointer_function((char(CItemStore::*)(char, struct _sell_offer*, float, char))&CItemStore::IsBuy)
            },
            _hook_record {
                (LPVOID)0x1402613b0L,
                (LPVOID *)&CItemStoreIsSell36_user,
                (LPVOID *)&CItemStoreIsSell36_next,
                (LPVOID)cast_pointer_function(CItemStoreIsSell36_wrapper),
                (LPVOID)cast_pointer_function((char(CItemStore::*)(char, struct _buy_offer*, unsigned int, unsigned int, long double, unsigned int*, char*, float, char, char))&CItemStore::IsSell)
            },
            _hook_record {
                (LPVOID)0x140262a70L,
                (LPVOID *)&CItemStoreSetLimitItemInitTime38_user,
                (LPVOID *)&CItemStoreSetLimitItemInitTime38_next,
                (LPVOID)cast_pointer_function(CItemStoreSetLimitItemInitTime38_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)())&CItemStore::SetLimitItemInitTime)
            },
            _hook_record {
                (LPVOID)0x140262240L,
                (LPVOID *)&CItemStoreSetZeroTradeMoney40_user,
                (LPVOID *)&CItemStoreSetZeroTradeMoney40_next,
                (LPVOID)cast_pointer_function(CItemStoreSetZeroTradeMoney40_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)())&CItemStore::SetZeroTradeMoney)
            },
            _hook_record {
                (LPVOID)0x1402628b0L,
                (LPVOID *)&CItemStoreSubLimitItemNum42_user,
                (LPVOID *)&CItemStoreSubLimitItemNum42_next,
                (LPVOID)cast_pointer_function(CItemStoreSubLimitItemNum42_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)(int, int))&CItemStore::SubLimitItemNum)
            },
            _hook_record {
                (LPVOID)0x140262890L,
                (LPVOID *)&CItemStoreUpdateLimitItemNum44_user,
                (LPVOID *)&CItemStoreUpdateLimitItemNum44_next,
                (LPVOID)cast_pointer_function(CItemStoreUpdateLimitItemNum44_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)(bool))&CItemStore::UpdateLimitItemNum)
            },
            _hook_record {
                (LPVOID)0x140260680L,
                (LPVOID *)&CItemStoredtor_CItemStore48_user,
                (LPVOID *)&CItemStoredtor_CItemStore48_next,
                (LPVOID)cast_pointer_function(CItemStoredtor_CItemStore48_wrapper),
                (LPVOID)cast_pointer_function((void(CItemStore::*)())&CItemStore::dtor_CItemStore)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
