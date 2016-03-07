#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3317474837;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// ResizePanel
struct  ResizePanel_t788198800  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Vector2 ResizePanel::minSize
	Vector2_t3525329788  ___minSize_2;
	// UnityEngine.Vector2 ResizePanel::maxSize
	Vector2_t3525329788  ___maxSize_3;
	// UnityEngine.RectTransform ResizePanel::panelRectTransform
	RectTransform_t3317474837 * ___panelRectTransform_4;
	// UnityEngine.Vector2 ResizePanel::originalLocalPointerPosition
	Vector2_t3525329788  ___originalLocalPointerPosition_5;
	// UnityEngine.Vector2 ResizePanel::originalSizeDelta
	Vector2_t3525329788  ___originalSizeDelta_6;
};
