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

// Ball
struct Ball_t2062879;
// Ball/ActionScaling
struct ActionScaling_t4098096209;
// Ball/ActionExplode
struct ActionExplode_t878049707;
// UnityEngine.Collider
struct Collider_t955670625;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Ball_ActionScaling4098096209.h"
#include "AssemblyU2DCSharp_Ball_ActionExplode878049707.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Ball::.ctor()
extern "C"  void Ball__ctor_m1158546268 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::add_Scalling(Ball/ActionScaling)
extern "C"  void Ball_add_Scalling_m2164337334 (Object_t * __this /* static, unused */, ActionScaling_t4098096209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::remove_Scalling(Ball/ActionScaling)
extern "C"  void Ball_remove_Scalling_m3859665733 (Object_t * __this /* static, unused */, ActionScaling_t4098096209 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::add_ExplodeBall(Ball/ActionExplode)
extern "C"  void Ball_add_ExplodeBall_m2520872833 (Object_t * __this /* static, unused */, ActionExplode_t878049707 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::remove_ExplodeBall(Ball/ActionExplode)
extern "C"  void Ball_remove_ExplodeBall_m3528773778 (Object_t * __this /* static, unused */, ActionExplode_t878049707 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::Awake()
extern "C"  void Ball_Awake_m1396151487 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Ball_OnTriggerEnter_m2807985564 (Ball_t2062879 * __this, Collider_t955670625 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball::MoveBall(UnityEngine.Vector3)
extern "C"  void Ball_MoveBall_m816043137 (Ball_t2062879 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Ball::moving(UnityEngine.Vector3)
extern "C"  Object_t * Ball_moving_m471303547 (Ball_t2062879 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Ball::pulse()
extern "C"  Object_t * Ball_pulse_m2613207211 (Ball_t2062879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
