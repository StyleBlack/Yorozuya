// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _IMAGEHLP_LINE64
    {
        unsigned int SizeOfStruct;
        void *Key;
        unsigned int LineNumber;
        char *FileName;
        unsigned __int64 Address;
    };    
    static_assert(ATF::checkSize<_IMAGEHLP_LINE64, 40>(), "_IMAGEHLP_LINE64");
END_ATF_NAMESPACE
