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

// Cube
struct  Cube_t2111573  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject Cube::leftWall
	GameObject_t4012695102 * ___leftWall_2;
	// UnityEngine.GameObject Cube::rightWall
	GameObject_t4012695102 * ___rightWall_3;
	// System.Single Cube::rotateSpeed
	float ___rotateSpeed_4;
	// System.Boolean Cube::isRotating
	bool ___isRotating_5;
	// System.Single Cube::startTime
	float ___startTime_6;
	// System.Single Cube::movingSpeed
	float ___movingSpeed_7;
};
