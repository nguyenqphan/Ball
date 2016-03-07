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
// Facebook.Unity.AccessToken
struct AccessToken_t3144904884;

#include "AssemblyU2DCSharp_Facebook_Unity_ResultBase3940793997.h"

// Facebook.Unity.LoginResult
struct  LoginResult_t1165053605  : public ResultBase_t3940793997
{
	// Facebook.Unity.AccessToken Facebook.Unity.LoginResult::<AccessToken>k__BackingField
	AccessToken_t3144904884 * ___U3CAccessTokenU3Ek__BackingField_10;
};
struct LoginResult_t1165053605_StaticFields{
	// System.String Facebook.Unity.LoginResult::UserIdKey
	String_t* ___UserIdKey_6;
	// System.String Facebook.Unity.LoginResult::ExpirationTimestampKey
	String_t* ___ExpirationTimestampKey_7;
	// System.String Facebook.Unity.LoginResult::PermissionsKey
	String_t* ___PermissionsKey_8;
	// System.String Facebook.Unity.LoginResult::AccessTokenKey
	String_t* ___AccessTokenKey_9;
};
