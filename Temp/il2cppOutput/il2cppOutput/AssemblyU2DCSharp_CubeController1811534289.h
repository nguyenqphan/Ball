#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_RaycastHit46221527.h"

// CubeController
struct  CubeController_t1811534289  : public MonoBehaviour_t3012272455
{
	// System.Single CubeController::rotateSpeed
	float ___rotateSpeed_2;
	// System.Single CubeController::startTime
	float ___startTime_3;
	// UnityEngine.LayerMask CubeController::cube
	LayerMask_t1862190090  ___cube_4;
	// System.Boolean CubeController::rotating
	bool ___rotating_5;
	// UnityEngine.RaycastHit CubeController::hit
	RaycastHit_t46221527  ___hit_6;
	// System.Single CubeController::dirToRotate
	float ___dirToRotate_7;
	// UnityEngine.AudioClip CubeController::cubeClick
	AudioClip_t3714538611 * ___cubeClick_8;
	// UnityEngine.AudioSource CubeController::cubeClickSource
	AudioSource_t3628549054 * ___cubeClickSource_9;
};
