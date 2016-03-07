#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// Facebook.Unity.CallbackManager
struct CallbackManager_t1943358823;

#include "mscorlib_System_Object837106420.h"

// Facebook.Unity.FacebookBase
struct  FacebookBase_t2319813814  : public Object_t
{
	// Facebook.Unity.InitDelegate Facebook.Unity.FacebookBase::onInitCompleteDelegate
	InitDelegate_t1475272884 * ___onInitCompleteDelegate_0;
	// Facebook.Unity.HideUnityDelegate Facebook.Unity.FacebookBase::onHideUnityDelegate
	HideUnityDelegate_t2364798903 * ___onHideUnityDelegate_1;
	// System.Boolean Facebook.Unity.FacebookBase::<Initialized>k__BackingField
	bool ___U3CInitializedU3Ek__BackingField_2;
	// Facebook.Unity.CallbackManager Facebook.Unity.FacebookBase::<CallbackManager>k__BackingField
	CallbackManager_t1943358823 * ___U3CCallbackManagerU3Ek__BackingField_3;
};
