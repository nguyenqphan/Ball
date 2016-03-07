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

// Facebook.Unity.FacebookDelegate`1<System.Object>
struct FacebookDelegate_1_t1473468476;
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

// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void FacebookDelegate_1__ctor_m823687686_gshared (FacebookDelegate_1_t1473468476 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define FacebookDelegate_1__ctor_m823687686(__this, ___object, ___method, method) ((  void (*) (FacebookDelegate_1_t1473468476 *, Object_t *, IntPtr_t, const MethodInfo*))FacebookDelegate_1__ctor_m823687686_gshared)(__this, ___object, ___method, method)
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::Invoke(T)
extern "C"  void FacebookDelegate_1_Invoke_m3541671806_gshared (FacebookDelegate_1_t1473468476 * __this, Object_t * ___result, const MethodInfo* method);
#define FacebookDelegate_1_Invoke_m3541671806(__this, ___result, method) ((  void (*) (FacebookDelegate_1_t1473468476 *, Object_t *, const MethodInfo*))FacebookDelegate_1_Invoke_m3541671806_gshared)(__this, ___result, method)
// System.IAsyncResult Facebook.Unity.FacebookDelegate`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * FacebookDelegate_1_BeginInvoke_m222181963_gshared (FacebookDelegate_1_t1473468476 * __this, Object_t * ___result, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method);
#define FacebookDelegate_1_BeginInvoke_m222181963(__this, ___result, ___callback, ___object, method) ((  Object_t * (*) (FacebookDelegate_1_t1473468476 *, Object_t *, AsyncCallback_t1363551830 *, Object_t *, const MethodInfo*))FacebookDelegate_1_BeginInvoke_m222181963_gshared)(__this, ___result, ___callback, ___object, method)
// System.Void Facebook.Unity.FacebookDelegate`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  void FacebookDelegate_1_EndInvoke_m3390430998_gshared (FacebookDelegate_1_t1473468476 * __this, Object_t * ___result, const MethodInfo* method);
#define FacebookDelegate_1_EndInvoke_m3390430998(__this, ___result, method) ((  void (*) (FacebookDelegate_1_t1473468476 *, Object_t *, const MethodInfo*))FacebookDelegate_1_EndInvoke_m3390430998_gshared)(__this, ___result, method)
