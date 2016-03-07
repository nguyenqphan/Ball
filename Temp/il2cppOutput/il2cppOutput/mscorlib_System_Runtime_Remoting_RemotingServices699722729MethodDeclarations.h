﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.MethodBase
struct MethodBase_t3461000640;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t3894317828;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1442800354;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t831247831;
// System.Type[]
struct TypeU5BU5D_t3431720054;
// System.Runtime.Remoting.ActivatedClientTypeEntry
struct ActivatedClientTypeEntry_t3359088292;
// System.Object[]
struct ObjectU5BU5D_t11523773;
// System.Runtime.Remoting.Identity
struct Identity_t1467752358;
// System.Runtime.Remoting.ClientIdentity
struct ClientIdentity_t544662673;
// System.Runtime.Remoting.Messaging.IMessageSink
struct IMessageSink_t882423531;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t571418633;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type2779229935.h"
#include "mscorlib_System_Reflection_MethodBase3461000640.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Runtime_Remoting_ObjRef3894317828.h"
#include "mscorlib_System_Runtime_Remoting_ActivatedClientTy3359088292.h"
#include "mscorlib_System_Runtime_Remoting_WellKnownObjectMod251966751.h"
#include "mscorlib_System_Runtime_Remoting_ServerIdentity571418633.h"
#include "mscorlib_System_Runtime_Remoting_Identity1467752358.h"

// System.Void System.Runtime.Remoting.RemotingServices::.cctor()
extern "C"  void RemotingServices__cctor_m722143346 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetVirtualMethod(System.Type,System.Reflection.MethodBase)
extern "C"  MethodBase_t3461000640 * RemotingServices_GetVirtualMethod_m2492796715 (Object_t * __this /* static, unused */, Type_t * ___type, MethodBase_t3461000640 * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.RemotingServices::IsTransparentProxy(System.Object)
extern "C"  bool RemotingServices_IsTransparentProxy_m3544746083 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.RemotingServices::GetServerTypeForUri(System.String)
extern "C"  Type_t * RemotingServices_GetServerTypeForUri_m2370855021 (Object_t * __this /* static, unused */, String_t* ___URI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef)
extern "C"  Object_t * RemotingServices_Unmarshal_m3453424695 (Object_t * __this /* static, unused */, ObjRef_t3894317828 * ___objectRef, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::Unmarshal(System.Runtime.Remoting.ObjRef,System.Boolean)
extern "C"  Object_t * RemotingServices_Unmarshal_m3493161574 (Object_t * __this /* static, unused */, ObjRef_t3894317828 * ___objectRef, bool ___fRefine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.RemotingServices::GetRealProxy(System.Object)
extern "C"  RealProxy_t1442800354 * RemotingServices_GetRealProxy_m469180406 (Object_t * __this /* static, unused */, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromMethodMessage(System.Runtime.Remoting.Messaging.IMethodMessage)
extern "C"  MethodBase_t3461000640 * RemotingServices_GetMethodBaseFromMethodMessage_m589251925 (Object_t * __this /* static, unused */, Object_t * ___msg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::GetMethodBaseFromName(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t3461000640 * RemotingServices_GetMethodBaseFromName_m1109362245 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t3431720054* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.RemotingServices::FindInterfaceMethod(System.Type,System.String,System.Type[])
extern "C"  MethodBase_t3461000640 * RemotingServices_FindInterfaceMethod_m1641296449 (Object_t * __this /* static, unused */, Type_t * ___type, String_t* ___methodName, TypeU5BU5D_t3431720054* ___signature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Runtime.Remoting.ActivatedClientTypeEntry,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxy_m1188122341 (Object_t * __this /* static, unused */, ActivatedClientTypeEntry_t3359088292 * ___entry, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxy(System.Type,System.String,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxy_m1887308374 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___url, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::CreateClientProxyForContextBound(System.Type,System.Object[])
extern "C"  Object_t * RemotingServices_CreateClientProxyForContextBound_m9934294 (Object_t * __this /* static, unused */, Type_t * ___type, ObjectU5BU5D_t11523773* ___activationAttributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Identity System.Runtime.Remoting.RemotingServices::GetIdentityForUri(System.String)
extern "C"  Identity_t1467752358 * RemotingServices_GetIdentityForUri_m1730131113 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::RemoveAppNameFromUri(System.String)
extern "C"  String_t* RemotingServices_RemoveAppNameFromUri_m1113505532 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ClientIdentity System.Runtime.Remoting.RemotingServices::GetOrCreateClientIdentity(System.Runtime.Remoting.ObjRef,System.Type,System.Object&)
extern "C"  ClientIdentity_t544662673 * RemotingServices_GetOrCreateClientIdentity_m3862611826 (Object_t * __this /* static, unused */, ObjRef_t3894317828 * ___objRef, Type_t * ___proxyType, Object_t ** ___clientProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.IMessageSink System.Runtime.Remoting.RemotingServices::GetClientChannelSinkChain(System.String,System.Object,System.String&)
extern "C"  Object_t * RemotingServices_GetClientChannelSinkChain_m3823167339 (Object_t * __this /* static, unused */, String_t* ___url, Object_t * ___channelData, String_t** ___objectUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.Runtime.Remoting.RemotingServices::CreateWellKnownServerIdentity(System.Type,System.String,System.Runtime.Remoting.WellKnownObjectMode)
extern "C"  ServerIdentity_t571418633 * RemotingServices_CreateWellKnownServerIdentity_m2420008897 (Object_t * __this /* static, unused */, Type_t * ___objectType, String_t* ___objectUri, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterServerIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C"  void RemotingServices_RegisterServerIdentity_m3253238710 (Object_t * __this /* static, unused */, ServerIdentity_t571418633 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetProxyForRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Object_t * RemotingServices_GetProxyForRemoteObject_m1565953531 (Object_t * __this /* static, unused */, ObjRef_t3894317828 * ___objref, Type_t * ___classToProxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.RemotingServices::GetRemoteObject(System.Runtime.Remoting.ObjRef,System.Type)
extern "C"  Object_t * RemotingServices_GetRemoteObject_m2559997024 (Object_t * __this /* static, unused */, ObjRef_t3894317828 * ___objRef, Type_t * ___proxyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::RegisterInternalChannels()
extern "C"  void RemotingServices_RegisterInternalChannels_m3428095417 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.RemotingServices::DisposeIdentity(System.Runtime.Remoting.Identity)
extern "C"  void RemotingServices_DisposeIdentity_m167351746 (Object_t * __this /* static, unused */, Identity_t1467752358 * ___ident, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.RemotingServices::GetNormalizedUri(System.String)
extern "C"  String_t* RemotingServices_GetNormalizedUri_m2995472567 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;