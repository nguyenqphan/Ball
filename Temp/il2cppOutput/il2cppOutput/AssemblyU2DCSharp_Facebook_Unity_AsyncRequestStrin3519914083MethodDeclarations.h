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

// Facebook.Unity.AsyncRequestString
struct AsyncRequestString_t3519914083;
// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t2979309097;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Uri2776692961.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod969347464.h"
#include "UnityEngine_UnityEngine_WWWForm3999572776.h"

// System.Void Facebook.Unity.AsyncRequestString::.ctor()
extern "C"  void AsyncRequestString__ctor_m1372709702 (AsyncRequestString_t3519914083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Post(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Post_m2215733478 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___url, Dictionary_2_t2606186806 * ___formData, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Get(System.Uri,System.Collections.Generic.Dictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Get_m2627216642 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___url, Dictionary_2_t2606186806 * ___formData, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,UnityEngine.WWWForm,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m784731900 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___url, int32_t ___method, WWWForm_t3999572776 * ___query, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.AsyncRequestString::Request(System.Uri,Facebook.Unity.HttpMethod,System.Collections.Generic.IDictionary`2<System.String,System.String>,Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  void AsyncRequestString_Request_m2531493660 (Object_t * __this /* static, unused */, Uri_t2776692961 * ___url, int32_t ___method, Object_t* ___formData, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Facebook.Unity.AsyncRequestString::Start()
extern "C"  Object_t * AsyncRequestString_Start_m3238437006 (AsyncRequestString_t3519914083 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetUrl(System.Uri)
extern "C"  AsyncRequestString_t3519914083 * AsyncRequestString_SetUrl_m748123376 (AsyncRequestString_t3519914083 * __this, Uri_t2776692961 * ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetMethod(Facebook.Unity.HttpMethod)
extern "C"  AsyncRequestString_t3519914083 * AsyncRequestString_SetMethod_m3362154867 (AsyncRequestString_t3519914083 * __this, int32_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetFormData(System.Collections.Generic.IDictionary`2<System.String,System.String>)
extern "C"  AsyncRequestString_t3519914083 * AsyncRequestString_SetFormData_m78831052 (AsyncRequestString_t3519914083 * __this, Object_t* ___formData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetQuery(UnityEngine.WWWForm)
extern "C"  AsyncRequestString_t3519914083 * AsyncRequestString_SetQuery_m3542731384 (AsyncRequestString_t3519914083 * __this, WWWForm_t3999572776 * ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.Unity.AsyncRequestString Facebook.Unity.AsyncRequestString::SetCallback(Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>)
extern "C"  AsyncRequestString_t3519914083 * AsyncRequestString_SetCallback_m1005889151 (AsyncRequestString_t3519914083 * __this, FacebookDelegate_1_t2979309097 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
