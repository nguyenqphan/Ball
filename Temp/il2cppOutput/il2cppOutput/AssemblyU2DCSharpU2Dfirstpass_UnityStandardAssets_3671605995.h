#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t1769722184;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.ImageEffects.NoiseAndScratches
struct  NoiseAndScratches_t3671605995  : public MonoBehaviour_t3012272455
{
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::monochrome
	bool ___monochrome_2;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndScratches::rgbFallback
	bool ___rgbFallback_3;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMin
	float ___grainIntensityMin_4;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainIntensityMax
	float ___grainIntensityMax_5;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::grainSize
	float ___grainSize_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMin
	float ___scratchIntensityMin_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchIntensityMax
	float ___scratchIntensityMax_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchFPS
	float ___scratchFPS_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchJitter
	float ___scratchJitter_10;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::grainTexture
	Texture_t1769722184 * ___grainTexture_11;
	// UnityEngine.Texture UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTexture
	Texture_t1769722184 * ___scratchTexture_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderRGB
	Shader_t3998140498 * ___shaderRGB_13;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndScratches::shaderYUV
	Shader_t3998140498 * ___shaderYUV_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialRGB
	Material_t1886596500 * ___m_MaterialRGB_15;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndScratches::m_MaterialYUV
	Material_t1886596500 * ___m_MaterialYUV_16;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchTimeLeft
	float ___scratchTimeLeft_17;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchX
	float ___scratchX_18;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndScratches::scratchY
	float ___scratchY_19;
};
