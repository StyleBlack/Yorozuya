// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CPvpCashPoint.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        
        using CPvpCashPointctor_CPvpCashPoint2_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointctor_CPvpCashPoint2_clbk = void (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointctor_CPvpCashPoint2_ptr);
        using CPvpCashPointCalPvpCashPoint4_ptr = long double (WINAPIV*)(struct CPvpCashPoint*, int, int, char*, char);
        using CPvpCashPointCalPvpCashPoint4_clbk = long double (WINAPIV*)(struct CPvpCashPoint*, int, int, char*, char, CPvpCashPointCalPvpCashPoint4_ptr);
        using CPvpCashPointCheckPvpHaveCondition6_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*, long double);
        using CPvpCashPointCheckPvpHaveCondition6_clbk = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*, long double, CPvpCashPointCheckPvpHaveCondition6_ptr);
        using CPvpCashPointCheckPvpLoseCondition8_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*);
        using CPvpCashPointCheckPvpLoseCondition8_clbk = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, struct CPlayer*, CPvpCashPointCheckPvpLoseCondition8_ptr);
        using CPvpCashPointGetContPvpHave10_ptr = int (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointGetContPvpHave10_clbk = int (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointGetContPvpHave10_ptr);
        using CPvpCashPointGetContPvpLose12_ptr = int (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointGetContPvpLose12_clbk = int (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointGetContPvpLose12_ptr);
        using CPvpCashPointGetMaxTempPoint14_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char, bool);
        using CPvpCashPointGetMaxTempPoint14_clbk = int (WINAPIV*)(struct CPvpCashPoint*, char, bool, CPvpCashPointGetMaxTempPoint14_ptr);
        using CPvpCashPointGetMinTempPoint16_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char);
        using CPvpCashPointGetMinTempPoint16_clbk = int (WINAPIV*)(struct CPvpCashPoint*, char, CPvpCashPointGetMinTempPoint16_ptr);
        using CPvpCashPointGetMyClassVal18_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char*);
        using CPvpCashPointGetMyClassVal18_clbk = int (WINAPIV*)(struct CPvpCashPoint*, char*, CPvpCashPointGetMyClassVal18_ptr);
        using CPvpCashPointGetRaceWarRecvr20_ptr = bool (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointGetRaceWarRecvr20_clbk = bool (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointGetRaceWarRecvr20_ptr);
        using CPvpCashPointGetTalikRecvrPoint22_ptr = int (WINAPIV*)(struct CPvpCashPoint*, char, unsigned int);
        using CPvpCashPointGetTalikRecvrPoint22_clbk = int (WINAPIV*)(struct CPvpCashPoint*, char, unsigned int, CPvpCashPointGetTalikRecvrPoint22_ptr);
        using CPvpCashPointInit24_ptr = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*);
        using CPvpCashPointInit24_clbk = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*, CPvpCashPointInit24_ptr);
        using CPvpCashPointIsPvpMap26_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*);
        using CPvpCashPointIsPvpMap26_clbk = bool (WINAPIV*)(struct CPvpCashPoint*, struct CPlayer*, CPvpCashPointIsPvpMap26_ptr);
        using CPvpCashPointKillerListInit28_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointKillerListInit28_clbk = void (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointKillerListInit28_ptr);
        using CPvpCashPointSendMsg_PvpCashInform30_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int, char);
        using CPvpCashPointSendMsg_PvpCashInform30_clbk = void (WINAPIV*)(struct CPvpCashPoint*, int, char, CPvpCashPointSendMsg_PvpCashInform30_ptr);
        using CPvpCashPointSendMsg_RecoverResult32_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int, char, int);
        using CPvpCashPointSendMsg_RecoverResult32_clbk = void (WINAPIV*)(struct CPvpCashPoint*, int, char, int, CPvpCashPointSendMsg_RecoverResult32_ptr);
        using CPvpCashPointSendMsg_TalikList34_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int);
        using CPvpCashPointSendMsg_TalikList34_clbk = void (WINAPIV*)(struct CPvpCashPoint*, int, CPvpCashPointSendMsg_TalikList34_ptr);
        using CPvpCashPointSetContPvpHave36_ptr = void (WINAPIV*)(struct CPvpCashPoint*, char);
        using CPvpCashPointSetContPvpHave36_clbk = void (WINAPIV*)(struct CPvpCashPoint*, char, CPvpCashPointSetContPvpHave36_ptr);
        using CPvpCashPointSetContPvpLose38_ptr = void (WINAPIV*)(struct CPvpCashPoint*, int);
        using CPvpCashPointSetContPvpLose38_clbk = void (WINAPIV*)(struct CPvpCashPoint*, int, CPvpCashPointSetContPvpLose38_ptr);
        using CPvpCashPointSetKillerList40_ptr = bool (WINAPIV*)(struct CPvpCashPoint*, unsigned int);
        using CPvpCashPointSetKillerList40_clbk = bool (WINAPIV*)(struct CPvpCashPoint*, unsigned int, CPvpCashPointSetKillerList40_ptr);
        using CPvpCashPointSetRaceWarRecvr42_ptr = void (WINAPIV*)(struct CPvpCashPoint*, bool);
        using CPvpCashPointSetRaceWarRecvr42_clbk = void (WINAPIV*)(struct CPvpCashPoint*, bool, CPvpCashPointSetRaceWarRecvr42_ptr);
        using CPvpCashPointUpdateKillerList44_ptr = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*);
        using CPvpCashPointUpdateKillerList44_clbk = void (WINAPIV*)(struct CPvpCashPoint*, struct _PVP_ORDER_VIEW_DB_BASE*, CPvpCashPointUpdateKillerList44_ptr);
        
        using CPvpCashPointdtor_CPvpCashPoint46_ptr = void (WINAPIV*)(struct CPvpCashPoint*);
        using CPvpCashPointdtor_CPvpCashPoint46_clbk = void (WINAPIV*)(struct CPvpCashPoint*, CPvpCashPointdtor_CPvpCashPoint46_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE