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

// UnityStandardAssets.ImageEffects.ImageEffects
struct ImageEffects_t4189601031;
// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// System.Void UnityStandardAssets.ImageEffects.ImageEffects::.ctor()
extern "C"  void ImageEffects__ctor_m4141196706 (ImageEffects_t4189601031 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::RenderDistortion(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture,System.Single,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  void ImageEffects_RenderDistortion_m2772360352 (Object_t * __this /* static, unused */, Material_t1886596500 * ___material, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___destination, float ___angle, Vector2_t3525329788  ___center, Vector2_t3525329788  ___radius, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::Blit(UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_Blit_m1469243659 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.ImageEffects.ImageEffects::BlitWithMaterial(UnityEngine.Material,UnityEngine.RenderTexture,UnityEngine.RenderTexture)
extern "C"  void ImageEffects_BlitWithMaterial_m3114013730 (Object_t * __this /* static, unused */, Material_t1886596500 * ___material, RenderTexture_t12905170 * ___source, RenderTexture_t12905170 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
