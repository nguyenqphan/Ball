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

// Facebook.Unity.MethodArguments
struct MethodArguments_t3878806324;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_MethodArguments3878806324.h"
#include "mscorlib_System_String968488902.h"
#include "System_System_Uri2776692961.h"

// System.Void Facebook.Unity.MethodArguments::.ctor()
extern "C"  void MethodArguments__ctor_m2104387431 (MethodArguments_t3878806324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(Facebook.Unity.MethodArguments)
extern "C"  void MethodArguments__ctor_m2910977459 (MethodArguments_t3878806324 * __this, MethodArguments_t3878806324 * ___methodArgs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::.ctor(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments__ctor_m71005845 (MethodArguments_t3878806324 * __this, Object_t* ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddString(System.String,System.String)
extern "C"  void MethodArguments_AddString_m620728135 (MethodArguments_t3878806324 * __this, String_t* ___argumentName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddCommaSeparatedList(System.String,System.Collections.Generic.IEnumerable`1<System.String>)
extern "C"  void MethodArguments_AddCommaSeparatedList_m222366791 (MethodArguments_t3878806324 * __this, String_t* ___argumentName, Object_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddDictionary(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  void MethodArguments_AddDictionary_m2983313916 (MethodArguments_t3878806324 * __this, String_t* ___argumentName, Object_t* ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.MethodArguments::AddUri(System.String,System.Uri)
extern "C"  void MethodArguments_AddUri_m1217908927 (MethodArguments_t3878806324 * __this, String_t* ___argumentName, Uri_t2776692961 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.MethodArguments::ToJsonString()
extern "C"  String_t* MethodArguments_ToJsonString_m3811311828 (MethodArguments_t3878806324 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> Facebook.Unity.MethodArguments::ToStringDict(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  Dictionary_2_t2606186806 * MethodArguments_ToStringDict_m2051508111 (Object_t * __this /* static, unused */, Object_t* ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
