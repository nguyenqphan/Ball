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

// Facebook.Unity.FB
struct FB_t2519727771;
// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t4281310222;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t1601980106;
// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>
struct FacebookDelegate_1_t2634519556;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>
struct FacebookDelegate_1_t2757548155;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t3709260776;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>
struct FacebookDelegate_1_t1384006650;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t2979309097;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>
struct FacebookDelegate_1_t2288646710;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>
struct FacebookDelegate_1_t1900386660;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_Unity_FB_OnDLLLoaded1601980106.h"
#include "AssemblyU2DCSharp_Facebook_Unity_InitDelegate1475272884.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HideUnityDelegate2364798903.h"
#include "AssemblyU2DCSharp_Facebook_Unity_OGActionType648209511.h"
#include "mscorlib_System_Nullable_1_gen1438485399.h"
#include "System_System_Uri2776692961.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod969347464.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// System.Void Facebook.Unity.FB::.ctor()
extern "C"  void FB__ctor_m1320841742 (FB_t2519727771 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::.cctor()
extern "C"  void FB__cctor_m1809292127 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_AppId()
extern "C"  String_t* FB_get_AppId_m2778791106 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_AppId(System.String)
extern "C"  void FB_set_AppId_m1534276087 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_GraphApiVersion()
extern "C"  String_t* FB_get_GraphApiVersion_m4202202290 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_GraphApiVersion(System.String)
extern "C"  void FB_set_GraphApiVersion_m2407933767 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsLoggedIn()
extern "C"  bool FB_get_IsLoggedIn_m2733743004 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_IsInitialized()
extern "C"  bool FB_get_IsInitialized_m24459329 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.FB::get_LimitAppEventUsage()
extern "C"  bool FB_get_LimitAppEventUsage_m754763064 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_LimitAppEventUsage(System.Boolean)
extern "C"  void FB_set_LimitAppEventUsage_m2204318807 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.IFacebook Facebook.Unity.FB::get_FacebookImpl()
extern "C"  Object_t * FB_get_FacebookImpl_m3249694518 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookImpl(Facebook.Unity.IFacebook)
extern "C"  void FB_set_FacebookImpl_m2914967019 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.FB::get_FacebookDomain()
extern "C"  String_t* FB_get_FacebookDomain_m592939942 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_FacebookDomain(System.String)
extern "C"  void FB_set_FacebookDomain_m2340323973 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::get_OnDLLLoadedDelegate()
extern "C"  OnDLLLoaded_t1601980106 * FB_get_OnDLLLoadedDelegate_m1943792301 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::set_OnDLLLoadedDelegate(Facebook.Unity.FB/OnDLLLoaded)
extern "C"  void FB_set_OnDLLLoadedDelegate_m3998643868 (Object_t * __this /* static, unused */, OnDLLLoaded_t1601980106 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(Facebook.Unity.InitDelegate,Facebook.Unity.HideUnityDelegate,System.String)
extern "C"  void FB_Init_m2331630741 (Object_t * __this /* static, unused */, InitDelegate_t1475272884 * ___onInitComplete, HideUnityDelegate_t2364798903 * ___onHideUnity, String_t* ___authResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::Init(System.String,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.Boolean,System.String,System.String,Facebook.Unity.HideUnityDelegate,Facebook.Unity.InitDelegate)
extern "C"  void FB_Init_m3349697964 (Object_t * __this /* static, unused */, String_t* ___appId, bool ___cookie, bool ___logging, bool ___status, bool ___xfbml, bool ___frictionlessRequests, String_t* ___authResponse, String_t* ___jsSDKLocale, HideUnityDelegate_t2364798903 * ___onHideUnity, InitDelegate_t1475272884 * ___onInitComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithPublishPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithPublishPermissions_m3160456444 (Object_t * __this /* static, unused */, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogInWithReadPermissions(System.Collections.Generic.IEnumerable`1<System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>)
extern "C"  void FB_LogInWithReadPermissions_m3440569185 (Object_t * __this /* static, unused */, Object_t* ___permissions, FacebookDelegate_1_t2634519556 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogOut()
extern "C"  void FB_LogOut_m399663904 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m236900746 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___actionType, String_t* ___objectId, Object_t* ___to, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,Facebook.Unity.OGActionType,System.String,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m1168120021 (Object_t * __this /* static, unused */, String_t* ___message, int32_t ___actionType, String_t* ___objectId, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::AppRequest(System.String,System.Collections.Generic.IEnumerable`1<System.String>,System.Collections.Generic.IEnumerable`1<System.Object>,System.Collections.Generic.IEnumerable`1<System.String>,System.Nullable`1<System.Int32>,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>)
extern "C"  void FB_AppRequest_m3737494955 (Object_t * __this /* static, unused */, String_t* ___message, Object_t* ___to, Object_t* ___filters, Object_t* ___excludeIds, Nullable_1_t1438485399  ___maxRecipients, String_t* ___data, String_t* ___title, FacebookDelegate_1_t2757548155 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ShareLink(System.Uri,System.String,System.String,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_ShareLink_m1620681588 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___contentURL, String_t* ___contentTitle, String_t* ___contentDescription, Uri_t2776692961 * ___photoURL, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::FeedShare(System.String,System.Uri,System.String,System.String,System.String,System.Uri,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>)
extern "C"  void FB_FeedShare_m3254004512 (Object_t * __this /* static, unused */, String_t* ___toId, Uri_t2776692961 * ___link, String_t* ___linkName, String_t* ___linkCaption, String_t* ___linkDescription, Uri_t2776692961 * ___picture, String_t* ___mediaSource, FacebookDelegate_1_t1384006650 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  void FB_API_m2514225622 (Object_t * __this /* static, unused */, String_t* ___query, int32_t ___method, FacebookDelegate_1_t2979309097 * ___callback, Object_t* ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::API(System.String,Facebook.Unity.HttpMethod,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>,UnityEngine.WWWForm)
extern "C"  void FB_API_m3866078070 (Object_t * __this /* static, unused */, String_t* ___query, int32_t ___method, FacebookDelegate_1_t2979309097 * ___callback, WWWForm_t3999572776 * ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::ActivateApp()
extern "C"  void FB_ActivateApp_m3791592346 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GetAppLink(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void FB_GetAppLink_m2554518606 (Object_t * __this /* static, unused */, FacebookDelegate_1_t3690308374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupCreate(System.String,System.String,System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupCreateResult>)
extern "C"  void FB_GameGroupCreate_m3895171764 (Object_t * __this /* static, unused */, String_t* ___name, String_t* ___description, String_t* ___privacy, FacebookDelegate_1_t2288646710 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::GameGroupJoin(System.String,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGroupJoinResult>)
extern "C"  void FB_GameGroupJoin_m2344352904 (Object_t * __this /* static, unused */, String_t* ___id, FacebookDelegate_1_t1900386660 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogAppEvent(System.String,System.Nullable`1<System.Single>,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogAppEvent_m1611691066 (Object_t * __this /* static, unused */, String_t* ___logEvent, Nullable_1_t3844246929  ___valueToSum, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogPurchase(System.Single,System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern "C"  void FB_LogPurchase_m757512239 (Object_t * __this /* static, unused */, float ___logPurchase, String_t* ___currency, Dictionary_2_t2474804324 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB::LogVersion()
extern "C"  void FB_LogVersion_m4250994090 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
