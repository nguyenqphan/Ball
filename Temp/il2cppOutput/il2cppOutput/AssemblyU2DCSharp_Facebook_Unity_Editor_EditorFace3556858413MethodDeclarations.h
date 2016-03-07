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

// Facebook.Unity.Editor.EditorFacebook
struct EditorFacebook_t3556858413;
// System.String
struct String_t;
// Facebook.Unity.IFacebookCallbackHandler
struct IFacebookCallbackHandler_t69135093;
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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t573598949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>
struct FacebookDelegate_1_t2840116163;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t2422421107;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Nullable_1_gen3534247419.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void Facebook.Unity.Editor.EditorFacebook::.ctor()
extern "C"  void EditorFacebook__ctor_m2898604776 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Editor.EditorFacebook::get_LimitEventUsage()
extern "C"  bool EditorFacebook_get_LimitEventUsage_m446404651 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_LimitEventUsage(System.Boolean)
extern "C"  void EditorFacebook_set_LimitEventUsage_m1885546402 (EditorFacebook_t3556858413 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.Editor.EditorFacebook::get_ShareDialogMode()
extern "C"  int32_t EditorFacebook_get_ShareDialogMode_m2923418195 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void EditorFacebook_set_ShareDialogMode_m3075525514 (EditorFacebook_t3556858413 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKName()
extern "C"  String_t* EditorFacebook_get_SDKName_m1368816703 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Editor.EditorFacebook::get_SDKVersion()
extern "C"  String_t* EditorFacebook_get_SDKVersion_m3706011526 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebookCallbackHandler Facebook.Unity.Editor.EditorFacebook::get_EditorGameObject()
extern "C"  Object_t * EditorFacebook_get_EditorGameObject_m4012053215 (EditorFacebook_t3556858413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Init(Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void EditorFacebook_Init_m3646259947 (EditorFacebook_t3556858413 * __this, HideUnityDelegate_t2364798903 * ___hideUnityDelegate, InitDelegate_t1475272884 * ___onInitComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithReadPermissions_m1719541703 (EditorFacebook_t3556858413 * __this, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void EditorFacebook_LogInWithPublishPermissions_m1055352534 (EditorFacebook_t3556858413 * __this, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppRequest(System.String,System.Nullable`1<Facebook.Unity.OGActionType>,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void EditorFacebook_AppRequest_m2513690871 (EditorFacebook_t3556858413 * __this, String_t* ___message, Nullable_1_t3534247419  ___actionType, String_t* ___objectId, Object_t* ___to, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShareLink_m1226029902 (EditorFacebook_t3556858413 * __this, Uri_t2776692961 * ___contentURL, String_t* ___contentTitle, String_t* ___contentDescription, Uri_t2776692961 * ___photoURL, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_FeedShare_m2358891130 (EditorFacebook_t3556858413 * __this, String_t* ___toId, Uri_t2776692961 * ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, Uri_t2776692961 * ___picture, String_t* ___mediaSource, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void EditorFacebook_GameGroupCreate_m1405236622 (EditorFacebook_t3556858413 * __this, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_1_t2288646710 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void EditorFacebook_GameGroupJoin_m3760488290 (EditorFacebook_t3556858413 * __this, String_t* ___id, FacebookDelegate_1_t1900386660 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ActivateApp(System.String)
extern "C"  void EditorFacebook_ActivateApp_m2428467854 (EditorFacebook_t3556858413 * __this, String_t* ___appId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_GetAppLink_m2013422516 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t3690308374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogEvent_m2819501101 (EditorFacebook_t3556858413 * __this, String_t* ___logEvent, Nullable_1_t3844246929  ___valueToSum, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppEventsLogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void EditorFacebook_AppEventsLogPurchase_m2976980005 (EditorFacebook_t3556858413 * __this, float ___logPurchase, String_t* ___currency, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void EditorFacebook_AppInvite_m2336311250 (EditorFacebook_t3556858413 * __this, Uri_t2776692961 * ___appLinkUrl, Uri_t2776692961 * ___previewImageUrl, FacebookDelegate_1_t573598949 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::FetchDeferredAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void EditorFacebook_FetchDeferredAppLink_m4220595185 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t3690308374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::Pay(System.String,System.String,System.Int32,System.Nullable`1<System.Int32>,System.Nullable`1<System.Int32>,System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayResult>)
extern "C"  void EditorFacebook_Pay_m4277897435 (EditorFacebook_t3556858413 * __this, String_t* ___product, String_t* ___action, int32_t ___quantity, Nullable_1_t1438485399  ___quantityMin, Nullable_1_t1438485399  ___quantityMax, String_t* ___requestId, String_t* ___pricepointId, String_t* ___testCurrency, FacebookDelegate_1_t2840116163 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void EditorFacebook_RefreshCurrentAccessToken_m2777720833 (EditorFacebook_t3556858413 * __this, FacebookDelegate_1_t2422421107 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppRequestsComplete(System.String)
extern "C"  void EditorFacebook_OnAppRequestsComplete_m2930116573 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGetAppLinkComplete(System.String)
extern "C"  void EditorFacebook_OnGetAppLinkComplete_m1337728361 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupCreateComplete(System.String)
extern "C"  void EditorFacebook_OnGroupCreateComplete_m1274465223 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnGroupJoinComplete(System.String)
extern "C"  void EditorFacebook_OnGroupJoinComplete_m2579482265 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnLoginComplete(System.String)
extern "C"  void EditorFacebook_OnLoginComplete_m1985331321 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnShareLinkComplete(System.String)
extern "C"  void EditorFacebook_OnShareLinkComplete_m1426429033 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnAppInviteComplete(System.String)
extern "C"  void EditorFacebook_OnAppInviteComplete_m3841475896 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFetchDeferredAppLinkComplete(System.String)
extern "C"  void EditorFacebook_OnFetchDeferredAppLinkComplete_m1219350540 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnPayComplete(System.String)
extern "C"  void EditorFacebook_OnPayComplete_m2585949914 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnRefreshCurrentAccessTokenComplete(System.String)
extern "C"  void EditorFacebook_OnRefreshCurrentAccessTokenComplete_m1996687659 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnFacebookAuthResponseChange(System.String)
extern "C"  void EditorFacebook_OnFacebookAuthResponseChange_m980913832 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::OnUrlResponse(System.String)
extern "C"  void EditorFacebook_OnUrlResponse_m54304299 (EditorFacebook_t3556858413 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Editor.EditorFacebook::ShowMockShareDialog(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void EditorFacebook_ShowMockShareDialog_m3255752417 (EditorFacebook_t3556858413 * __this, String_t* ___subTitle, FacebookDelegate_1_t1384006650 * ___userCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
