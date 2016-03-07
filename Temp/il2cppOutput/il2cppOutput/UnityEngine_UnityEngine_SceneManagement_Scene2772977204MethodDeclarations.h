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

// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SceneManagement_Scene2772977204.h"
#include "mscorlib_System_Object837106420.h"

// System.Int32 UnityEngine.SceneManagement.Scene::get_handle()
extern "C"  int32_t Scene_get_handle_m2277248521 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::get_path()
extern "C"  String_t* Scene_get_path_m952061379 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
extern "C"  int32_t Scene_get_buildIndex_m3533090789 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetHashCode()
extern "C"  int32_t Scene_GetHashCode_m2000109307 (Scene_t2772977204 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SceneManagement.Scene::Equals(System.Object)
extern "C"  bool Scene_Equals_m93578403 (Scene_t2772977204 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SceneManagement.Scene::GetPathInternal(System.Int32)
extern "C"  String_t* Scene_GetPathInternal_m1528723926 (Object_t * __this /* static, unused */, int32_t ___sceneHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SceneManagement.Scene::GetBuildIndexInternal(System.Int32)
extern "C"  int32_t Scene_GetBuildIndexInternal_m76376146 (Object_t * __this /* static, unused */, int32_t ___sceneHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
