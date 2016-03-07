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

// Facebook.Unity.FacebookBase
struct FacebookBase_t2319813814;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// System.String
struct String_t;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t2979309097;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// Facebook.Unity.LoginResult
struct LoginResult_t1165053605;
// System.Uri
struct Uri_t2776692961;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod969347464.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "AssemblyU2DCSharp_Facebook_Unity_LoginResult1165053605.h"

// System.Void Facebook.Unity.FacebookBase::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase__ctor_m1438933772 (FacebookBase_t2319813814 * __this, CallbackManager_t1943358823 * ___callbackManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FacebookBase::get_SDKUserAgent()
extern "C"  String_t* FacebookBase_get_SDKUserAgent_m411226039 (FacebookBase_t2319813814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_LoggedIn()
extern "C"  bool FacebookBase_get_LoggedIn_m3371726637 (FacebookBase_t2319813814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FacebookBase::get_Initialized()
extern "C"  bool FacebookBase_get_Initialized_m964585232 (FacebookBase_t2319813814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_Initialized(System.Boolean)
extern "C"  void FacebookBase_set_Initialized_m765926111 (FacebookBase_t2319813814 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::get_CallbackManager()
extern "C"  CallbackManager_t1943358823 * FacebookBase_get_CallbackManager_m3167100966 (FacebookBase_t2319813814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::set_CallbackManager(Facebook.Unity.CallbackManager)
extern "C"  void FacebookBase_set_CallbackManager_m3722018165 (FacebookBase_t2319813814 * __this, CallbackManager_t1943358823 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::Init(Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FacebookBase_Init_m1682655584 (FacebookBase_t2319813814 * __this, HideUnityDelegate_t2364798903 * ___hideUnityDelegate, InitDelegate_t1475272884 * ___onInitComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::LogOut()
extern "C"  void FacebookBase_LogOut_m3591520315 (FacebookBase_t2319813814 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_AppRequest_m3639294192 (FacebookBase_t2319813814 * __this, String_t* ___message, Object_t* ___to, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m976572619 (FacebookBase_t2319813814 * __this, String_t* ___query, int32_t ___method, Object_t* ___formData, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::API(System.String,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void FacebookBase_API_m3025449579 (FacebookBase_t2319813814 * __this, String_t* ___query, int32_t ___method, WWWForm_t3999572776 * ___formData, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnHideUnity(System.Boolean)
extern "C"  void FacebookBase_OnHideUnity_m2650270364 (FacebookBase_t2319813814 * __this, bool ___isGameShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnInitComplete(System.String)
extern "C"  void FacebookBase_OnInitComplete_m2368897641 (FacebookBase_t2319813814 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnLogoutComplete(System.String)
extern "C"  void FacebookBase_OnLogoutComplete_m3000703087 (FacebookBase_t2319813814 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::ValidateAppRequestArgs(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FacebookBase_ValidateAppRequestArgs_m3314111263 (FacebookBase_t2319813814 * __this, String_t* ___message, Nullable_1_t3534247419  ___actionType, String_t* ___objectId, Object_t* ___to, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FacebookBase::OnAuthResponse(Facebook.Unity.LoginResult)
extern "C"  void FacebookBase_OnAuthResponse_m2942255828 (FacebookBase_t2319813814 * __this, LoginResult_t1165053605 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.FacebookBase::CopyByValue(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  Object_t* FacebookBase_CopyByValue_m4014777641 (FacebookBase_t2319813814 * __this, Object_t* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri Facebook.Unity.FacebookBase::GetGraphUrl(System.String)
extern "C"  Uri_t2776692961 * FacebookBase_GetGraphUrl_m599244394 (FacebookBase_t2319813814 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
