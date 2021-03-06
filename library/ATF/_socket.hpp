// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <sockaddr_in.hpp>


START_ATF_NAMESPACE
    struct _socket
    {
        unsigned __int64 m_Socket;
        int m_nIndex;
        unsigned int m_dwSerial;
        sockaddr_in m_Addr;
        char m_szID[20];
        bool m_bAccept;
        bool m_bSendable;
        bool m_bEnterCheck;
        unsigned int m_dwConnectTime;
        unsigned int m_dwLastCloseTime;
        unsigned int m_dwRealClientKeyValue[4];
        unsigned int m_dwTotalRecvMsg;
        unsigned int m_dwTotalSendMsg;
        unsigned int m_dwTotalRecvBlock;
        unsigned int m_dwBoundResponTerm;
        unsigned int m_dwSendBlockTime;
        unsigned int m_dwRecvPopMissTime;
        unsigned int m_dwSendSpeedHackTime;
        unsigned int m_dwResponSpeedHackTime;
        char m_bySpeedHackContCount;
        char m_bySpeedHackMissCount;
        unsigned int m_dwSpeedHackKey[4];
        unsigned int m_dwPingPongCount;
        unsigned int m_dwSpeedHackCount;
        unsigned int m_dwLastRecvTime;
        unsigned int m_dwLastSendTime;
        void *m_hFGContext;
    public:
        void InitParam();
        _socket();
        void ctor__socket();
        ~_socket();
        void dtor__socket();
    };
END_ATF_NAMESPACE
