#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2776692961;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t3781852593;
// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>
struct FacebookDelegate_1_t2979309097;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_Facebook_Unity_HttpMethod969347464.h"

// Facebook.Unity.AsyncRequestString
struct  AsyncRequestString_t3519914083  : public MonoBehaviour_t3012272455
{
	// System.Uri Facebook.Unity.AsyncRequestString::url
	Uri_t2776692961 * ___url_2;
	// Facebook.Unity.HttpMethod Facebook.Unity.AsyncRequestString::method
	int32_t ___method_3;
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Facebook.Unity.AsyncRequestString::formData
	Object_t* ___formData_4;
	// UnityEngine.WWWForm Facebook.Unity.AsyncRequestString::query
	WWWForm_t3999572776 * ___query_5;
	// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult> Facebook.Unity.AsyncRequestString::callback
	FacebookDelegate_1_t2979309097 * ___callback_6;
};
