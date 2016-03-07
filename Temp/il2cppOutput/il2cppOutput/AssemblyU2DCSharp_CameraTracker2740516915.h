#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// CameraTracker
struct  CameraTracker_t2740516915  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject CameraTracker::player
	GameObject_t4012695102 * ___player_2;
	// UnityEngine.Vector3 CameraTracker::velocity
	Vector3_t3525329789  ___velocity_3;
	// System.Single CameraTracker::smoothTime
	float ___smoothTime_4;
	// UnityEngine.Vector3 CameraTracker::playerPos
	Vector3_t3525329789  ___playerPos_5;
	// UnityEngine.Vector3 CameraTracker::playerPosNext
	Vector3_t3525329789  ___playerPosNext_6;
	// System.Single CameraTracker::distanceY
	float ___distanceY_7;
	// UnityEngine.Vector3 CameraTracker::offset
	Vector3_t3525329789  ___offset_8;
	// UnityEngine.Vector3 CameraTracker::playerStartPos
	Vector3_t3525329789  ___playerStartPos_9;
};
