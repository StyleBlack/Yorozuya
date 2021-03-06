// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CMoveMapLimitRightVtbl.hpp>
#include <CPlayer.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CMoveMapLimitRight
    {
        enum FLAG_TYPE
        {
            FT_NOTIFY_FORCE_MOVE = 0x0,
            FT_MAX = 0x1,
        };
        CMoveMapLimitRightVtbl *vfptr;
        int m_iType;
    public:
        CMoveMapLimitRight(int iType);
        void ctor_CMoveMapLimitRight(int iType);
        void CleanUp();
        static struct CMoveMapLimitRight* Create(int iType);
        void CreateComplete(struct CPlayer* pkPlayer);
        int GetType();
        bool IsHaveRight();
        void Load(struct CPlayer* pkPlayer);
        void LogIn(struct CPlayer* pkPlayer);
        void LogOut(struct CPlayer* pkPlayer);
        void SetFlag(int iType, bool bFlag);
        ~CMoveMapLimitRight();
        void dtor_CMoveMapLimitRight();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
