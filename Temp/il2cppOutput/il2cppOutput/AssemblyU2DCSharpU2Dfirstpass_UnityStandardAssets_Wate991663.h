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
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.Material
struct Material_t1886596500;
// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean>
struct Dictionary_2_t3645233297;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// UnityStandardAssets.Water.PlanarReflection
struct  PlanarReflection_t991663  : public MonoBehaviour_t3012272455
{
	// UnityEngine.LayerMask UnityStandardAssets.Water.PlanarReflection::reflectionMask
	LayerMask_t1862190090  ___reflectionMask_2;
	// System.Boolean UnityStandardAssets.Water.PlanarReflection::reflectSkybox
	bool ___reflectSkybox_3;
	// UnityEngine.Color UnityStandardAssets.Water.PlanarReflection::clearColor
	Color_t1588175760  ___clearColor_4;
	// System.String UnityStandardAssets.Water.PlanarReflection::reflectionSampler
	String_t* ___reflectionSampler_5;
	// System.Single UnityStandardAssets.Water.PlanarReflection::clipPlaneOffset
	float ___clipPlaneOffset_6;
	// UnityEngine.Vector3 UnityStandardAssets.Water.PlanarReflection::m_Oldpos
	Vector3_t3525329789  ___m_Oldpos_7;
	// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::m_ReflectionCamera
	Camera_t3533968274 * ___m_ReflectionCamera_8;
	// UnityEngine.Material UnityStandardAssets.Water.PlanarReflection::m_SharedMaterial
	Material_t1886596500 * ___m_SharedMaterial_9;
	// System.Collections.Generic.Dictionary`2<UnityEngine.Camera,System.Boolean> UnityStandardAssets.Water.PlanarReflection::m_HelperCameras
	Dictionary_2_t3645233297 * ___m_HelperCameras_10;
};
