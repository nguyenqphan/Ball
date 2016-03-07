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

// UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion
struct ScreenSpaceAmbientOcclusion_t3176941455;
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

// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::.ctor()
extern "C"  void ScreenSpaceAmbientOcclusion__ctor_m269794894 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterial(UnityEngine.Shader)
extern "C"  Material_t1886596500 * ScreenSpaceAmbientOcclusion_CreateMaterial_m1698494884 (Object_t * __this /* static, unused */, Shader_t3998140498 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::DestroyMaterial(UnityEngine.Material)
extern "C"  void ScreenSpaceAmbientOcclusion_DestroyMaterial_m3964901135 (Object_t * __this /* static, unused */, Material_t1886596500 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnDisable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnDisable_m1842887605 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::Start()
extern "C"  void ScreenSpaceAmbientOcclusion_Start_m3511899982 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnEnable()
extern "C"  void ScreenSpaceAmbientOcclusion_OnEnable_m3647454840 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::CreateMaterials()
extern "C"  void ScreenSpaceAmbientOcclusion_CreateMaterials_m4250538044 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ScreenSpaceAmbientOcclusion::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ScreenSpaceAmbientOcclusion_OnRenderImage_m3833165136 (ScreenSpaceAmbientOcclusion_t3176941455 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
