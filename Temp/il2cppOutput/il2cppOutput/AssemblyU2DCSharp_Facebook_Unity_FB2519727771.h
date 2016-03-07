#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t4281310222;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t1601980106;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

// Facebook.Unity.FB
struct  FB_t2519727771  : public ScriptableObject_t184905905
{
};
struct FB_t2519727771_StaticFields{
	// Facebook.Unity.IFacebook Facebook.Unity.FB::facebook
	Object_t * ___facebook_3;
	// System.Boolean Facebook.Unity.FB::isInitCalled
	bool ___isInitCalled_4;
	// System.String Facebook.Unity.FB::facebookDomain
	String_t* ___facebookDomain_5;
	// System.String Facebook.Unity.FB::graphApiVersion
	String_t* ___graphApiVersion_6;
	// System.String Facebook.Unity.FB::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_7;
	// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::<OnDLLLoadedDelegate>k__BackingField
	OnDLLLoaded_t1601980106 * ___U3COnDLLLoadedDelegateU3Ek__BackingField_8;
};
