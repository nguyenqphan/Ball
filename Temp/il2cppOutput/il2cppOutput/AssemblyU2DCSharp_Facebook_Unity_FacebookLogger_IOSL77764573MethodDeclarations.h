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

// Facebook.Unity.FacebookLogger/IOSLogger
struct IOSLogger_t77764573;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void Facebook.Unity.FacebookLogger/IOSLogger::.ctor()
extern "C"  void IOSLogger__ctor_m2655730534 (IOSLogger_t77764573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger/IOSLogger::Log(System.String)
extern "C"  void IOSLogger_Log_m1975293050 (IOSLogger_t77764573 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger/IOSLogger::Info(System.String)
extern "C"  void IOSLogger_Info_m105438262 (IOSLogger_t77764573 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger/IOSLogger::Warn(System.String)
extern "C"  void IOSLogger_Warn_m815154014 (IOSLogger_t77764573 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookLogger/IOSLogger::Error(System.String)
extern "C"  void IOSLogger_Error_m2033111542 (IOSLogger_t77764573 * __this, String_t* ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
