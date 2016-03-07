#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// UnityStandardAssets.Utility.SimpleMouseRotator
struct  SimpleMouseRotator_t2796365403  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Vector2 UnityStandardAssets.Utility.SimpleMouseRotator::rotationRange
	Vector2_t3525329788  ___rotationRange_2;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single UnityStandardAssets.Utility.SimpleMouseRotator::dampingTime
	float ___dampingTime_4;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroVerticalOnMobile
	bool ___autoZeroVerticalOnMobile_5;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::autoZeroHorizontalOnMobile
	bool ___autoZeroHorizontalOnMobile_6;
	// System.Boolean UnityStandardAssets.Utility.SimpleMouseRotator::relative
	bool ___relative_7;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_TargetAngles
	Vector3_t3525329789  ___m_TargetAngles_8;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowAngles
	Vector3_t3525329789  ___m_FollowAngles_9;
	// UnityEngine.Vector3 UnityStandardAssets.Utility.SimpleMouseRotator::m_FollowVelocity
	Vector3_t3525329789  ___m_FollowVelocity_10;
	// UnityEngine.Quaternion UnityStandardAssets.Utility.SimpleMouseRotator::m_OriginalRotation
	Quaternion_t1891715979  ___m_OriginalRotation_11;
};
