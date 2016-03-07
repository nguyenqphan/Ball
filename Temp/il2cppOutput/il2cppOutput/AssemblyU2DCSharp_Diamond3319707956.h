#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundBreaking
struct SoundBreaking_t2714241170;
// DiamondDeactivate
struct DiamondDeactivate_t198014152;
// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Diamond
struct  Diamond_t3319707956  : public MonoBehaviour_t3012272455
{
	// SoundBreaking Diamond::soundBreakingDiamond
	SoundBreaking_t2714241170 * ___soundBreakingDiamond_2;
	// System.Boolean Diamond::isSpinning
	bool ___isSpinning_3;
	// System.Boolean Diamond::isFloating
	bool ___isFloating_4;
	// System.Single Diamond::movingSpeed
	float ___movingSpeed_5;
	// System.Single Diamond::floatSpeed
	float ___floatSpeed_6;
	// System.Single Diamond::movementDistance
	float ___movementDistance_7;
	// System.Single Diamond::startingY
	float ___startingY_8;
	// System.Boolean Diamond::isMovingUp
	bool ___isMovingUp_9;
	// DiamondDeactivate Diamond::diaDeactivate
	DiamondDeactivate_t198014152 * ___diaDeactivate_10;
};
struct Diamond_t3319707956_StaticFields{
	// Diamond/ActionBreaking Diamond::BreakingDiamond
	ActionBreaking_t3455992569 * ___BreakingDiamond_11;
};
