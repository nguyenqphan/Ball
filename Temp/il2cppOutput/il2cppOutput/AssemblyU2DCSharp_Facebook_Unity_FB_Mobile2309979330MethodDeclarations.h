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

// Facebook.Unity.FB/Mobile
struct Mobile_t2309979330;
// Facebook.Unity.Mobile.IMobileFacebook
struct IMobileFacebook_t3651648834;
// System.Uri
struct Uri_t2776692961;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>
struct FacebookDelegate_1_t573598949;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>
struct FacebookDelegate_1_t2422421107;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Facebook_Unity_ShareDialogMode698979849.h"
#include "System_System_Uri2776692961.h"

// System.Void Facebook.Unity.FB/Mobile::.ctor()
extern "C"  void Mobile__ctor_m3988870663 (Mobile_t2309979330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.ShareDialogMode Facebook.Unity.FB/Mobile::get_ShareDialogMode()
extern "C"  int32_t Mobile_get_ShareDialogMode_m4266857778 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::set_ShareDialogMode(Facebook.Unity.ShareDialogMode)
extern "C"  void Mobile_set_ShareDialogMode_m576453673 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.Mobile.IMobileFacebook Facebook.Unity.FB/Mobile::get_MobileFacebookImpl()
extern "C"  Object_t * Mobile_get_MobileFacebookImpl_m4051181563 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::AppInvite(System.Uri,System.Uri,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppInviteResult>)
extern "C"  void Mobile_AppInvite_m396566129 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___appLinkUrl, Uri_t2776692961 * ___previewImageUrl, FacebookDelegate_1_t573598949 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::FetchDeferredAppLinkData(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>)
extern "C"  void Mobile_FetchDeferredAppLinkData_m2292336956 (Object_t * __this /* static, unused */, FacebookDelegate_1_t3690308374 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.FB/Mobile::RefreshCurrentAccessToken(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>)
extern "C"  void Mobile_RefreshCurrentAccessToken_m320821506 (Object_t * __this /* static, unused */, FacebookDelegate_1_t2422421107 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
