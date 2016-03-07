#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// PanelManager
struct  PanelManager_t2965005609  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Animator PanelManager::initiallyOpen
	Animator_t792326996 * ___initiallyOpen_4;
	// System.Int32 PanelManager::m_OpenParameterId
	int32_t ___m_OpenParameterId_5;
	// UnityEngine.Animator PanelManager::m_Open
	Animator_t792326996 * ___m_Open_6;
	// UnityEngine.GameObject PanelManager::m_PreviouslySelected
	GameObject_t4012695102 * ___m_PreviouslySelected_7;
};
