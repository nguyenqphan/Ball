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

// DiamondDeactivate/EmissiveAction
struct EmissiveAction_t997068685;
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

// System.Void DiamondDeactivate/EmissiveAction::.ctor(System.Object,System.IntPtr)
extern "C"  void EmissiveAction__ctor_m1839990363 (EmissiveAction_t997068685 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DiamondDeactivate/EmissiveAction::Invoke(UnityEngine.GameObject)
extern "C"  void EmissiveAction_Invoke_m1762748461 (EmissiveAction_t997068685 * __this, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_EmissiveAction_t997068685(Il2CppObject* delegate, GameObject_t4012695102 * ___gameObject);
// System.IAsyncResult DiamondDeactivate/EmissiveAction::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * EmissiveAction_BeginInvoke_m572333240 (EmissiveAction_t997068685 * __this, GameObject_t4012695102 * ___gameObject, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DiamondDeactivate/EmissiveAction::EndInvoke(System.IAsyncResult)
extern "C"  void EmissiveAction_EndInvoke_m60743147 (EmissiveAction_t997068685 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
