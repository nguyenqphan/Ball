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

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.Shader
struct Shader_t3998140498;
// UnityEngine.Texture
struct Texture_t1769722184;
// System.String
struct String_t;
// UnityEngine.ComputeBuffer
struct ComputeBuffer_t2382190468;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Shader3998140498.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Texture1769722184.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_ComputeBuffer2382190468.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C"  void Material__ctor_m2685909642 (Material_t1886596500 * __this, Shader_t3998140498 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m2546967560 (Material_t1886596500 * __this, Material_t1886596500 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C"  Shader_t3998140498 * Material_get_shader_m2881845503 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_shader(UnityEngine.Shader)
extern "C"  void Material_set_shader_m3742529604 (Material_t1886596500 * __this, Shader_t3998140498 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::get_color()
extern "C"  Color_t1588175760  Material_get_color_m2268945527 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_color(UnityEngine.Color)
extern "C"  void Material_set_color_m3296857020 (Material_t1886596500 * __this, Color_t1588175760  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t1769722184 * Material_get_mainTexture_m1012267054 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTextureOffset(UnityEngine.Vector2)
extern "C"  void Material_set_mainTextureOffset_m3397882654 (Material_t1886596500 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.String,UnityEngine.Color)
extern "C"  void Material_SetColor_m1918430019 (Material_t1886596500 * __this, String_t* ___propertyName, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
extern "C"  void Material_SetColor_m54957808 (Material_t1886596500 * __this, int32_t ___nameID, Color_t1588175760  ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_SetColor_m3209011477 (Object_t * __this /* static, unused */, Material_t1886596500 * ___self, int32_t ___nameID, Color_t1588175760 * ___color, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.String)
extern "C"  Color_t1588175760  Material_GetColor_m1709543664 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.Material::GetColor(System.Int32)
extern "C"  Color_t1588175760  Material_GetColor_m317509027 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_GetColor(UnityEngine.Material,System.Int32,UnityEngine.Color&)
extern "C"  void Material_INTERNAL_CALL_GetColor_m3428345249 (Object_t * __this /* static, unused */, Material_t1886596500 * ___self, int32_t ___nameID, Color_t1588175760 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetVector(System.String,UnityEngine.Vector4)
extern "C"  void Material_SetVector_m3505096203 (Material_t1886596500 * __this, String_t* ___propertyName, Vector4_t3525329790  ___vector, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Material::GetVector(System.String)
extern "C"  Vector4_t3525329790  Material_GetVector_m4092100414 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m1833724755 (Material_t1886596500 * __this, String_t* ___propertyName, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C"  void Material_SetTexture_m3847256752 (Material_t1886596500 * __this, int32_t ___nameID, Texture_t1769722184 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t1769722184 * Material_GetTexture_m1284113328 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t1769722184 * Material_GetTexture_m3767468771 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTextureOffset(System.String,UnityEngine.Vector2)
extern "C"  void Material_SetTextureOffset_m1301408396 (Material_t1886596500 * __this, String_t* ___propertyName, Vector2_t3525329788  ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetTextureOffset(UnityEngine.Material,System.String,UnityEngine.Vector2&)
extern "C"  void Material_INTERNAL_CALL_SetTextureOffset_m3039341169 (Object_t * __this /* static, unused */, Material_t1886596500 * ___self, String_t* ___propertyName, Vector2_t3525329788 * ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.String,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m3693790735 (Material_t1886596500 * __this, String_t* ___propertyName, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetMatrix(System.Int32,UnityEngine.Matrix4x4)
extern "C"  void Material_SetMatrix_m3847958092 (Material_t1886596500 * __this, int32_t ___nameID, Matrix4x4_t277289660  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::INTERNAL_CALL_SetMatrix(UnityEngine.Material,System.Int32,UnityEngine.Matrix4x4&)
extern "C"  void Material_INTERNAL_CALL_SetMatrix_m1211748139 (Object_t * __this /* static, unused */, Material_t1886596500 * ___self, int32_t ___nameID, Matrix4x4_t277289660 * ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m981710063 (Material_t1886596500 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m170145518 (Material_t1886596500 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.String)
extern "C"  float Material_GetFloat_m2541456626 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Material::GetFloat(System.Int32)
extern "C"  float Material_GetFloat_m344344929 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m2649395040 (Material_t1886596500 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetBuffer(System.String,UnityEngine.ComputeBuffer)
extern "C"  void Material_SetBuffer_m3711483432 (Material_t1886596500 * __this, String_t* ___propertyName, ComputeBuffer_t2382190468 * ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2077312757 (Material_t1886596500 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m190825214 (Material_t1886596500 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean,System.String)
extern "C"  String_t* Material_GetTag_m3615753372 (Material_t1886596500 * __this, String_t* ___tag, bool ___searchFallbacks, String_t* ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Material::GetTag(System.String,System.Boolean)
extern "C"  String_t* Material_GetTag_m3164210272 (Material_t1886596500 * __this, String_t* ___tag, bool ___searchFallbacks, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Material::get_passCount()
extern "C"  int32_t Material_get_passCount_m2926759545 (Material_t1886596500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C"  bool Material_SetPass_m4241824642 (Material_t1886596500 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C"  void Material_Internal_CreateWithShader_m701341915 (Object_t * __this /* static, unused */, Material_t1886596500 * ___mono, Shader_t3998140498 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m2349411671 (Object_t * __this /* static, unused */, Material_t1886596500 * ___mono, Material_t1886596500 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m3802712984 (Material_t1886596500 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m572736419 (Material_t1886596500 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
