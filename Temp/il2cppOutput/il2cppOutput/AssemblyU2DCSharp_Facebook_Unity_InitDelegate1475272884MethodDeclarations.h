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

// Facebook.Unity.InitDelegate
struct InitDelegate_t1475272884;
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

// System.Void Facebook.Unity.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InitDelegate__ctor_m1407180717 (InitDelegate_t1475272884 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::Invoke()
extern "C"  void InitDelegate_Invoke_m4096150087 (InitDelegate_t1475272884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_InitDelegate_t1475272884(Il2CppObject* delegate);
// System.IAsyncResult Facebook.Unity.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * InitDelegate_BeginInvoke_m130468196 (InitDelegate_t1475272884 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InitDelegate_EndInvoke_m3729272893 (InitDelegate_t1475272884 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
