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

// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t1434320288;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"
#include "mscorlib_System_Object837106420.h"

// System.Int64 Facebook.Unity.Utilities::TotalSeconds(System.DateTime)
extern "C"  int64_t Utilities_TotalSeconds_m2621164156 (Object_t * __this /* static, unused */, DateTime_t339033936  ___dateTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToCommaSeparateList(System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  String_t* Utilities_ToCommaSeparateList_m2708553843 (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::AbsoluteUrlOrEmptyString(System.Uri)
extern "C"  String_t* Utilities_AbsoluteUrlOrEmptyString_m3442024491 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::GetUserAgent(System.String,System.String)
extern "C"  String_t* Utilities_GetUserAgent_m3046302949 (Object_t * __this /* static, unused */, String_t* ___productName, String_t* ___productVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::ToJson(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* Utilities_ToJson_m675583844 (Object_t * __this /* static, unused */, Object_t* ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AccessToken Facebook.Unity.Utilities::ParseAccessTokenFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  AccessToken_t3144904884 * Utilities_ParseAccessTokenFromResult_m2258932600 (Object_t * __this /* static, unused */, Object_t* ___resultDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::ParseExpirationDateFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  DateTime_t339033936  Utilities_ParseExpirationDateFromResult_m658593134 (Object_t * __this /* static, unused */, Object_t* ___resultDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Facebook.Unity.Utilities::ParseLastRefreshFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Nullable_1_t3225071844  Utilities_ParseLastRefreshFromResult_m266401315 (Object_t * __this /* static, unused */, Object_t* ___resultDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.ICollection`1<System.String> Facebook.Unity.Utilities::ParsePermissionFromResult(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Object_t* Utilities_ParsePermissionFromResult_m4171489813 (Object_t * __this /* static, unused */, Object_t* ___resultDictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Facebook.Unity.Utilities::FromTimestamp(System.Int32)
extern "C"  DateTime_t339033936  Utilities_FromTimestamp_m476580852 (Object_t * __this /* static, unused */, int32_t ___timestamp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Utilities::<ParsePermissionFromResult>m__6(System.Object)
extern "C"  String_t* Utilities_U3CParsePermissionFromResultU3Em__6_m2701115053 (Object_t * __this /* static, unused */, Object_t * ___permission, const MethodInfo* method) IL2CPP_METHOD_ATTR;
