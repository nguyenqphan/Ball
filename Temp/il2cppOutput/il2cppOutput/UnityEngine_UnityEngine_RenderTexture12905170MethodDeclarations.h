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

// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_RenderTextureFormat3253344041.h"
#include "UnityEngine_UnityEngine_RenderTexture12905170.h"
#include "UnityEngine_UnityEngine_RenderTextureReadWrite2477203249.h"
#include "UnityEngine_UnityEngine_RenderBuffer1942909411.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture__ctor_m2927948204 (RenderTexture_t12905170 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
extern "C"  void RenderTexture__ctor_m591418693 (RenderTexture_t12905170 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_Internal_CreateRenderTexture_m1444121965 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___rt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
extern "C"  RenderTexture_t12905170 * RenderTexture_GetTemporary_m800385162 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
extern "C"  RenderTexture_t12905170 * RenderTexture_GetTemporary_m1328055742 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
extern "C"  RenderTexture_t12905170 * RenderTexture_GetTemporary_m52998487 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32)
extern "C"  RenderTexture_t12905170 * RenderTexture_GetTemporary_m469965696 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_ReleaseTemporary_m3045961066 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___temp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetWidth_m1030655936 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetWidth_m3535686411 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
extern "C"  int32_t RenderTexture_Internal_GetHeight_m1940011033 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
extern "C"  void RenderTexture_Internal_SetHeight_m4218891754 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___mono, int32_t ___width, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
extern "C"  void RenderTexture_Internal_SetSRGBReadWrite_m2486231130 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___mono, bool ___sRGB, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
extern "C"  int32_t RenderTexture_get_width_m1498578543 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
extern "C"  void RenderTexture_set_width_m2449777612 (RenderTexture_t12905170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
extern "C"  int32_t RenderTexture_get_height_m4010076224 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
extern "C"  void RenderTexture_set_height_m4249514117 (RenderTexture_t12905170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
extern "C"  void RenderTexture_set_depth_m68043273 (RenderTexture_t12905170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
extern "C"  void RenderTexture_set_isPowerOfTwo_m2113768254 (RenderTexture_t12905170 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
extern "C"  int32_t RenderTexture_get_format_m3502109954 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
extern "C"  void RenderTexture_set_format_m2539201833 (RenderTexture_t12905170 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
extern "C"  void RenderTexture_DiscardContents_m1898044554 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_DiscardContents_m3754318489 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
extern "C"  void RenderTexture_MarkRestoreExpected_m2220245707 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m3308541944 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___self, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_colorBuffer()
extern "C"  RenderBuffer_t1942909411  RenderTexture_get_colorBuffer_m1260375694 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderBuffer UnityEngine.RenderTexture::get_depthBuffer()
extern "C"  RenderBuffer_t1942909411  RenderTexture_get_depthBuffer_m990382574 (RenderTexture_t12905170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetColorBuffer(UnityEngine.RenderBuffer&)
extern "C"  void RenderTexture_GetColorBuffer_m4145048604 (RenderTexture_t12905170 * __this, RenderBuffer_t1942909411 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::GetDepthBuffer(UnityEngine.RenderBuffer&)
extern "C"  void RenderTexture_GetDepthBuffer_m63945916 (RenderTexture_t12905170 * __this, RenderBuffer_t1942909411 * ___res, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
extern "C"  void RenderTexture_set_active_m1002947377 (Object_t * __this /* static, unused */, RenderTexture_t12905170 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
