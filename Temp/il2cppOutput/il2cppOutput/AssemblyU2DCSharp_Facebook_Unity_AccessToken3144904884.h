#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t3840643258;

#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_DateTime339033936.h"
#include "mscorlib_System_Nullable_1_gen3225071844.h"

// Facebook.Unity.AccessToken
struct  AccessToken_t3144904884  : public Object_t
{
	// System.String Facebook.Unity.AccessToken::<TokenString>k__BackingField
	String_t* ___U3CTokenStringU3Ek__BackingField_1;
	// System.DateTime Facebook.Unity.AccessToken::<ExpirationTime>k__BackingField
	DateTime_t339033936  ___U3CExpirationTimeU3Ek__BackingField_2;
	// System.Collections.Generic.IEnumerable`1<System.String> Facebook.Unity.AccessToken::<Permissions>k__BackingField
	Object_t* ___U3CPermissionsU3Ek__BackingField_3;
	// System.String Facebook.Unity.AccessToken::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_4;
	// System.Nullable`1<System.DateTime> Facebook.Unity.AccessToken::<LastRefresh>k__BackingField
	Nullable_1_t3225071844  ___U3CLastRefreshU3Ek__BackingField_5;
};
struct AccessToken_t3144904884_StaticFields{
	// Facebook.Unity.AccessToken Facebook.Unity.AccessToken::<CurrentAccessToken>k__BackingField
	AccessToken_t3144904884 * ___U3CCurrentAccessTokenU3Ek__BackingField_0;
};
