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

// Facebook.Unity.Canvas.CanvasFacebook
struct CanvasFacebook_t943264545;
// Facebook.Unity.Canvas.ICanvasJSWrapper
struct ICanvasJSWrapper_t1740207084;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2634519556;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1384006650;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t2840116163;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t3650470111;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_CallbackManager1943358823.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor()
extern "C"  void CanvasFacebook__ctor_m739104072 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::.ctor(Facebook.Unity.Canvas.ICanvasJSWrapper,Facebook.Unity.CallbackManager)
extern "C"  void CanvasFacebook__ctor_m4105830901 (CanvasFacebook_t943264545 * __this, Object_t * ___canvasJSWrapper, CallbackManager_t1943358823 * ___callbackManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Canvas.CanvasFacebook::get_LimitEventUsage()
extern "C"  bool CanvasFacebook_get_LimitEventUsage_m3345519243 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void CanvasFacebook_set_LimitEventUsage_m3225057794 (CanvasFacebook_t943264545 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKName()
extern "C"  String_t* CanvasFacebook_get_SDKName_m3266565791 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKVersion()
extern "C"  String_t* CanvasFacebook_get_SDKVersion_m599607590 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::get_SDKUserAgent()
extern "C"  String_t* CanvasFacebook_get_SDKUserAgent_m2941672072 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,System.Boolean,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void CanvasFacebook_Init_m1868130010 (CanvasFacebook_t943264545 * __this, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, String_t* ___channelUrl, String_t* ___authResponse, bool ___frictionlessRequests, String_t* ___jsSDKLocale, HideUnityDelegate_t2364798903 * ___hideUnityDelegate, InitDelegate_t1475272884 * ___onInitComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithPublishPermissions_m3253303606 (CanvasFacebook_t943264545 * __this, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void CanvasFacebook_LogInWithReadPermissions_m991701351 (CanvasFacebook_t943264545 * __this, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::LogOut()
extern "C"  void CanvasFacebook_LogOut_m3840632614 (CanvasFacebook_t943264545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void CanvasFacebook_AppRequest_m1586172567 (CanvasFacebook_t943264545 * __this, String_t* ___message, Nullable_1_t3534247419  ___actionType, String_t* ___objectId, Object_t* ___to, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ActivateApp(System.String)
extern "C"  void CanvasFacebook_ActivateApp_m1120926766 (CanvasFacebook_t943264545 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_ShareLink_m3958304174 (CanvasFacebook_t943264545 * __this, Uri_t2776692961 * ___contentURL, String_t* ___contentTitle, String_t* ___contentDescription, Uri_t2776692961 * ___photoURL, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void CanvasFacebook_FeedShare_m769658074 (CanvasFacebook_t943264545 * __this, String_t* ___toId, Uri_t2776692961 * ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, Uri_t2776692961 * ___picture, String_t* ___mediaSource, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void CanvasFacebook_Pay_m362726011 (CanvasFacebook_t943264545 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t1438485399  ___quantityMin, Nullable_1_t1438485399  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_1_t2840116163 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void CanvasFacebook_GameGroupCreate_m3606919150 (CanvasFacebook_t943264545 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_1_t2288646710 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void CanvasFacebook_GameGroupJoin_m352387522 (CanvasFacebook_t943264545 * __this, String_t* ___id, FacebookDelegate_1_t1900386660 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void CanvasFacebook_GetAppLink_m3607313748 (CanvasFacebook_t943264545 * __this, FacebookDelegate_1_t3690308374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogEvent_m3544038861 (CanvasFacebook_t943264545 * __this, String_t* ___logEvent, Nullable_1_t3844246929  ___valueToSum, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void CanvasFacebook_AppEventsLogPurchase_m272100805 (CanvasFacebook_t943264545 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnLoginComplete(System.String)
extern "C"  void CanvasFacebook_OnLoginComplete_m3272372761 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void CanvasFacebook_OnGetAppLinkComplete_m2677239753 (CanvasFacebook_t943264545 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void CanvasFacebook_OnFacebookAuthResponseChange_m1216774408 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnPayComplete(System.String)
extern "C"  void CanvasFacebook_OnPayComplete_m169414778 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnAppRequestsComplete(System.String)
extern "C"  void CanvasFacebook_OnAppRequestsComplete_m1505296765 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnShareLinkComplete(System.String)
extern "C"  void CanvasFacebook_OnShareLinkComplete_m499807753 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupCreateComplete(System.String)
extern "C"  void CanvasFacebook_OnGroupCreateComplete_m4144612711 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnGroupJoinComplete(System.String)
extern "C"  void CanvasFacebook_OnGroupJoinComplete_m1652860985 (CanvasFacebook_t943264545 * __this, String_t* ___responseJsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Canvas.CanvasFacebook::OnUrlResponse(System.String)
extern "C"  void CanvasFacebook_OnUrlResponse_m1932736459 (CanvasFacebook_t943264545 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::FormatAuthResponse(System.String)
extern "C"  String_t* CanvasFacebook_FormatAuthResponse_m3741147555 (Object_t * __this /* static, unused */, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Canvas.CanvasFacebook::FormatResult(System.String)
extern "C"  String_t* CanvasFacebook_FormatResult_m357980495 (Object_t * __this /* static, unused */, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Facebook.Unity.Canvas.CanvasFacebook::GetFormattedResponseDictionary(System.String)
extern "C"  Object_t* CanvasFacebook_GetFormattedResponseDictionary_m2553496940 (Object_t * __this /* static, unused */, String_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
