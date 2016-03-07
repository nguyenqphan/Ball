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
// Facebook.Unity.FacebookSettings
struct FacebookSettings_t2175192840;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1765447871;
// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes>
struct List_1_t4208567320;

#include "UnityEngine_UnityEngine_ScriptableObject184905905.h"

// Facebook.Unity.FacebookSettings
struct  FacebookSettings_t2175192840  : public ScriptableObject_t184905905
{
	// System.Int32 Facebook.Unity.FacebookSettings::selectedAppIndex
	int32_t ___selectedAppIndex_6;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appIds
	List_1_t1765447871 * ___appIds_7;
	// System.Collections.Generic.List`1<System.String> Facebook.Unity.FacebookSettings::appLabels
	List_1_t1765447871 * ___appLabels_8;
	// System.Boolean Facebook.Unity.FacebookSettings::cookie
	bool ___cookie_9;
	// System.Boolean Facebook.Unity.FacebookSettings::logging
	bool ___logging_10;
	// System.Boolean Facebook.Unity.FacebookSettings::status
	bool ___status_11;
	// System.Boolean Facebook.Unity.FacebookSettings::xfbml
	bool ___xfbml_12;
	// System.Boolean Facebook.Unity.FacebookSettings::frictionlessRequests
	bool ___frictionlessRequests_13;
	// System.String Facebook.Unity.FacebookSettings::iosURLSuffix
	String_t* ___iosURLSuffix_14;
	// System.Collections.Generic.List`1<Facebook.Unity.FacebookSettings/UrlSchemes> Facebook.Unity.FacebookSettings::appLinkSchemes
	List_1_t4208567320 * ___appLinkSchemes_15;
};
struct FacebookSettings_t2175192840_StaticFields{
	// Facebook.Unity.FacebookSettings Facebook.Unity.FacebookSettings::instance
	FacebookSettings_t2175192840 * ___instance_5;
};
