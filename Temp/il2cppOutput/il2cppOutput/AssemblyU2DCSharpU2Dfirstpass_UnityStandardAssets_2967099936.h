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

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets__1.h"

// UnityStandardAssets.ImageEffects.BlurOptimized
struct  BlurOptimized_t2967099936  : public PostEffectsBase_t2786816979
{
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::downsample
	int32_t ___downsample_5;
	// System.Single UnityStandardAssets.ImageEffects.BlurOptimized::blurSize
	float ___blurSize_6;
	// System.Int32 UnityStandardAssets.ImageEffects.BlurOptimized::blurIterations
	int32_t ___blurIterations_7;
	// UnityStandardAssets.ImageEffects.BlurOptimized/BlurType UnityStandardAssets.ImageEffects.BlurOptimized::blurType
	int32_t ___blurType_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BlurOptimized::blurShader
	Shader_t3998140498 * ___blurShader_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BlurOptimized::blurMaterial
	Material_t1886596500 * ___blurMaterial_10;
};
