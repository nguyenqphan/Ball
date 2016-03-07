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

// GameStateManager/InstanceStep
struct InstanceStep_t3721597217;
// System.Object
struct Object_t;
// GameStateManager
struct GameStateManager_t648042254;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void GameStateManager/InstanceStep::.ctor(System.Object,System.IntPtr)
extern "C"  void InstanceStep__ctor_m1886435673 (InstanceStep_t3721597217 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameStateManager GameStateManager/InstanceStep::Invoke()
extern "C"  GameStateManager_t648042254 * InstanceStep_Invoke_m955855268 (InstanceStep_t3721597217 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" GameStateManager_t648042254 * pinvoke_delegate_wrapper_InstanceStep_t3721597217(Il2CppObject* delegate);
// System.IAsyncResult GameStateManager/InstanceStep::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Object_t * InstanceStep_BeginInvoke_m3001398840 (InstanceStep_t3721597217 * __this, AsyncCallback_t1363551830 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameStateManager GameStateManager/InstanceStep::EndInvoke(System.IAsyncResult)
extern "C"  GameStateManager_t648042254 * InstanceStep_EndInvoke_m2397602778 (InstanceStep_t3721597217 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
