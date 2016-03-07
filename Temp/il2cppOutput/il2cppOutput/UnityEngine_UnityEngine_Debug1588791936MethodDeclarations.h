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

// UnityEngine.ILogger
struct ILogger_t4167641990;
// System.Object
struct Object_t;
// UnityEngine.Object
struct Object_t3878351788;
struct Object_t3878351788_marshaled;
// System.Exception
struct Exception_t1967233988;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "mscorlib_System_Object837106420.h"
#include "UnityEngine_UnityEngine_Object3878351788.h"
#include "mscorlib_System_Exception1967233988.h"

// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m37515655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C"  Object_t * Debug_get_logger_m275693158 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void Debug_DrawLine_m712997666 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___start, Vector3_t3525329789  ___end, Color_t1588175760  ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C"  void Debug_INTERNAL_CALL_DrawLine_m4247131229 (Object_t * __this /* static, unused */, Vector3_t3525329789 * ___start, Vector3_t3525329789 * ___end, Color_t1588175760 * ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single)
extern "C"  void Debug_DrawRay_m1563905767 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___start, Vector3_t3525329789  ___dir, Color_t1588175760  ___color, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Boolean)
extern "C"  void Debug_DrawRay_m3043129782 (Object_t * __this /* static, unused */, Vector3_t3525329789  ___start, Vector3_t3525329789  ___dir, Color_t1588175760  ___color, float ___duration, bool ___depthTest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m1731103628 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m4127342994 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogError_m214246398 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t3878351788 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception)
extern "C"  void Debug_LogException_m248970745 (Object_t * __this /* static, unused */, Exception_t1967233988 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogException(System.Exception,UnityEngine.Object)
extern "C"  void Debug_LogException_m2264672311 (Object_t * __this /* static, unused */, Exception_t1967233988 * ___exception, Object_t3878351788 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m3123317694 (Object_t * __this /* static, unused */, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
extern "C"  void Debug_LogWarning_m4097176146 (Object_t * __this /* static, unused */, Object_t * ___message, Object_t3878351788 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
extern "C"  bool Debug_get_isDebugBuild_m351497798 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
