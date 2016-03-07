#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// SoundBreaking
struct SoundBreaking_t2714241170;
// EventManager/EventAction
struct EventAction_t1244047696;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// EventManager
struct  EventManager_t1907836883  : public MonoBehaviour_t3012272455
{
	// SoundBreaking EventManager::soundDropBall
	SoundBreaking_t2714241170 * ___soundDropBall_2;
};
struct EventManager_t1907836883_StaticFields{
	// EventManager/EventAction EventManager::OnCamMove
	EventAction_t1244047696 * ___OnCamMove_3;
	// EventManager/EventAction EventManager::OnPlayerEnter
	EventAction_t1244047696 * ___OnPlayerEnter_4;
};
