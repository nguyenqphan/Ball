#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance
struct  ScreenSpaceAmbientObscurance_t1015208013  : public PostEffectsBase_t2786816979
{
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::intensity
	float ___intensity_5;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::radius
	float ___radius_6;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurIterations
	int32_t ___blurIterations_7;
	// System.Single UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::blurFilterDistance
	float ___blurFilterDistance_8;
	// System.Int32 UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::downsample
	int32_t ___downsample_9;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::rand
	Texture2D_t2509538522 * ___rand_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoShader
	Shader_t3998140498 * ___aoShader_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientObscurance::aoMaterial
	Material_t1886596500 * ___aoMaterial_12;
};
