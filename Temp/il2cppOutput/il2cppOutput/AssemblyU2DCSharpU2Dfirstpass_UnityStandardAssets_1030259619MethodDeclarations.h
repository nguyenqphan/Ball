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

// UnityStandardAssets.ImageEffects.Bloom
struct Bloom_t1030259619;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"

// System.Void UnityStandardAssets.ImageEffects.Bloom::.ctor()
extern "C"  void Bloom__ctor_m2839453754 (Bloom_t1030259619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Bloom::CheckResources()
extern "C"  bool Bloom_CheckResources_m2533443299 (Bloom_t1030259619 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_OnRenderImage_m518942692 (Bloom_t1030259619 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_AddTo_m3659253907 (Bloom_t1030259619 * __this, float ___intensity_, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BlendFlares_m1709395988 (Bloom_t1030259619 * __this, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m2764526475 (Bloom_t1030259619 * __this, float ___thresh, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::BrightFilter(UnityEngine.Color,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_BrightFilter_m3542971014 (Bloom_t1030259619 * __this, Color_t1588175760  ___threshColor, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Bloom::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Bloom_Vignette_m2950373347 (Bloom_t1030259619 * __this, float ___amount, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
