// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <DnBuffNode.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  GMRequestData : DnBuffNode
    {
        unsigned int m_dwPlayerSerial;
        unsigned int m_dwCallTimer;
        char m_wszUserName[17];
    public:
        GMRequestData();
        void ctor_GMRequestData();
        void Set(unsigned int dwSerial, char* pwszName, unsigned int dwTime);
        ~GMRequestData();
        void dtor_GMRequestData();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
