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

// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "AssemblyU2DCSharp_Facebook_Unity_AccessToken3144904884.h"

// System.Void Facebook.Unity.AccessToken::.ctor(System.String,System.String,System.DateTime,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken__ctor_m3299925913 (AccessToken_t3144904884 * __this, String_t* ___tokenString, String_t* ___userId, DateTime_t339033936  ___expirationTime, Object_t* ___permissions, Nullable_1_t3225071844  ___lastRefresh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::get_CurrentAccessToken()
extern "C"  AccessToken_t3144904884 * AccessToken_get_CurrentAccessToken_m1256155595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_CurrentAccessToken(Facebook.Unity.AccessToken)
extern "C"  void AccessToken_set_CurrentAccessToken_m2536477442 (Object_t * __this /* static, unused */, AccessToken_t3144904884 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_TokenString()
extern "C"  String_t* AccessToken_get_TokenString_m3905857795 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_TokenString(System.String)
extern "C"  void AccessToken_set_TokenString_m2531968496 (AccessToken_t3144904884 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.AccessToken::get_ExpirationTime()
extern "C"  DateTime_t339033936  AccessToken_get_ExpirationTime_m419758267 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_ExpirationTime(System.DateTime)
extern "C"  void AccessToken_set_ExpirationTime_m1688375586 (AccessToken_t3144904884 * __this, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::get_Permissions()
extern "C"  Object_t* AccessToken_get_Permissions_m382482404 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_Permissions(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void AccessToken_set_Permissions_m1651981167 (AccessToken_t3144904884 * __this, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::get_UserId()
extern "C"  String_t* AccessToken_get_UserId_m951892911 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_UserId(System.String)
extern "C"  void AccessToken_set_UserId_m4114636290 (AccessToken_t3144904884 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::get_LastRefresh()
extern "C"  Nullable_1_t3225071844  AccessToken_get_LastRefresh_m2218488627 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AccessToken::set_LastRefresh(System.Nullable`1<System.DateTime>)
extern "C"  void AccessToken_set_LastRefresh_m1122760990 (AccessToken_t3144904884 * __this, Nullable_1_t3225071844  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.AccessToken::ToJson()
extern "C"  String_t* AccessToken_ToJson_m242884835 (AccessToken_t3144904884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
