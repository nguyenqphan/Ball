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

// Diamond/ActionBreaking
struct ActionBreaking_t3455992569;
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

// System.Void Diamond/ActionBreaking::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionBreaking__ctor_m1932546523 (ActionBreaking_t3455992569 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond/ActionBreaking::Invoke(UnityEngine.GameObject)
extern "C"  void ActionBreaking_Invoke_m4152849325 (ActionBreaking_t3455992569 * __this, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ActionBreaking_t3455992569(Il2CppObject* delegate, GameObject_t4012695102 * ___gameObject);
// System.IAsyncResult Diamond/ActionBreaking::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * ActionBreaking_BeginInvoke_m712080696 (ActionBreaking_t3455992569 * __this, GameObject_t4012695102 * ___gameObject, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Diamond/ActionBreaking::EndInvoke(System.IAsyncResult)
extern "C"  void ActionBreaking_EndInvoke_m2450844011 (ActionBreaking_t3455992569 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
