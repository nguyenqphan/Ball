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

// UnityEngine.Shader
struct Shader_t3998140498;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// UnityEngine.Shader UnityEngine.Shader::Find(System.String)
extern "C"  Shader_t3998140498 * Shader_Find_m4048047578 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Shader::get_isSupported()
extern "C"  bool Shader_get_isSupported_m1422621179 (Shader_t3998140498 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::EnableKeyword(System.String)
extern "C"  void Shader_EnableKeyword_m944528214 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::DisableKeyword(System.String)
extern "C"  void Shader_DisableKeyword_m2163321765 (Object_t * __this /* static, unused */, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Shader::set_maximumLOD(System.Int32)
extern "C"  void Shader_set_maximumLOD_m2797626507 (Shader_t3998140498 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
extern "C"  int32_t Shader_PropertyToID_m3019342011 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
