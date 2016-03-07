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

// UnityStandardAssets.ImageEffects.GlobalFog
struct GlobalFog_t3357874107;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Material
struct Material_t1886596500;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"

// System.Void UnityStandardAssets.ImageEffects.GlobalFog::.ctor()
extern "C"  void GlobalFog__ctor_m810383906 (GlobalFog_t3357874107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.GlobalFog::CheckResources()
extern "C"  bool GlobalFog_CheckResources_m3421955067 (GlobalFog_t3357874107 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void GlobalFog_OnRenderImage_m32785660 (GlobalFog_t3357874107 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.GlobalFog::CustomGraphicsBlit(UnityEngine.RenderTexture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
extern "C"  void GlobalFog_CustomGraphicsBlit_m2807875390 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, Material_t1886596500 * ___fxMaterial, int32_t ___passNr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
