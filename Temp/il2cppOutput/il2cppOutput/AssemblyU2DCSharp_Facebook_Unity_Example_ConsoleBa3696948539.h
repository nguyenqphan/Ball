#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3538894937;
// System.String
struct String_t;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_Nullable_1_gen3844246929.h"

// Facebook.Unity.Example.ConsoleBase
struct  ConsoleBase_t3696948539  : public MonoBehaviour_t3012272455
{
	// System.String Facebook.Unity.Example.ConsoleBase::status
	String_t* ___status_8;
	// System.String Facebook.Unity.Example.ConsoleBase::lastResponse
	String_t* ___lastResponse_9;
	// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::scrollPosition
	Vector2_t3525329788  ___scrollPosition_10;
	// System.Nullable`1<System.Single> Facebook.Unity.Example.ConsoleBase::scaleFactor
	Nullable_1_t3844246929  ___scaleFactor_11;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textStyle
	GUIStyle_t1006925219 * ___textStyle_12;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::buttonStyle
	GUIStyle_t1006925219 * ___buttonStyle_13;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::textInputStyle
	GUIStyle_t1006925219 * ___textInputStyle_14;
	// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::labelStyle
	GUIStyle_t1006925219 * ___labelStyle_15;
	// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::<LastResponseTexture>k__BackingField
	Texture2D_t2509538522 * ___U3CLastResponseTextureU3Ek__BackingField_16;
};
struct ConsoleBase_t3696948539_StaticFields{
	// System.Int32 Facebook.Unity.Example.ConsoleBase::ButtonHeight
	int32_t ___ButtonHeight_3;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MainWindowWidth
	int32_t ___MainWindowWidth_4;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MainWindowFullWidth
	int32_t ___MainWindowFullWidth_5;
	// System.Int32 Facebook.Unity.Example.ConsoleBase::MarginFix
	int32_t ___MarginFix_6;
	// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::menuStack
	Stack_1_t3538894937 * ___menuStack_7;
};
