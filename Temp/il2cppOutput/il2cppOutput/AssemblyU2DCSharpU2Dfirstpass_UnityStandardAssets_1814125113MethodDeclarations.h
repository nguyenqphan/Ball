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

// UnityStandardAssets.ImageEffects.BloomAndFlares
struct BloomAndFlares_t1814125113;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::.ctor()
extern "C"  void BloomAndFlares__ctor_m2488022832 (BloomAndFlares_t1814125113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.BloomAndFlares::CheckResources()
extern "C"  bool BloomAndFlares_CheckResources_m2622734581 (BloomAndFlares_t1814125113 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_OnRenderImage_m2828044078 (BloomAndFlares_t1814125113 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::AddTo(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_AddTo_m471711837 (BloomAndFlares_t1814125113 * __this, float ___intensity_, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BlendFlares(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BlendFlares_m1591128542 (BloomAndFlares_t1814125113 * __this, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::BrightFilter(System.Single,System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_BrightFilter_m3829635622 (BloomAndFlares_t1814125113 * __this, float ___thresh, float ___useAlphaAsMask, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.BloomAndFlares::Vignette(System.Single,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void BloomAndFlares_Vignette_m316513241 (BloomAndFlares_t1814125113 * __this, float ___amount, RenderTexture_t12905170 * ___from, RenderTexture_t12905170 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
