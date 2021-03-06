#include <RACE_BOSS_MSG__CMsgDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace RACE_BOSS_MSG
    {
        namespace Detail
        {
            
            Info::RACE_BOSS_MSG__CMsgctor_CMsg2_ptr RACE_BOSS_MSG__CMsgctor_CMsg2_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgctor_CMsg2_clbk RACE_BOSS_MSG__CMsgctor_CMsg2_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgClear4_ptr RACE_BOSS_MSG__CMsgClear4_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgClear4_clbk RACE_BOSS_MSG__CMsgClear4_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgGetBossName6_ptr RACE_BOSS_MSG__CMsgGetBossName6_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgGetBossName6_clbk RACE_BOSS_MSG__CMsgGetBossName6_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgGetID8_ptr RACE_BOSS_MSG__CMsgGetID8_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgGetID8_clbk RACE_BOSS_MSG__CMsgGetID8_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgGetMsg10_ptr RACE_BOSS_MSG__CMsgGetMsg10_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgGetMsg10_clbk RACE_BOSS_MSG__CMsgGetMsg10_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgGetSerial12_ptr RACE_BOSS_MSG__CMsgGetSerial12_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgGetSerial12_clbk RACE_BOSS_MSG__CMsgGetSerial12_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgGetWebDBID14_ptr RACE_BOSS_MSG__CMsgGetWebDBID14_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgGetWebDBID14_clbk RACE_BOSS_MSG__CMsgGetWebDBID14_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgIsDayChanged16_ptr RACE_BOSS_MSG__CMsgIsDayChanged16_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgIsDayChanged16_clbk RACE_BOSS_MSG__CMsgIsDayChanged16_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgIsSendFromWeb18_ptr RACE_BOSS_MSG__CMsgIsSendFromWeb18_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgIsSendFromWeb18_clbk RACE_BOSS_MSG__CMsgIsSendFromWeb18_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgIsSendTime20_ptr RACE_BOSS_MSG__CMsgIsSendTime20_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgIsSendTime20_clbk RACE_BOSS_MSG__CMsgIsSendTime20_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgIsWait22_ptr RACE_BOSS_MSG__CMsgIsWait22_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgIsWait22_clbk RACE_BOSS_MSG__CMsgIsWait22_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgLoad24_ptr RACE_BOSS_MSG__CMsgLoad24_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgLoad24_clbk RACE_BOSS_MSG__CMsgLoad24_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgSave26_ptr RACE_BOSS_MSG__CMsgSave26_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgSave26_clbk RACE_BOSS_MSG__CMsgSave26_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgSet28_ptr RACE_BOSS_MSG__CMsgSet28_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgSet28_clbk RACE_BOSS_MSG__CMsgSet28_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgSetDayChanged30_ptr RACE_BOSS_MSG__CMsgSetDayChanged30_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgSetDayChanged30_clbk RACE_BOSS_MSG__CMsgSetDayChanged30_user(nullptr);
            
            Info::RACE_BOSS_MSG__CMsgSetDone32_ptr RACE_BOSS_MSG__CMsgSetDone32_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgSetDone32_clbk RACE_BOSS_MSG__CMsgSetDone32_user(nullptr);
            
            
            Info::RACE_BOSS_MSG__CMsgdtor_CMsg36_ptr RACE_BOSS_MSG__CMsgdtor_CMsg36_next(nullptr);
            Info::RACE_BOSS_MSG__CMsgdtor_CMsg36_clbk RACE_BOSS_MSG__CMsgdtor_CMsg36_user(nullptr);
            
            
            void RACE_BOSS_MSG__CMsgctor_CMsg2_wrapper(struct RACE_BOSS_MSG::CMsg* _this, char ucRace, unsigned int dwID)
            {
               RACE_BOSS_MSG__CMsgctor_CMsg2_user(_this, ucRace, dwID, RACE_BOSS_MSG__CMsgctor_CMsg2_next);
            };
            void RACE_BOSS_MSG__CMsgClear4_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               RACE_BOSS_MSG__CMsgClear4_user(_this, RACE_BOSS_MSG__CMsgClear4_next);
            };
            char* RACE_BOSS_MSG__CMsgGetBossName6_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgGetBossName6_user(_this, RACE_BOSS_MSG__CMsgGetBossName6_next);
            };
            unsigned int RACE_BOSS_MSG__CMsgGetID8_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgGetID8_user(_this, RACE_BOSS_MSG__CMsgGetID8_next);
            };
            char* RACE_BOSS_MSG__CMsgGetMsg10_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgGetMsg10_user(_this, RACE_BOSS_MSG__CMsgGetMsg10_next);
            };
            unsigned int RACE_BOSS_MSG__CMsgGetSerial12_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgGetSerial12_user(_this, RACE_BOSS_MSG__CMsgGetSerial12_next);
            };
            unsigned int RACE_BOSS_MSG__CMsgGetWebDBID14_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgGetWebDBID14_user(_this, RACE_BOSS_MSG__CMsgGetWebDBID14_next);
            };
            bool RACE_BOSS_MSG__CMsgIsDayChanged16_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgIsDayChanged16_user(_this, RACE_BOSS_MSG__CMsgIsDayChanged16_next);
            };
            bool RACE_BOSS_MSG__CMsgIsSendFromWeb18_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgIsSendFromWeb18_user(_this, RACE_BOSS_MSG__CMsgIsSendFromWeb18_next);
            };
            bool RACE_BOSS_MSG__CMsgIsSendTime20_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgIsSendTime20_user(_this, RACE_BOSS_MSG__CMsgIsSendTime20_next);
            };
            bool RACE_BOSS_MSG__CMsgIsWait22_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               return RACE_BOSS_MSG__CMsgIsWait22_user(_this, RACE_BOSS_MSG__CMsgIsWait22_next);
            };
            bool RACE_BOSS_MSG__CMsgLoad24_wrapper(struct RACE_BOSS_MSG::CMsg* _this, char ucRace, unsigned int dwCurTime)
            {
               return RACE_BOSS_MSG__CMsgLoad24_user(_this, ucRace, dwCurTime, RACE_BOSS_MSG__CMsgLoad24_next);
            };
            bool RACE_BOSS_MSG__CMsgSave26_wrapper(struct RACE_BOSS_MSG::CMsg* _this, char ucRace)
            {
               return RACE_BOSS_MSG__CMsgSave26_user(_this, ucRace, RACE_BOSS_MSG__CMsgSave26_next);
            };
            bool RACE_BOSS_MSG__CMsgSet28_wrapper(struct RACE_BOSS_MSG::CMsg* _this, unsigned int dwSerial, char* pwszName, char* pwszMsg, unsigned int dbWebSendDBID)
            {
               return RACE_BOSS_MSG__CMsgSet28_user(_this, dwSerial, pwszName, pwszMsg, dbWebSendDBID, RACE_BOSS_MSG__CMsgSet28_next);
            };
            void RACE_BOSS_MSG__CMsgSetDayChanged30_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               RACE_BOSS_MSG__CMsgSetDayChanged30_user(_this, RACE_BOSS_MSG__CMsgSetDayChanged30_next);
            };
            void RACE_BOSS_MSG__CMsgSetDone32_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               RACE_BOSS_MSG__CMsgSetDone32_user(_this, RACE_BOSS_MSG__CMsgSetDone32_next);
            };
            
            void RACE_BOSS_MSG__CMsgdtor_CMsg36_wrapper(struct RACE_BOSS_MSG::CMsg* _this)
            {
               RACE_BOSS_MSG__CMsgdtor_CMsg36_user(_this, RACE_BOSS_MSG__CMsgdtor_CMsg36_next);
            };
            
            ::std::array<hook_record, 17> CMsg_functions = 
            {
                _hook_record {
                    (LPVOID)0x14029dbe0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgctor_CMsg2_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgctor_CMsg2_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgctor_CMsg2_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsg::*)(char, unsigned int))&RACE_BOSS_MSG::CMsg::ctor_CMsg)
                },
                _hook_record {
                    (LPVOID)0x14029e3d0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgClear4_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgClear4_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgClear4_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::Clear)
                },
                _hook_record {
                    (LPVOID)0x1402a2cf0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetBossName6_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetBossName6_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgGetBossName6_wrapper),
                    (LPVOID)cast_pointer_function((char*(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::GetBossName)
                },
                _hook_record {
                    (LPVOID)0x1402a2880L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetID8_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetID8_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgGetID8_wrapper),
                    (LPVOID)cast_pointer_function((unsigned int(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::GetID)
                },
                _hook_record {
                    (LPVOID)0x1402a2d70L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetMsg10_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetMsg10_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgGetMsg10_wrapper),
                    (LPVOID)cast_pointer_function((char*(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::GetMsg)
                },
                _hook_record {
                    (LPVOID)0x1402a2cd0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetSerial12_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetSerial12_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgGetSerial12_wrapper),
                    (LPVOID)cast_pointer_function((unsigned int(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::GetSerial)
                },
                _hook_record {
                    (LPVOID)0x1402a2d90L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetWebDBID14_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgGetWebDBID14_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgGetWebDBID14_wrapper),
                    (LPVOID)cast_pointer_function((unsigned int(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::GetWebDBID)
                },
                _hook_record {
                    (LPVOID)0x1402a2b90L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsDayChanged16_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsDayChanged16_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgIsDayChanged16_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::IsDayChanged)
                },
                _hook_record {
                    (LPVOID)0x1402a2d10L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsSendFromWeb18_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsSendFromWeb18_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgIsSendFromWeb18_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::IsSendFromWeb)
                },
                _hook_record {
                    (LPVOID)0x14029dc50L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsSendTime20_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsSendTime20_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgIsSendTime20_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::IsSendTime)
                },
                _hook_record {
                    (LPVOID)0x1402a2b30L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsWait22_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgIsWait22_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgIsWait22_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::IsWait)
                },
                _hook_record {
                    (LPVOID)0x14029df40L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgLoad24_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgLoad24_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgLoad24_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)(char, unsigned int))&RACE_BOSS_MSG::CMsg::Load)
                },
                _hook_record {
                    (LPVOID)0x14029dcd0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSave26_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSave26_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgSave26_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)(char))&RACE_BOSS_MSG::CMsg::Save)
                },
                _hook_record {
                    (LPVOID)0x14029e2b0L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSet28_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSet28_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgSet28_wrapper),
                    (LPVOID)cast_pointer_function((bool(RACE_BOSS_MSG::CMsg::*)(unsigned int, char*, char*, unsigned int))&RACE_BOSS_MSG::CMsg::Set)
                },
                _hook_record {
                    (LPVOID)0x1402a2a50L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSetDayChanged30_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSetDayChanged30_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgSetDayChanged30_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::SetDayChanged)
                },
                _hook_record {
                    (LPVOID)0x1402a2a30L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSetDone32_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgSetDone32_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgSetDone32_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::SetDone)
                },
                _hook_record {
                    (LPVOID)0x14029dc40L,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgdtor_CMsg36_user,
                    (LPVOID *)&RACE_BOSS_MSG__CMsgdtor_CMsg36_next,
                    (LPVOID)cast_pointer_function(RACE_BOSS_MSG__CMsgdtor_CMsg36_wrapper),
                    (LPVOID)cast_pointer_function((void(RACE_BOSS_MSG::CMsg::*)())&RACE_BOSS_MSG::CMsg::dtor_CMsg)
                },
            };
        }; // end namespace Detail
    }; // end namespace RACE_BOSS_MSG
END_ATF_NAMESPACE
