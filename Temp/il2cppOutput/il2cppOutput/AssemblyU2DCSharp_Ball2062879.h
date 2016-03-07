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
// BallDeactivator
struct BallDeactivator_t2545628181;
// Ball/ActionScaling
struct ActionScaling_t4098096209;
// Ball/ActionExplode
struct ActionExplode_t878049707;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// Ball
struct  Ball_t2062879  : public MonoBehaviour_t3012272455
{
	// SoundBreaking Ball::ballExplodeClip
	SoundBreaking_t2714241170 * ___ballExplodeClip_2;
	// System.Single Ball::movingSpeed
	float ___movingSpeed_3;
	// System.Single Ball::scale
	float ___scale_4;
	// System.Single Ball::startScale
	float ___startScale_5;
	// System.Boolean Ball::isBigger
	bool ___isBigger_6;
	// System.Single Ball::scaleSpeed
	float ___scaleSpeed_7;
	// BallDeactivator Ball::ballDeactivator
	BallDeactivator_t2545628181 * ___ballDeactivator_8;
};
struct Ball_t2062879_StaticFields{
	// Ball/ActionScaling Ball::Scalling
	ActionScaling_t4098096209 * ___Scalling_9;
	// Ball/ActionExplode Ball::ExplodeBall
	ActionExplode_t878049707 * ___ExplodeBall_10;
};
