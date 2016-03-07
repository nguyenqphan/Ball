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

// Ball/ActionScaling
struct ActionScaling_t4098096209;
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

// System.Void Ball/ActionScaling::.ctor(System.Object,System.IntPtr)
extern "C"  void ActionScaling__ctor_m3332738696 (ActionScaling_t4098096209 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball/ActionScaling::Invoke(UnityEngine.GameObject)
extern "C"  void ActionScaling_Invoke_m541593306 (ActionScaling_t4098096209 * __this, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ActionScaling_t4098096209(Il2CppObject* delegate, GameObject_t4012695102 * ___gameObject);
// System.IAsyncResult Ball/ActionScaling::BeginInvoke(UnityEngine.GameObject,System.AsyncCallback,System.Object)
extern "C"  Object_t * ActionScaling_BeginInvoke_m3870787941 (ActionScaling_t4098096209 * __this, GameObject_t4012695102 * ___gameObject, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Ball/ActionScaling::EndInvoke(System.IAsyncResult)
extern "C"  void ActionScaling_EndInvoke_m3134555288 (ActionScaling_t4098096209 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
