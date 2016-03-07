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
// Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>
struct FacebookDelegate_1_t3690308374;
// Facebook.Unity.FacebookBase
struct FacebookBase_t2319813814;
// Facebook.Unity.MethodArguments
struct MethodArguments_t3878806324;

#include "mscorlib_System_Object837106420.h"

// Facebook.Unity.MethodCall`1<Facebook.Unity.IAppLinkResult>
struct  MethodCall_1_t43367018  : public Object_t
{
	// System.String Facebook.Unity.MethodCall`1::<MethodName>k__BackingField
	String_t* ___U3CMethodNameU3Ek__BackingField_0;
	// Facebook.Unity.FacebookDelegate`1<T> Facebook.Unity.MethodCall`1::<Callback>k__BackingField
	FacebookDelegate_1_t3690308374 * ___U3CCallbackU3Ek__BackingField_1;
	// Facebook.Unity.FacebookBase Facebook.Unity.MethodCall`1::<FacebookImpl>k__BackingField
	FacebookBase_t2319813814 * ___U3CFacebookImplU3Ek__BackingField_2;
	// Facebook.Unity.MethodArguments Facebook.Unity.MethodCall`1::<Parameters>k__BackingField
	MethodArguments_t3878806324 * ___U3CParametersU3Ek__BackingField_3;
};
