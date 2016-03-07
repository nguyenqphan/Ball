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

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct NoiseAndGrain_t1395495870;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"

// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.ctor()
extern "C"  void NoiseAndGrain__ctor_m546153599 (NoiseAndGrain_t1395495870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::.cctor()
extern "C"  void NoiseAndGrain__cctor_m3563763470 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::CheckResources()
extern "C"  bool NoiseAndGrain_CheckResources_m3062686782 (NoiseAndGrain_t1395495870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void NoiseAndGrain_OnRenderImage_m3094527103 (NoiseAndGrain_t1395495870 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.NoiseAndGrain::DrawNoiseQuadGrid(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,UnityEngine.Texture2D,System.Int32)
extern "C"  void NoiseAndGrain_DrawNoiseQuadGrid_m1304670459 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___fxMaterial, Texture2D_t2509538522 * ___noise, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
