#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityStandardAssets.ImageEffects.PostEffectsBase
struct PostEffectsBase_t2786816979;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::.ctor()
extern "C"  void PostEffectsBase__ctor_m3867796874 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShaderAndCreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t1886596500 * PostEffectsBase_CheckShaderAndCreateMaterial_m2608136982 (PostEffectsBase_t2786816979 * __this, Shader_t3998140498 * ___s, Material_t1886596500 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.PostEffectsBase::CreateMaterial(UnityEngine.Shader,UnityEngine.Material)
extern "C"  Material_t1886596500 * PostEffectsBase_CreateMaterial_m3438806528 (PostEffectsBase_t2786816979 * __this, Shader_t3998140498 * ___s, Material_t1886596500 * ___m2Create, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::OnEnable()
extern "C"  void PostEffectsBase_OnEnable_m2225634748 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport()
extern "C"  bool PostEffectsBase_CheckSupport_m3855445757 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckResources()
extern "C"  bool PostEffectsBase_CheckResources_m1613801619 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::Start()
extern "C"  void PostEffectsBase_Start_m2814934666 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m1391699380 (PostEffectsBase_t2786816979 * __this, bool ___needDepth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckSupport(System.Boolean,System.Boolean)
extern "C"  bool PostEffectsBase_CheckSupport_m2994605897 (PostEffectsBase_t2786816979 * __this, bool ___needDepth, bool ___needHdr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::Dx11Support()
extern "C"  bool PostEffectsBase_Dx11Support_m803341575 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::ReportAutoDisable()
extern "C"  void PostEffectsBase_ReportAutoDisable_m415971149 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.PostEffectsBase::CheckShader(UnityEngine.Shader)
extern "C"  bool PostEffectsBase_CheckShader_m868673469 (PostEffectsBase_t2786816979 * __this, Shader_t3998140498 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::NotSupported()
extern "C"  void PostEffectsBase_NotSupported_m53727701 (PostEffectsBase_t2786816979 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsBase::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsBase_DrawBorder_m648711310 (PostEffectsBase_t2786816979 * __this, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
