#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3342907448;
struct AnimationCurve_t3342907448_marshaled;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_2786816979.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I257837101.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_3565162834.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3253344041.h"

// UnityStandardAssets.ImageEffects.Tonemapping
struct  Tonemapping_t3818971324  : public PostEffectsBase_t2786816979
{
	// UnityStandardAssets.ImageEffects.Tonemapping/TonemapperType UnityStandardAssets.ImageEffects.Tonemapping::type
	int32_t ___type_5;
	// UnityStandardAssets.ImageEffects.Tonemapping/AdaptiveTexSize UnityStandardAssets.ImageEffects.Tonemapping::adaptiveTextureSize
	int32_t ___adaptiveTextureSize_6;
	// UnityEngine.AnimationCurve UnityStandardAssets.ImageEffects.Tonemapping::remapCurve
	AnimationCurve_t3342907448 * ___remapCurve_7;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.Tonemapping::curveTex
	Texture2D_t2509538522 * ___curveTex_8;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::exposureAdjustment
	float ___exposureAdjustment_9;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::middleGrey
	float ___middleGrey_10;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::white
	float ___white_11;
	// System.Single UnityStandardAssets.ImageEffects.Tonemapping::adaptionSpeed
	float ___adaptionSpeed_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.Tonemapping::tonemapper
	Shader_t3998140498 * ___tonemapper_13;
	// System.Boolean UnityStandardAssets.ImageEffects.Tonemapping::validRenderTextureFormat
	bool ___validRenderTextureFormat_14;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.Tonemapping::tonemapMaterial
	Material_t1886596500 * ___tonemapMaterial_15;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.Tonemapping::rt
	RenderTexture_t12905170 * ___rt_16;
	// UnityEngine.RenderTextureFormat UnityStandardAssets.ImageEffects.Tonemapping::rtFormat
	int32_t ___rtFormat_17;
};
