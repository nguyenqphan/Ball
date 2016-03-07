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

// Facebook.Unity.HideUnityDelegate
struct HideUnityDelegate_t2364798903;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Facebook.Unity.HideUnityDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void HideUnityDelegate__ctor_m2462696862 (HideUnityDelegate_t2364798903 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::Invoke(System.Boolean)
extern "C"  void HideUnityDelegate_Invoke_m1011121903 (HideUnityDelegate_t2364798903 * __this, bool ___isUnityShown, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_HideUnityDelegate_t2364798903(Il2CppObject* delegate, bool ___isUnityShown);
// System.IAsyncResult Facebook.Unity.HideUnityDelegate::BeginInvoke(System.Boolean,System.AsyncCallback,System.Object)
extern "C"  Object_t * HideUnityDelegate_BeginInvoke_m1800227100 (HideUnityDelegate_t2364798903 * __this, bool ___isUnityShown, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.HideUnityDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void HideUnityDelegate_EndInvoke_m2293020334 (HideUnityDelegate_t2364798903 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
