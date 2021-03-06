// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <BASE_HACKSHEILD_PARAM.hpp>
#include <CHackShieldExSystem.hpp>
#include <_HSHIELD_CLIENT_CONTEXT.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  HACKSHEILD_PARAM_ANTICP : BASE_HACKSHEILD_PARAM
    {
        enum KICK_REASON
        {
            KICK_REASON_CRC_ACK_DELAY = 0x1,
            KICK_REASON_FIRST_GUID_INVALID = 0x2,
            KICK_REASON_CRC_ACK_INVALID = 0x3,
            KICK_REASON_NOT_HACKSHEILD_CLIENT = 0x4,
        };
        int m_nSocketIndex;
        unsigned int m_dwLastSyncQryTime;
        char m_byVerifyState;
        _HSHIELD_CLIENT_CONTEXT m_CrcInfo;
        char m_byGUIDClientInfo[20];
    public:
        void CheckClient();
        HACKSHEILD_PARAM_ANTICP();
        void ctor_HACKSHEILD_PARAM_ANTICP();
        void Init();
        bool IsLogPass();
        void Kick(char byReason, unsigned int dwRet);
        bool OnCheckSession_FirstVerify(int n);
        void OnConnect(int nIndex);
        void OnDisConnect();
        void OnLoop();
        bool OnRecvSession(struct CHackShieldExSystem* mgr, int nIndex, char byProtocol, uint64_t tSize, char* pMsg);
        bool OnRecvSession_ClientCheckSum_Response(uint64_t tSize, char* pMsg);
        bool OnRecvSession_ClientCrc_Response(uint64_t tSize, char* pMsg);
        bool OnRecvSession_ServerCheckSum_Request(int nIndex);
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
