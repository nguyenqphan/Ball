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

// UnityStandardAssets.ImageEffects.Antialiasing
struct Antialiasing_t259580628;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.Antialiasing::.ctor()
extern "C"  void Antialiasing__ctor_m1305359989 (Antialiasing_t259580628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityStandardAssets.ImageEffects.Antialiasing::CurrentAAMaterial()
extern "C"  Material_t1886596500 * Antialiasing_CurrentAAMaterial_m432242682 (Antialiasing_t259580628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.Antialiasing::CheckResources()
extern "C"  bool Antialiasing_CheckResources_m1261455440 (Antialiasing_t259580628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.Antialiasing::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void Antialiasing_OnRenderImage_m822671561 (Antialiasing_t259580628 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
