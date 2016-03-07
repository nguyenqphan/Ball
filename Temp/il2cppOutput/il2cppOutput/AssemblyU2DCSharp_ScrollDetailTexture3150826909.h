#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t1886596500;
// UnityEngine.UI.Image
struct Image_t3354615620;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_Matrix4x4277289660.h"

// ScrollDetailTexture
struct  ScrollDetailTexture_t3150826909  : public MonoBehaviour_t3012272455
{
	// System.Boolean ScrollDetailTexture::uniqueMaterial
	bool ___uniqueMaterial_2;
	// UnityEngine.Vector2 ScrollDetailTexture::scrollPerSecond
	Vector2_t3525329788  ___scrollPerSecond_3;
	// UnityEngine.Matrix4x4 ScrollDetailTexture::m_Matrix
	Matrix4x4_t277289660  ___m_Matrix_4;
	// UnityEngine.Material ScrollDetailTexture::mCopy
	Material_t1886596500 * ___mCopy_5;
	// UnityEngine.Material ScrollDetailTexture::mOriginal
	Material_t1886596500 * ___mOriginal_6;
	// UnityEngine.UI.Image ScrollDetailTexture::mSprite
	Image_t3354615620 * ___mSprite_7;
	// UnityEngine.Material ScrollDetailTexture::m_Mat
	Material_t1886596500 * ___m_Mat_8;
};
