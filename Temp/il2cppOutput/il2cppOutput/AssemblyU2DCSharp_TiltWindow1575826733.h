#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Quaternion1891715979.h"

// TiltWindow
struct  TiltWindow_t1575826733  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Vector2 TiltWindow::range
	Vector2_t3525329788  ___range_2;
	// UnityEngine.Transform TiltWindow::mTrans
	Transform_t284553113 * ___mTrans_3;
	// UnityEngine.Quaternion TiltWindow::mStart
	Quaternion_t1891715979  ___mStart_4;
	// UnityEngine.Vector2 TiltWindow::mRot
	Vector2_t3525329788  ___mRot_5;
};
