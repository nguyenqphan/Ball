#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light[]
struct LightU5BU5D_t3653382738;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;
// UnityEngine.Color[]
struct ColorU5BU5D_t3477081137;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// FSPlayer
struct  FSPlayer_t484114958  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Light[] FSPlayer::m_LightList
	LightU5BU5D_t3653382738* ___m_LightList_2;
	// UnityEngine.Material[] FSPlayer::m_SkyboxList
	MaterialU5BU5D_t3353847197* ___m_SkyboxList_3;
	// UnityEngine.Color[] FSPlayer::FogColorList
	ColorU5BU5D_t3477081137* ___FogColorList_4;
	// UnityEngine.Color[] FSPlayer::AmbientLightList
	ColorU5BU5D_t3477081137* ___AmbientLightList_5;
	// System.Int32 FSPlayer::m_CurrentSkyBox
	int32_t ___m_CurrentSkyBox_6;
};
