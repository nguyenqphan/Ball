#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material[]
struct MaterialU5BU5D_t3353847197;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// GetIndexCube
struct GetIndexCube_t3641666961;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// CubeMaterials
struct  CubeMaterials_t4044142423  : public MonoBehaviour_t3012272455
{
	// UnityEngine.Material[] CubeMaterials::materialLeft
	MaterialU5BU5D_t3353847197* ___materialLeft_2;
	// UnityEngine.Material[] CubeMaterials::materialRight
	MaterialU5BU5D_t3353847197* ___materialRight_3;
	// UnityEngine.Renderer CubeMaterials::renderMaterial
	Renderer_t1092684080 * ___renderMaterial_4;
	// GetIndexCube CubeMaterials::indexCube
	GetIndexCube_t3641666961 * ___indexCube_5;
};
