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

// Facebook.Unity.Mobile.MobileFacebook
struct MobileFacebook_t974549177;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;
// System.String
struct String_t;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"
#include "mscorlib_System_String968488902.h"

// System.Void Facebook.Unity.Mobile.MobileFacebook::.ctor(Facebook.Unity.CallbackManager)
extern "C"  void MobileFacebook__ctor_m2525648705 (MobileFacebook_t974549177 * __this, CallbackManager_t1943358823 * ___callbackManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Mobile.MobileFacebook::get_ShareDialogMode()
extern "C"  int32_t MobileFacebook_get_ShareDialogMode_m3994491891 (MobileFacebook_t974549177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void MobileFacebook_set_ShareDialogMode_m1467972906 (MobileFacebook_t974549177 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnLoginComplete(System.String)
extern "C"  void MobileFacebook_OnLoginComplete_m3079097049 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void MobileFacebook_OnGetAppLinkComplete_m1170345737 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupCreateComplete(System.String)
extern "C"  void MobileFacebook_OnGroupCreateComplete_m380571175 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnGroupJoinComplete(System.String)
extern "C"  void MobileFacebook_OnGroupJoinComplete_m2019893497 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppRequestsComplete(System.String)
extern "C"  void MobileFacebook_OnAppRequestsComplete_m2036222525 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnAppInviteComplete(System.String)
extern "C"  void MobileFacebook_OnAppInviteComplete_m3281887128 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnFetchDeferredAppLinkComplete(System.String)
extern "C"  void MobileFacebook_OnFetchDeferredAppLinkComplete_m2544515500 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnShareLinkComplete(System.String)
extern "C"  void MobileFacebook_OnShareLinkComplete_m866840265 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Mobile.MobileFacebook::OnRefreshCurrentAccessTokenComplete(System.String)
extern "C"  void MobileFacebook_OnRefreshCurrentAccessTokenComplete_m1667736459 (MobileFacebook_t974549177 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Mobile.MobileFacebook::DeserializeMessage(System.String)
extern "C"  Object_t* MobileFacebook_DeserializeMessage_m1681838625 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Mobile.MobileFacebook::SerializeDictionary(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C"  String_t* MobileFacebook_SerializeDictionary_m2760557123 (Object_t * __this /* static, unused */, Object_t* ___dict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetCallbackId(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetCallbackId_m2368855007 (Object_t * __this /* static, unused */, Object_t* ___result, String_t** ___callbackId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Mobile.MobileFacebook::TryGetError(System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.String&)
extern "C"  bool MobileFacebook_TryGetError_m1498725139 (Object_t * __this /* static, unused */, Object_t* ___result, String_t** ___errorMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
