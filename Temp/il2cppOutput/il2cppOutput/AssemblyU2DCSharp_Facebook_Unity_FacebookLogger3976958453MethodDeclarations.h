#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.IFacebookLogger
struct IFacebookLogger_t2359090814;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t2956870243;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Facebook.Unity.FacebookLogger::.cctor()
extern "C"  void FacebookLogger__cctor_m2057496761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookLogger Facebook.Unity.FacebookLogger::get_Instance()
extern "C"  Object_t * FacebookLogger_get_Instance_m2559893711 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::set_Instance(Facebook.Unity.IFacebookLogger)
extern "C"  void FacebookLogger_set_Instance_m451724452 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String)
extern "C"  void FacebookLogger_Log_m1855588780 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Log(System.String,System.String[])
extern "C"  void FacebookLogger_Log_m4233757190 (Object_t * __this /* static, unused */, String_t* ___format, StringU5BU5D_t2956870243* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String)
extern "C"  void FacebookLogger_Info_m689573188 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Info(System.String,System.String[])
extern "C"  void FacebookLogger_Info_m2572146078 (Object_t * __this /* static, unused */, String_t* ___format, StringU5BU5D_t2956870243* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String)
extern "C"  void FacebookLogger_Warn_m1399288940 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Warn(System.String,System.String[])
extern "C"  void FacebookLogger_Warn_m2088365254 (Object_t * __this /* static, unused */, String_t* ___format, StringU5BU5D_t2956870243* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String)
extern "C"  void FacebookLogger_Error_m2961425064 (Object_t * __this /* static, unused */, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger::Error(System.String,System.String[])
extern "C"  void FacebookLogger_Error_m3406447362 (Object_t * __this /* static, unused */, String_t* ___format, StringU5BU5D_t2956870243* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
