#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RenderTexture
struct RenderTexture_t12905170;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_I402405725.h"

// UnityStandardAssets.ImageEffects.MotionBlur
struct  MotionBlur_t2237997853  : public ImageEffectBase_t402405725
{
	// System.Single UnityStandardAssets.ImageEffects.MotionBlur::blurAmount
	float ___blurAmount_4;
	// System.Boolean UnityStandardAssets.ImageEffects.MotionBlur::extraBlur
	bool ___extraBlur_5;
	// UnityEngine.RenderTexture UnityStandardAssets.ImageEffects.MotionBlur::accumTexture
	RenderTexture_t12905170 * ___accumTexture_6;
};
