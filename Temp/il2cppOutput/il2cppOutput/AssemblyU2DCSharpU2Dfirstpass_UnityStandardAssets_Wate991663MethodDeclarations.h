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

// UnityStandardAssets.Water.PlanarReflection
struct PlanarReflection_t991663;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// UnityEngine.Transform
struct Transform_t284553113;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Camera3533968274.h"
#include "UnityEngine_UnityEngine_LayerMask1862190090.h"
#include "UnityEngine_UnityEngine_Transform284553113.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"
#include "UnityEngine_UnityEngine_Vector43525329790.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void UnityStandardAssets.Water.PlanarReflection::.ctor()
extern "C"  void PlanarReflection__ctor_m4223803930 (PlanarReflection_t991663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::Start()
extern "C"  void PlanarReflection_Start_m3170941722 (PlanarReflection_t991663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityStandardAssets.Water.PlanarReflection::CreateReflectionCameraFor(UnityEngine.Camera)
extern "C"  Camera_t3533968274 * PlanarReflection_CreateReflectionCameraFor_m1254064400 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SetStandardCameraParameter(UnityEngine.Camera,UnityEngine.LayerMask)
extern "C"  void PlanarReflection_SetStandardCameraParameter_m3892296569 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___cam, LayerMask_t1862190090  ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityStandardAssets.Water.PlanarReflection::CreateTextureFor(UnityEngine.Camera)
extern "C"  RenderTexture_t12905170 * PlanarReflection_CreateTextureFor_m369654685 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderHelpCameras(UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderHelpCameras_m2938936787 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___currentCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::LateUpdate()
extern "C"  void PlanarReflection_LateUpdate_m3077990521 (PlanarReflection_t991663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::WaterTileBeingRendered(UnityEngine.Transform,UnityEngine.Camera)
extern "C"  void PlanarReflection_WaterTileBeingRendered_m728320614 (PlanarReflection_t991663 * __this, Transform_t284553113 * ___tr, Camera_t3533968274 * ___currentCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnEnable()
extern "C"  void PlanarReflection_OnEnable_m3757586220 (PlanarReflection_t991663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::OnDisable()
extern "C"  void PlanarReflection_OnDisable_m961993089 (PlanarReflection_t991663 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::RenderReflectionFor(UnityEngine.Camera,UnityEngine.Camera)
extern "C"  void PlanarReflection_RenderReflectionFor_m3433204966 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___cam, Camera_t3533968274 * ___reflectCamera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityStandardAssets.Water.PlanarReflection::SaneCameraSettings(UnityEngine.Camera)
extern "C"  void PlanarReflection_SaneCameraSettings_m4161083419 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___helperCam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t277289660  PlanarReflection_CalculateObliqueMatrix_m2327395067 (Object_t * __this /* static, unused */, Matrix4x4_t277289660  ___projection, Vector4_t3525329790  ___clipPlane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityStandardAssets.Water.PlanarReflection::CalculateReflectionMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t277289660  PlanarReflection_CalculateReflectionMatrix_m3460169853 (Object_t * __this /* static, unused */, Matrix4x4_t277289660  ___reflectionMat, Vector4_t3525329790  ___plane, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityStandardAssets.Water.PlanarReflection::Sgn(System.Single)
extern "C"  float PlanarReflection_Sgn_m2867012773 (Object_t * __this /* static, unused */, float ___a, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityStandardAssets.Water.PlanarReflection::CameraSpacePlane(UnityEngine.Camera,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Vector4_t3525329790  PlanarReflection_CameraSpacePlane_m593265965 (PlanarReflection_t991663 * __this, Camera_t3533968274 * ___cam, Vector3_t3525329789  ___pos, Vector3_t3525329789  ___normal, float ___sideSign, const MethodInfo* method) IL2CPP_METHOD_ATTR;
