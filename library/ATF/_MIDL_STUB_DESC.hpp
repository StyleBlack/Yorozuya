// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <$2E938192DD5FA5274C06DCBFB060397F.hpp>
#include <_COMM_FAULT_OFFSETS.hpp>
#include <_GENERIC_BINDING_ROUTINE_PAIR.hpp>
#include <_MALLOC_FREE_STRUCT.hpp>
#include <_NDR_CS_ROUTINES.hpp>
#include <_USER_MARSHAL_ROUTINE_QUADRUPLE.hpp>
#include <_XMIT_ROUTINE_QUINTUPLE.hpp>


START_ATF_NAMESPACE
    struct _MIDL_STUB_DESC
    {
        void *RpcInterfaceInformation;
        void *(WINAPIV *pfnAllocate)(unsigned __int64);
        void (WINAPIV *pfnFree)(void *);
        $2E938192DD5FA5274C06DCBFB060397F IMPLICIT_HANDLE_INFO;
        void (WINAPIV *const *apfnNdrRundownRoutines)(void *);
        _GENERIC_BINDING_ROUTINE_PAIR *aGenericBindingRoutinePairs;
        void (WINAPIV *const *apfnExprEval)(_MIDL_STUB_MESSAGE *);
        _XMIT_ROUTINE_QUINTUPLE *aXmitQuintuple;
        const char *pFormatTypes;
        int fCheckBounds;
        unsigned int Version;
        _MALLOC_FREE_STRUCT *pMallocFreeStruct;
        int MIDLVersion;
        _COMM_FAULT_OFFSETS *CommFaultOffsets;
        _USER_MARSHAL_ROUTINE_QUADRUPLE *aUserMarshalQuadruple;
        void (WINAPIV *const *NotifyRoutineTable)();
        unsigned __int64 mFlags;
        _NDR_CS_ROUTINES *CsRoutineTables;
        void *Reserved4;
        unsigned __int64 Reserved5;
    };
END_ATF_NAMESPACE
