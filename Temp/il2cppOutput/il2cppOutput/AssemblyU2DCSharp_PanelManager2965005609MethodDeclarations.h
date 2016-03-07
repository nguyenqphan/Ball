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

// PanelManager
struct PanelManager_t2965005609;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Animator792326996.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"

// System.Void PanelManager::.ctor()
extern "C"  void PanelManager__ctor_m565332882 (PanelManager_t2965005609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OnEnable()
extern "C"  void PanelManager_OnEnable_m3336698548 (PanelManager_t2965005609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::OpenPanel(UnityEngine.Animator)
extern "C"  void PanelManager_OpenPanel_m3425902764 (PanelManager_t2965005609 * __this, Animator_t792326996 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject PanelManager::FindFirstEnabledSelectable(UnityEngine.GameObject)
extern "C"  GameObject_t4012695102 * PanelManager_FindFirstEnabledSelectable_m3666196511 (Object_t * __this /* static, unused */, GameObject_t4012695102 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::CloseCurrent()
extern "C"  void PanelManager_CloseCurrent_m2830000787 (PanelManager_t2965005609 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PanelManager::DisablePanelDeleyed(UnityEngine.Animator)
extern "C"  Object_t * PanelManager_DisablePanelDeleyed_m3121132044 (PanelManager_t2965005609 * __this, Animator_t792326996 * ___anim, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PanelManager::SetSelected(UnityEngine.GameObject)
extern "C"  void PanelManager_SetSelected_m413726469 (PanelManager_t2965005609 * __this, GameObject_t4012695102 * ___go, const MethodInfo* method) IL2CPP_METHOD_ATTR;
