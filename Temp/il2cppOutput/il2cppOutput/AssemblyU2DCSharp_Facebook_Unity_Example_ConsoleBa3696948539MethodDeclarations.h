#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.Example.ConsoleBase
struct ConsoleBase_t3696948539;
// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3538894937;
// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t2509538522;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Texture2D2509538522.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "mscorlib_System_Type2779229935.h"

// System.Void Facebook.Unity.Example.ConsoleBase::.ctor()
extern "C"  void ConsoleBase__ctor_m1113747224 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::.cctor()
extern "C"  void ConsoleBase__cctor_m3979296661 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Stack`1<System.String> Facebook.Unity.Example.ConsoleBase::get_MenuStack()
extern "C"  Stack_1_t3538894937 * ConsoleBase_get_MenuStack_m3555290595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_MenuStack(System.Collections.Generic.Stack`1<System.String>)
extern "C"  void ConsoleBase_set_MenuStack_m88943184 (Object_t * __this /* static, unused */, Stack_1_t3538894937 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Example.ConsoleBase::get_Status()
extern "C"  String_t* ConsoleBase_get_Status_m3717686602 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_Status(System.String)
extern "C"  void ConsoleBase_set_Status_m321418567 (ConsoleBase_t3696948539 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Facebook.Unity.Example.ConsoleBase::get_LastResponseTexture()
extern "C"  Texture2D_t2509538522 * ConsoleBase_get_LastResponseTexture_m751576532 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponseTexture(UnityEngine.Texture2D)
extern "C"  void ConsoleBase_set_LastResponseTexture_m2091261503 (ConsoleBase_t3696948539 * __this, Texture2D_t2509538522 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.Unity.Example.ConsoleBase::get_LastResponse()
extern "C"  String_t* ConsoleBase_get_LastResponse_m917520335 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_LastResponse(System.String)
extern "C"  void ConsoleBase_set_LastResponse_m3105727394 (ConsoleBase_t3696948539 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Facebook.Unity.Example.ConsoleBase::get_ScrollPosition()
extern "C"  Vector2_t3525329788  ConsoleBase_get_ScrollPosition_m3130822566 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::set_ScrollPosition(UnityEngine.Vector2)
extern "C"  void ConsoleBase_set_ScrollPosition_m3698511259 (ConsoleBase_t3696948539 * __this, Vector2_t3525329788  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Facebook.Unity.Example.ConsoleBase::get_ScaleFactor()
extern "C"  float ConsoleBase_get_ScaleFactor_m3651438714 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Facebook.Unity.Example.ConsoleBase::get_FontSize()
extern "C"  int32_t ConsoleBase_get_FontSize_m1994394675 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextStyle()
extern "C"  GUIStyle_t1006925219 * ConsoleBase_get_TextStyle_m3377997281 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_ButtonStyle()
extern "C"  GUIStyle_t1006925219 * ConsoleBase_get_ButtonStyle_m857734460 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_TextInputStyle()
extern "C"  GUIStyle_t1006925219 * ConsoleBase_get_TextInputStyle_m1176790329 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIStyle Facebook.Unity.Example.ConsoleBase::get_LabelStyle()
extern "C"  GUIStyle_t1006925219 * ConsoleBase_get_LabelStyle_m1841114882 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::Awake()
extern "C"  void ConsoleBase_Awake_m1351352443 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Example.ConsoleBase::Button(System.String)
extern "C"  bool ConsoleBase_Button_m3544609904 (ConsoleBase_t3696948539 * __this, String_t* ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::LabelAndTextField(System.String,System.String&)
extern "C"  void ConsoleBase_LabelAndTextField_m3119033038 (ConsoleBase_t3696948539 * __this, String_t* ___label, String_t** ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Facebook.Unity.Example.ConsoleBase::IsHorizontalLayout()
extern "C"  bool ConsoleBase_IsHorizontalLayout_m555650648 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::SwitchMenu(System.Type)
extern "C"  void ConsoleBase_SwitchMenu_m3585505594 (ConsoleBase_t3696948539 * __this, Type_t * ___menuClass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.Example.ConsoleBase::GoBack()
extern "C"  void ConsoleBase_GoBack_m1402351259 (ConsoleBase_t3696948539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
