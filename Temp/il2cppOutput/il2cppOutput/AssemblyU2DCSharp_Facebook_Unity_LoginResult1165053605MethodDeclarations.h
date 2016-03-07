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

// Facebook.Unity.LoginResult
struct LoginResult_t1165053605;
// System.String
struct String_t;
// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_AccessToken3144904884.h"

// System.Void Facebook.Unity.LoginResult::.ctor(System.String)
extern "C"  void LoginResult__ctor_m1080664876 (LoginResult_t1165053605 * __this, String_t* ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::.cctor()
extern "C"  void LoginResult__cctor_m2472623831 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::get_AccessToken()
extern "C"  AccessToken_t3144904884 * LoginResult_get_AccessToken_m3898112215 (LoginResult_t1165053605 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.LoginResult::set_AccessToken(Facebook.Unity.AccessToken)
extern "C"  void LoginResult_set_AccessToken_m1730859416 (LoginResult_t1165053605 * __this, AccessToken_t3144904884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
