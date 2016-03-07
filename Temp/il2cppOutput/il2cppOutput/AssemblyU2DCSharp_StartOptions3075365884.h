#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Animator
struct Animator_t792326996;
// UnityEngine.AnimationClip
struct AnimationClip_t57566497;
// PlayMusic
struct PlayMusic_t109867825;
// ShowPanels
struct ShowPanels_t2673010796;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// StartOptions
struct  StartOptions_t3075365884  : public MonoBehaviour_t3012272455
{
	// System.Int32 StartOptions::sceneToStart
	int32_t ___sceneToStart_2;
	// System.Boolean StartOptions::changeScenes
	bool ___changeScenes_3;
	// System.Boolean StartOptions::changeMusicOnStart
	bool ___changeMusicOnStart_4;
	// System.Boolean StartOptions::inMainMenu
	bool ___inMainMenu_5;
	// UnityEngine.Animator StartOptions::animColorFade
	Animator_t792326996 * ___animColorFade_6;
	// UnityEngine.Animator StartOptions::animMenuAlpha
	Animator_t792326996 * ___animMenuAlpha_7;
	// UnityEngine.AnimationClip StartOptions::fadeColorAnimationClip
	AnimationClip_t57566497 * ___fadeColorAnimationClip_8;
	// UnityEngine.AnimationClip StartOptions::fadeAlphaAnimationClip
	AnimationClip_t57566497 * ___fadeAlphaAnimationClip_9;
	// PlayMusic StartOptions::playMusic
	PlayMusic_t109867825 * ___playMusic_10;
	// System.Single StartOptions::fastFadeIn
	float ___fastFadeIn_11;
	// ShowPanels StartOptions::showPanels
	ShowPanels_t2673010796 * ___showPanels_12;
};
