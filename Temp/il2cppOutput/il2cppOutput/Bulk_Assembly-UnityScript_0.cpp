#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// ScrollUV
struct ScrollUV_t3957446222;
// UnityEngine.Renderer
struct Renderer_t1092684080;
// System.Object
struct Object_t;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_ScrollUV3957446222.h"
#include "AssemblyU2DUnityScript_ScrollUV3957446222MethodDeclarations.h"
#include "mscorlib_System_Void2779279689.h"
#include "UnityEngine_UnityEngine_MonoBehaviour3012272455MethodDeclarations.h"
#include "mscorlib_System_Single958209021.h"
#include "UnityEngine_UnityEngine_Time1525492538MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component2126946602MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector23525329788MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material1886596500MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer1092684080.h"
#include "UnityEngine_UnityEngine_Component2126946602.h"
#include "UnityEngine_UnityEngine_Material1886596500.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Object_t * Component_GetComponent_TisObject_t_m267839954_gshared (Component_t2126946602 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m267839954(__this, method) ((  Object_t * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
#define Component_GetComponent_TisRenderer_t1092684080_m2901511552(__this, method) ((  Renderer_t1092684080 * (*) (Component_t2126946602 *, const MethodInfo*))Component_GetComponent_TisObject_t_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ScrollUV::.ctor()
extern "C"  void ScrollUV__ctor_m1091527298 (ScrollUV_t3957446222 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		__this->___scrollSpeed_X_2 = (0.5f);
		__this->___scrollSpeed_Y_3 = (0.5f);
		return;
	}
}
// System.Void ScrollUV::Update()
extern const MethodInfo* Component_GetComponent_TisRenderer_t1092684080_m2901511552_MethodInfo_var;
extern const uint32_t ScrollUV_Update_m1204469963_MetadataUsageId;
extern "C"  void ScrollUV_Update_m1204469963 (ScrollUV_t3957446222 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ScrollUV_Update_m1204469963_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		float L_0 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___scrollSpeed_X_2);
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Time_get_time_m342192902(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = (__this->___scrollSpeed_Y_3);
		V_1 = ((float)((float)L_2*(float)L_3));
		Renderer_t1092684080 * L_4 = Component_GetComponent_TisRenderer_t1092684080_m2901511552(__this, /*hidden argument*/Component_GetComponent_TisRenderer_t1092684080_m2901511552_MethodInfo_var);
		NullCheck(L_4);
		Material_t1886596500 * L_5 = Renderer_get_material_m2720864603(L_4, /*hidden argument*/NULL);
		float L_6 = V_0;
		float L_7 = V_1;
		Vector2_t3525329788  L_8 = {0};
		Vector2__ctor_m1517109030(&L_8, L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Material_set_mainTextureOffset_m3397882654(L_5, L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScrollUV::Main()
extern "C"  void ScrollUV_Main_m3414388219 (ScrollUV_t3957446222 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
