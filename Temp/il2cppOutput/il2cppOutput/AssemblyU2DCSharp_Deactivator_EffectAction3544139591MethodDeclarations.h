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

// Deactivator/EffectAction
struct EffectAction_t3544139591;
// System.Object
struct Object_t;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Deactivator/EffectAction::.ctor(System.Object,System.IntPtr)
extern "C"  void EffectAction__ctor_m709885321 (EffectAction_t3544139591 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deactivator/EffectAction::Invoke(UnityEngine.GameObject)
extern "C"  void EffectAction_Invoke_m2461804123 (EffectAction_t3544139591 * __this, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EffectAction_t3544139591(Il2CppObject* delegate, GameObject_t4012695102 * ___gameObject);
// System.IAsyncResult Deactivator/EffectAction::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * EffectAction_BeginInvoke_m2134857958 (EffectAction_t3544139591 * __this, GameObject_t4012695102 * ___gameObject, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Deactivator/EffectAction::EndInvoke(System.IAsyncResult)
extern "C"  void EffectAction_EndInvoke_m759798809 (EffectAction_t3544139591 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
