#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture[]
struct RenderTextureU5BU5D_t2384577959;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Material
struct Material_t1886596500;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// UnityStandardAssets.ImageEffects.ContrastStretch
struct  ContrastStretch_t594922307  : public MonoBehaviour_t3012272455
{
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::adaptationSpeed
	float ___adaptationSpeed_2;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMinimum
	float ___limitMinimum_3;
	// System.Single UnityStandardAssets.ImageEffects.ContrastStretch::limitMaximum
	float ___limitMaximum_4;
	// UnityEngine.RenderTexture[] UnityStandardAssets.ImageEffects.ContrastStretch::adaptRenderTex
	RenderTextureU5BU5D_t2384577959* ___adaptRenderTex_5;
	// System.Int32 UnityStandardAssets.ImageEffects.ContrastStretch::curAdaptIndex
	int32_t ___curAdaptIndex_6;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderLum
	Shader_t3998140498 * ___shaderLum_7;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialLum
	Material_t1886596500 * ___m_materialLum_8;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderReduce
	Shader_t3998140498 * ___shaderReduce_9;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialReduce
	Material_t1886596500 * ___m_materialReduce_10;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderAdapt
	Shader_t3998140498 * ___shaderAdapt_11;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialAdapt
	Material_t1886596500 * ___m_materialAdapt_12;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ContrastStretch::shaderApply
	Shader_t3998140498 * ___shaderApply_13;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::m_materialApply
	Material_t1886596500 * ___m_materialApply_14;
};
