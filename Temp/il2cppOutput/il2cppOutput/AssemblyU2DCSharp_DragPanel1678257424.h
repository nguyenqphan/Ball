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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// DragPanel
struct  DragPanel_t1678257424  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Vector2 DragPanel::originalLocalPointerPosition
	Vector2_t3525329788  ___originalLocalPointerPosition_2;
	// UnityEngine.Vector3 DragPanel::originalPanelLocalPosition
	Vector3_t3525329789  ___originalPanelLocalPosition_3;
	// UnityEngine.RectTransform DragPanel::panelRectTransform
	RectTransform_t3317474837 * ___panelRectTransform_4;
	// UnityEngine.RectTransform DragPanel::parentRectTransform
	RectTransform_t3317474837 * ___parentRectTransform_5;
};
