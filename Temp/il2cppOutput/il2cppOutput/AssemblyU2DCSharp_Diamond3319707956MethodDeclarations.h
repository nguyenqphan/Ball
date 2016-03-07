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

// Diamond
struct Diamond_t3319707956;
// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;
// UnityEngine.Collider
struct Collider_t955670625;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Diamond_ActionBreaking3455992569.h"
#include "UnityEngine_UnityEngine_Collider955670625.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void Diamond::.ctor()
extern "C"  void Diamond__ctor_m1471516855 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::add_BreakingDiamond(Diamond/ActionBreaking)
extern "C"  void Diamond_add_BreakingDiamond_m3378285524 (Object_t * __this /* static, unused */, ActionBreaking_t3455992569 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::remove_BreakingDiamond(Diamond/ActionBreaking)
extern "C"  void Diamond_remove_BreakingDiamond_m3004004943 (Object_t * __this /* static, unused */, ActionBreaking_t3455992569 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::Awake()
extern "C"  void Diamond_Awake_m1709122074 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::Start()
extern "C"  void Diamond_Start_m418654647 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::OnTriggerEnter(UnityEngine.Collider)
extern "C"  void Diamond_OnTriggerEnter_m570362401 (Diamond_t3319707956 * __this, Collider_t955670625 * ___collider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::Pickup()
extern "C"  void Diamond_Pickup_m2333182505 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Diamond::Spin()
extern "C"  Object_t * Diamond_Spin_m1119011367 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Diamond::Float()
extern "C"  Object_t * Diamond_Float_m1567678329 (Diamond_t3319707956 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond::MoveDiamond(UnityEngine.Vector3)
extern "C"  void Diamond_MoveDiamond_m1216732801 (Diamond_t3319707956 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Diamond::moving(UnityEngine.Vector3)
extern "C"  Object_t * Diamond_moving_m4047791846 (Diamond_t3319707956 * __this, Vector3_t3525329789  ___targetPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
