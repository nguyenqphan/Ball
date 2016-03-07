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

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct ColorCorrectionLookup_t376209819;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// System.String
struct String_t;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"

// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::.ctor()
extern "C"  void ColorCorrectionLookup__ctor_m1582114114 (ColorCorrectionLookup_t376209819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::CheckResources()
extern "C"  bool ColorCorrectionLookup_CheckResources_m3920966363 (ColorCorrectionLookup_t376209819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDisable()
extern "C"  void ColorCorrectionLookup_OnDisable_m2329675945 (ColorCorrectionLookup_t376209819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnDestroy()
extern "C"  void ColorCorrectionLookup_OnDestroy_m212240699 (ColorCorrectionLookup_t376209819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::SetIdentityLut()
extern "C"  void ColorCorrectionLookup_SetIdentityLut_m1662546029 (ColorCorrectionLookup_t376209819 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityStandardAssets.ImageEffects.ColorCorrectionLookup::ValidDimensions(UnityEngine.Texture2D)
extern "C"  bool ColorCorrectionLookup_ValidDimensions_m1003820047 (ColorCorrectionLookup_t376209819 * __this, Texture2D_t2509538522 * ___tex2d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::Convert(UnityEngine.Texture2D,System.String)
extern "C"  void ColorCorrectionLookup_Convert_m3140680933 (ColorCorrectionLookup_t376209819 * __this, Texture2D_t2509538522 * ___temp2DTex, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ColorCorrectionLookup::OnRenderImage(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ColorCorrectionLookup_OnRenderImage_m2447844828 (ColorCorrectionLookup_t376209819 * __this, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
