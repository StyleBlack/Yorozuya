// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CNationSettingManager.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CNationSettingManagerctor_CNationSettingManager2_ptr = void (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerctor_CNationSettingManager2_clbk = void (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerctor_CNationSettingManager2_ptr);
        using CNationSettingManagerCheckEnterWorldRequest4_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int, char*);
        using CNationSettingManagerCheckEnterWorldRequest4_clbk = bool (WINAPIV*)(struct CNationSettingManager*, int, char*, CNationSettingManagerCheckEnterWorldRequest4_ptr);
        using CNationSettingManagerCreateBilling6_ptr = struct CBilling* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerCreateBilling6_clbk = struct CBilling* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerCreateBilling6_ptr);
        using CNationSettingManagerCreateComplete8_ptr = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
        using CNationSettingManagerCreateComplete8_clbk = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*, CNationSettingManagerCreateComplete8_ptr);
        using CNationSettingManagerCreateWorker10_ptr = struct CashDbWorker* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerCreateWorker10_clbk = struct CashDbWorker* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerCreateWorker10_ptr);
        using CNationSettingManagerGetBillingForceCloseDelay12_ptr = uint16_t (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetBillingForceCloseDelay12_clbk = uint16_t (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetBillingForceCloseDelay12_ptr);
        using CNationSettingManagerGetCashDBDBIP14_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCashDBDBIP14_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCashDBDBIP14_ptr);
        using CNationSettingManagerGetCashDBID16_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCashDBID16_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCashDBID16_ptr);
        using CNationSettingManagerGetCashDBName18_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCashDBName18_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCashDBName18_ptr);
        using CNationSettingManagerGetCashDBPW20_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCashDBPW20_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCashDBPW20_ptr);
        using CNationSettingManagerGetCashDBPort22_ptr = uint16_t (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCashDBPort22_clbk = uint16_t (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCashDBPort22_ptr);
        using CNationSettingManagerGetCashItemPrice24_ptr = int (WINAPIV*)(struct CNationSettingManager*, struct _CashShop_str_fld*);
        using CNationSettingManagerGetCashItemPrice24_clbk = int (WINAPIV*)(struct CNationSettingManager*, struct _CashShop_str_fld*, CNationSettingManagerGetCashItemPrice24_ptr);
        using CNationSettingManagerGetCheatTable26_ptr = struct CHEAT_COMMAND* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetCheatTable26_clbk = struct CHEAT_COMMAND* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetCheatTable26_ptr);
        using CNationSettingManagerGetItemName28_ptr = char* (WINAPIV*)(struct CNationSettingManager*, struct _NameTxt_fld*);
        using CNationSettingManagerGetItemName28_clbk = char* (WINAPIV*)(struct CNationSettingManager*, struct _NameTxt_fld*, CNationSettingManagerGetItemName28_ptr);
        using CNationSettingManagerGetNationCode30_ptr = int (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetNationCode30_clbk = int (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetNationCode30_ptr);
        using CNationSettingManagerGetNationCodeStr32_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetNationCodeStr32_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetNationCodeStr32_ptr);
        using CNationSettingManagerGetNoneString34_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetNoneString34_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetNoneString34_ptr);
        using CNationSettingManagerGetServerVaildKey36_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetServerVaildKey36_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetServerVaildKey36_ptr);
        using CNationSettingManagerGetWorldDBID38_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetWorldDBID38_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetWorldDBID38_ptr);
        using CNationSettingManagerGetWorldDBPW40_ptr = char* (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerGetWorldDBPW40_clbk = char* (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerGetWorldDBPW40_ptr);
        using CNationSettingManagerInit42_ptr = int (WINAPIV*)(struct CNationSettingManager*, int, char*, bool);
        using CNationSettingManagerInit42_clbk = int (WINAPIV*)(struct CNationSettingManager*, int, char*, bool, CNationSettingManagerInit42_ptr);
        using CNationSettingManagerIsApplyPcbangPrimium44_ptr = bool (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
        using CNationSettingManagerIsApplyPcbangPrimium44_clbk = bool (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*, CNationSettingManagerIsApplyPcbangPrimium44_ptr);
        using CNationSettingManagerIsCashDBDSNSetted46_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerIsCashDBDSNSetted46_clbk = bool (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerIsCashDBDSNSetted46_ptr);
        using CNationSettingManagerIsCashDBInit48_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerIsCashDBInit48_clbk = bool (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerIsCashDBInit48_ptr);
        using CNationSettingManagerIsCashDBUseExtRef50_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerIsCashDBUseExtRef50_clbk = bool (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerIsCashDBUseExtRef50_ptr);
        using CNationSettingManagerIsNormalString52_ptr = bool (WINAPIV*)(struct CNationSettingManager*, char*);
        using CNationSettingManagerIsNormalString52_clbk = bool (WINAPIV*)(struct CNationSettingManager*, char*, CNationSettingManagerIsNormalString52_ptr);
        using CNationSettingManagerIsPersonalFreeFixedAmountBillingType54_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int16_t*, int16_t*);
        using CNationSettingManagerIsPersonalFreeFixedAmountBillingType54_clbk = bool (WINAPIV*)(struct CNationSettingManager*, int16_t*, int16_t*, CNationSettingManagerIsPersonalFreeFixedAmountBillingType54_ptr);
        using CNationSettingManagerLoop56_ptr = void (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerLoop56_clbk = void (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerLoop56_ptr);
        using CNationSettingManagerNetClose58_ptr = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*);
        using CNationSettingManagerNetClose58_clbk = void (WINAPIV*)(struct CNationSettingManager*, struct CPlayer*, CNationSettingManagerNetClose58_ptr);
        using CNationSettingManagerOnCheckSession_FirstVerify60_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int);
        using CNationSettingManagerOnCheckSession_FirstVerify60_clbk = bool (WINAPIV*)(struct CNationSettingManager*, int, CNationSettingManagerOnCheckSession_FirstVerify60_ptr);
        using CNationSettingManagerOnConnectSession62_ptr = void (WINAPIV*)(struct CNationSettingManager*, int);
        using CNationSettingManagerOnConnectSession62_clbk = void (WINAPIV*)(struct CNationSettingManager*, int, CNationSettingManagerOnConnectSession62_ptr);
        using CNationSettingManagerOnDisConnectSession64_ptr = void (WINAPIV*)(struct CNationSettingManager*, int);
        using CNationSettingManagerOnDisConnectSession64_clbk = void (WINAPIV*)(struct CNationSettingManager*, int, CNationSettingManagerOnDisConnectSession64_ptr);
        using CNationSettingManagerRecvGameGuardData66_ptr = bool (WINAPIV*)(struct CNationSettingManager*, int, struct _MSG_HEADER*, char*);
        using CNationSettingManagerRecvGameGuardData66_clbk = bool (WINAPIV*)(struct CNationSettingManager*, int, struct _MSG_HEADER*, char*, CNationSettingManagerRecvGameGuardData66_ptr);
        using CNationSettingManagerSendCashDBDSNRequest68_ptr = void (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerSendCashDBDSNRequest68_clbk = void (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerSendCashDBDSNRequest68_ptr);
        using CNationSettingManagerSetCashDBDSN70_ptr = void (WINAPIV*)(struct CNationSettingManager*, char*, char*, char*, char*, unsigned int);
        using CNationSettingManagerSetCashDBDSN70_clbk = void (WINAPIV*)(struct CNationSettingManager*, char*, char*, char*, char*, unsigned int, CNationSettingManagerSetCashDBDSN70_ptr);
        using CNationSettingManagerSetCashDBInitState72_ptr = void (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerSetCashDBInitState72_clbk = void (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerSetCashDBInitState72_ptr);
        using CNationSettingManagerSetUnitPassiveValue74_ptr = void (WINAPIV*)(struct CNationSettingManager*, float*);
        using CNationSettingManagerSetUnitPassiveValue74_clbk = void (WINAPIV*)(struct CNationSettingManager*, float*, CNationSettingManagerSetUnitPassiveValue74_ptr);
        using CNationSettingManagerValidMacAddress76_ptr = bool (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerValidMacAddress76_clbk = bool (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerValidMacAddress76_ptr);
        
        using CNationSettingManagerdtor_CNationSettingManager81_ptr = void (WINAPIV*)(struct CNationSettingManager*);
        using CNationSettingManagerdtor_CNationSettingManager81_clbk = void (WINAPIV*)(struct CNationSettingManager*, CNationSettingManagerdtor_CNationSettingManager81_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE
