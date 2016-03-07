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

// Cube
struct Cube_t2111573;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Cube::.ctor()
extern "C"  void Cube__ctor_m1317069286 (Cube_t2111573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cube::LeftWallOn()
extern "C"  void Cube_LeftWallOn_m557497614 (Cube_t2111573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cube::RightWallOn()
extern "C"  void Cube_RightWallOn_m1443161609 (Cube_t2111573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cube::RotateCube(System.Single)
extern "C"  void Cube_RotateCube_m529299293 (Cube_t2111573 * __this, float ___dirToRotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Cube::StartToRotate(System.Single)
extern "C"  Object_t * Cube_StartToRotate_m3196867383 (Cube_t2111573 * __this, float ___dirToRotate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Cube::MoveCube(UnityEngine.Vector3)
extern "C"  void Cube_MoveCube_m1525690133 (Cube_t2111573 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Cube::StartToMove(UnityEngine.Vector3)
extern "C"  Object_t * Cube_StartToMove_m22665647 (Cube_t2111573 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
