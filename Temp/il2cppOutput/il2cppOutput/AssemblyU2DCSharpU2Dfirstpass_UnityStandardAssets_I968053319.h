#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.ImageEffects.Blur
struct  Blur_t968053319  : public MonoBehaviour_t3012272455
{
	// System.Int32 UnityStandardAssets.ImageEffects.Blur::iterations
	int32_t ___iterations_2;
	// System.Single UnityStandardAssets.ImageEffects.Blur::blurSpread
	float ___blurSpread_3;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Blur::blurShader
	Shader_t3998140498 * ___blurShader_4;
};
struct Blur_t968053319_StaticFields{
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Blur::m_Material
	Material_t1886596500 * ___m_Material_5;
};
