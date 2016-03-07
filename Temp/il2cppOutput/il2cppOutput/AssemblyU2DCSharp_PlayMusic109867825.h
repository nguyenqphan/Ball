#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t3714538611;
// UnityEngine.Audio.AudioMixerSnapshot
struct AudioMixerSnapshot_t3013571836;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// PlayMusic
struct  PlayMusic_t109867825  : public MonoBehaviour_t3012272455
{
	// UnityEngine.AudioClip PlayMusic::titleMusic
	AudioClip_t3714538611 * ___titleMusic_2;
	// UnityEngine.AudioClip PlayMusic::mainMusic
	AudioClip_t3714538611 * ___mainMusic_3;
	// UnityEngine.Audio.AudioMixerSnapshot PlayMusic::volumeDown
	AudioMixerSnapshot_t3013571836 * ___volumeDown_4;
	// UnityEngine.Audio.AudioMixerSnapshot PlayMusic::volumeUp
	AudioMixerSnapshot_t3013571836 * ___volumeUp_5;
	// UnityEngine.AudioSource PlayMusic::musicSource
	AudioSource_t3628549054 * ___musicSource_6;
	// System.Single PlayMusic::resetTime
	float ___resetTime_7;
};
