#include <_ANIMUSKEYDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::_ANIMUSKEYCovDBKey2_ptr _ANIMUSKEYCovDBKey2_next(nullptr);
        Info::_ANIMUSKEYCovDBKey2_clbk _ANIMUSKEYCovDBKey2_user(nullptr);
        
        Info::_ANIMUSKEYIsFilled4_ptr _ANIMUSKEYIsFilled4_next(nullptr);
        Info::_ANIMUSKEYIsFilled4_clbk _ANIMUSKEYIsFilled4_user(nullptr);
        
        Info::_ANIMUSKEYLoadDBKey6_ptr _ANIMUSKEYLoadDBKey6_next(nullptr);
        Info::_ANIMUSKEYLoadDBKey6_clbk _ANIMUSKEYLoadDBKey6_user(nullptr);
        
        Info::_ANIMUSKEYSetRelease8_ptr _ANIMUSKEYSetRelease8_next(nullptr);
        Info::_ANIMUSKEYSetRelease8_clbk _ANIMUSKEYSetRelease8_user(nullptr);
        
        char _ANIMUSKEYCovDBKey2_wrapper(struct _ANIMUSKEY* _this)
        {
           return _ANIMUSKEYCovDBKey2_user(_this, _ANIMUSKEYCovDBKey2_next);
        };
        bool _ANIMUSKEYIsFilled4_wrapper(struct _ANIMUSKEY* _this)
        {
           return _ANIMUSKEYIsFilled4_user(_this, _ANIMUSKEYIsFilled4_next);
        };
        void _ANIMUSKEYLoadDBKey6_wrapper(struct _ANIMUSKEY* _this, char pl_byKey)
        {
           _ANIMUSKEYLoadDBKey6_user(_this, pl_byKey, _ANIMUSKEYLoadDBKey6_next);
        };
        void _ANIMUSKEYSetRelease8_wrapper(struct _ANIMUSKEY* _this)
        {
           _ANIMUSKEYSetRelease8_user(_this, _ANIMUSKEYSetRelease8_next);
        };
        
        ::std::array<hook_record, 4> _ANIMUSKEY_functions = 
        {
            _hook_record {
                (LPVOID)0x1401bf2e0L,
                (LPVOID *)&_ANIMUSKEYCovDBKey2_user,
                (LPVOID *)&_ANIMUSKEYCovDBKey2_next,
                (LPVOID)cast_pointer_function(_ANIMUSKEYCovDBKey2_wrapper),
                (LPVOID)cast_pointer_function((char(_ANIMUSKEY::*)())&_ANIMUSKEY::CovDBKey)
            },
            _hook_record {
                (LPVOID)0x14010e3a0L,
                (LPVOID *)&_ANIMUSKEYIsFilled4_user,
                (LPVOID *)&_ANIMUSKEYIsFilled4_next,
                (LPVOID)cast_pointer_function(_ANIMUSKEYIsFilled4_wrapper),
                (LPVOID)cast_pointer_function((bool(_ANIMUSKEY::*)())&_ANIMUSKEY::IsFilled)
            },
            _hook_record {
                (LPVOID)0x140120520L,
                (LPVOID *)&_ANIMUSKEYLoadDBKey6_user,
                (LPVOID *)&_ANIMUSKEYLoadDBKey6_next,
                (LPVOID)cast_pointer_function(_ANIMUSKEYLoadDBKey6_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUSKEY::*)(char))&_ANIMUSKEY::LoadDBKey)
            },
            _hook_record {
                (LPVOID)0x140076350L,
                (LPVOID *)&_ANIMUSKEYSetRelease8_user,
                (LPVOID *)&_ANIMUSKEYSetRelease8_next,
                (LPVOID)cast_pointer_function(_ANIMUSKEYSetRelease8_wrapper),
                (LPVOID)cast_pointer_function((void(_ANIMUSKEY::*)())&_ANIMUSKEY::SetRelease)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
