#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t1596303683;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// DemoTimeOfDay
struct  DemoTimeOfDay_t768954549  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Light DemoTimeOfDay::lightSource
	Light_t1596303683 * ___lightSource_2;
	// System.Single DemoTimeOfDay::minAngle
	float ___minAngle_3;
	// System.Single DemoTimeOfDay::cycleDuration
	float ___cycleDuration_4;
	// System.Single DemoTimeOfDay::maxAngle
	float ___maxAngle_5;
	// System.Single DemoTimeOfDay::yAngle
	float ___yAngle_6;
	// System.Single DemoTimeOfDay::maxIntensity
	float ___maxIntensity_7;
};
