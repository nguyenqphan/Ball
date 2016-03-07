#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Flashing
struct Flashing_t1690224146;
// Deactivator/EffectAction
struct EffectAction_t3544139591;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Deactivator
struct  Deactivator_t4192724884  : public MonoBehaviour_t3012272455
{
	// System.Single Deactivator::time
	float ___time_2;
	// System.Single Deactivator::resetTime
	float ___resetTime_3;
	// Flashing Deactivator::flashing
	Flashing_t1690224146 * ___flashing_4;
	// System.Boolean Deactivator::isFlashing
	bool ___isFlashing_5;
};
struct Deactivator_t4192724884_StaticFields{
	// Deactivator/EffectAction Deactivator::Emissive
	EffectAction_t3544139591 * ___Emissive_6;
};
