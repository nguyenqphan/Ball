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

// UnityStandardAssets.ImageEffects.ContrastStretch
struct ContrastStretch_t594922307;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Texture
struct Texture_t1769722184;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"

// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::.ctor()
extern "C"  void ContrastStretch__ctor_m2751654938 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialLum()
extern "C"  Material_t1886596500 * ContrastStretch_get_materialLum_m2758956709 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialReduce()
extern "C"  Material_t1886596500 * ContrastStretch_get_materialReduce_m3952186951 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialAdapt()
extern "C"  Material_t1886596500 * ContrastStretch_get_materialAdapt_m3989377603 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.ContrastStretch::get_materialApply()
extern "C"  Material_t1886596500 * ContrastStretch_get_materialApply_m51698575 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::Start()
extern "C"  void ContrastStretch_Start_m1698792730 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnEnable()
extern "C"  void ContrastStretch_OnEnable_m2878025004 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnDisable()
extern "C"  void ContrastStretch_OnDisable_m3760366465 (ContrastStretch_t594922307 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ContrastStretch_OnRenderImage_m4187043844 (ContrastStretch_t594922307 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ContrastStretch::CalculateAdaptation(UnityEngine.Texture)
extern "C"  void ContrastStretch_CalculateAdaptation_m6970365 (ContrastStretch_t594922307 * __this, Texture_t1769722184 * ___curTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
