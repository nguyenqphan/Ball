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

// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"

// System.Void UnityEngine.GL::Vertex3(System.Single,System.Single,System.Single)
extern "C"  void GL_Vertex3_m3691855584 (Object_t * __this /* static, unused */, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::TexCoord2(System.Single,System.Single)
extern "C"  void GL_TexCoord2_m3945835718 (Object_t * __this /* static, unused */, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::MultiTexCoord2(System.Int32,System.Single,System.Single)
extern "C"  void GL_MultiTexCoord2_m4253939586 (Object_t * __this /* static, unused */, int32_t ___unit, float ___x, float ___y, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Begin(System.Int32)
extern "C"  void GL_Begin_m3089952800 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::End()
extern "C"  void GL_End_m2013837889 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadOrtho()
extern "C"  void GL_LoadOrtho_m1297524312 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadProjectionMatrix(UnityEngine.Matrix4x4)
extern "C"  void GL_LoadProjectionMatrix_m1743857864 (Object_t * __this /* static, unused */, Matrix4x4_t277289660  ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_LoadProjectionMatrix(UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_LoadProjectionMatrix_m747189251 (Object_t * __this /* static, unused */, Matrix4x4_t277289660 * ___mat, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::LoadIdentity()
extern "C"  void GL_LoadIdentity_m1417984576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PushMatrix()
extern "C"  void GL_PushMatrix_m626765559 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::PopMatrix()
extern "C"  void GL_PopMatrix_m3073322328 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GL::GetGPUProjectionMatrix(UnityEngine.Matrix4x4,System.Boolean)
extern "C"  Matrix4x4_t277289660  GL_GetGPUProjectionMatrix_m1961192416 (Object_t * __this /* static, unused */, Matrix4x4_t277289660  ___proj, bool ___renderIntoTexture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_GetGPUProjectionMatrix(UnityEngine.Matrix4x4&,System.Boolean,UnityEngine.Matrix4x4&)
extern "C"  void GL_INTERNAL_CALL_GetGPUProjectionMatrix_m767958606 (Object_t * __this /* static, unused */, Matrix4x4_t277289660 * ___proj, bool ___renderIntoTexture, Matrix4x4_t277289660 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GL::get_invertCulling()
extern "C"  bool GL_get_invertCulling_m3856966129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::set_invertCulling(System.Boolean)
extern "C"  void GL_set_invertCulling_m1213260762 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color)
extern "C"  void GL_Clear_m2980983731 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t1588175760  ___backgroundColor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Clear_m2973682008 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t1588175760  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color,System.Single)
extern "C"  void GL_Internal_Clear_m3028905892 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t1588175760  ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::INTERNAL_CALL_Internal_Clear(System.Boolean,System.Boolean,UnityEngine.Color&,System.Single)
extern "C"  void GL_INTERNAL_CALL_Internal_Clear_m3571592465 (Object_t * __this /* static, unused */, bool ___clearDepth, bool ___clearColor, Color_t1588175760 * ___backgroundColor, float ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GL::ClearWithSkybox(System.Boolean,UnityEngine.Camera)
extern "C"  void GL_ClearWithSkybox_m2059598896 (Object_t * __this /* static, unused */, bool ___clearDepth, Camera_t3533968274 * ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
