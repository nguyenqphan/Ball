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

// UnityStandardAssets.ImageEffects.PostEffectsHelper
struct PostEffectsHelper_t2914300976;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::.ctor()
extern "C"  void PostEffectsHelper__ctor_m348010317 (PostEffectsHelper_t2914300976 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void PostEffectsHelper_OnRenderImage_m1733071089 (PostEffectsHelper_t2914300976 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelPlaneAlignedWithCamera(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Camera)
extern "C"  void PostEffectsHelper_DrawLowLevelPlaneAlignedWithCamera_m3504781099 (Object_t * __this /* static, unused */, float ___dist, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___material, Camera_t3533968274 * ___cameraForProjectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawBorder(UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawBorder_m147599851 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.PostEffectsHelper::DrawLowLevelQuad(System.Single,System.Single,System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material)
extern "C"  void PostEffectsHelper_DrawLowLevelQuad_m392804740 (Object_t * __this /* static, unused */, float ___x1, float ___x2, float ___y1, float ___y2, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___material, const MethodInfo* method) IL2CPP_METHOD_ATTR;
