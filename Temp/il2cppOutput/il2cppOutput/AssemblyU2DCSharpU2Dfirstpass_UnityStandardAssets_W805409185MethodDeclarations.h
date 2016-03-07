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

// UnityStandardAssets.Water.Water
struct Water_t805409185;
// UnityEngine.Camera
struct Camera_t3533968274;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1789603642.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// System.Void UnityStandardAssets.Water.Water::.ctor()
extern "C"  void Water__ctor_m850458096 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnWillRenderObject()
extern "C"  void Water_OnWillRenderObject_m4199563258 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::OnDisable()
extern "C"  void Water_OnDisable_m4067152471 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::Update()
extern "C"  void Water_Update_m2321259293 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::UpdateCameraModes(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void Water_UpdateCameraModes_m1943430390 (Water_t805409185 * __this, Camera_t3533968274 * ___src, Camera_t3533968274 * ___dest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CreateWaterObjects(UnityEngine.Camera,UnityEngine.Camera&,UnityEngine.Camera&)
extern "C"  void Water_CreateWaterObjects_m1862555925 (Water_t805409185 * __this, Camera_t3533968274 * ___currentCamera, Camera_t3533968274 ** ___reflectionCamera, Camera_t3533968274 ** ___refractionCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::GetWaterMode()
extern "C"  int32_t Water_GetWaterMode_m1693964183 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityStandardAssets.Water.Water/WaterMode UnityStandardAssets.Water.Water::FindHardwareWaterSupport()
extern "C"  int32_t Water_FindHardwareWaterSupport_m197713612 (Water_t805409185 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.Water::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t3525329790  Water_CameraSpacePlane_m731118981 (Water_t805409185 * __this, Camera_t3533968274 * ___cam, Vector3_t3525329789  ___pos, Vector3_t3525329789  ___normal, float ___sideSign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.Water::CalculateReflectionMatrix(UnityEngine.Matrix4x4&,UnityEngine.Vector4)
extern "C"  void Water_CalculateReflectionMatrix_m2772475044 (Object_t * __this /* static, unused */, Matrix4x4_t277289660 * ___reflectionMat, Vector4_t3525329790  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
