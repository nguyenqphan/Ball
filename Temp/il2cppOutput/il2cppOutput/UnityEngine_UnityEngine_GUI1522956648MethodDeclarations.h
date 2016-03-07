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

// UnityEngine.GUISkin
struct GUISkin_t2614611333;
// System.String
struct String_t;
// UnityEngine.GUIContent
struct GUIContent_t2432841515;
// UnityEngine.GUIStyle
struct GUIStyle_t1006925219;
// UnityEngine.TextEditor
struct TextEditor_t657407335;
// UnityEngine.GUIContent[]
struct GUIContentU5BU5D_t130836426;
// UnityEngine.Rect[]
struct RectU5BU5D_t1056984396;
// UnityEngine.GUI/WindowFunction
struct WindowFunction_t999919624;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime339033936.h"
#include "UnityEngine_UnityEngine_GUISkin2614611333.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Rect1525428817.h"
#include "UnityEngine_UnityEngine_GUIContent2432841515.h"
#include "UnityEngine_UnityEngine_GUIStyle1006925219.h"
#include "UnityEngine_UnityEngine_FocusType860532831.h"
#include "UnityEngine_UnityEngine_TextEditor657407335.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"
#include "UnityEngine_UnityEngine_GUI_WindowFunction999919624.h"
#include "mscorlib_System_IntPtr676692020.h"

// System.Void UnityEngine.GUI::.cctor()
extern "C"  void GUI__cctor_m1345698031 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime UnityEngine.GUI::get_nextScrollStepTime()
extern "C"  DateTime_t339033936  GUI_get_nextScrollStepTime_m719800559 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_nextScrollStepTime(System.DateTime)
extern "C"  void GUI_set_nextScrollStepTime_m3820512796 (Object_t * __this /* static, unused */, DateTime_t339033936  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::get_scrollTroughSide()
extern "C"  int32_t GUI_get_scrollTroughSide_m3369891864 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_scrollTroughSide(System.Int32)
extern "C"  void GUI_set_scrollTroughSide_m1228634973 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_skin(UnityEngine.GUISkin)
extern "C"  void GUI_set_skin_m1213959601 (Object_t * __this /* static, unused */, GUISkin_t2614611333 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUISkin UnityEngine.GUI::get_skin()
extern "C"  GUISkin_t2614611333 * GUI_get_skin_m4001454842 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoSetSkin(UnityEngine.GUISkin)
extern "C"  void GUI_DoSetSkin_m800823745 (Object_t * __this /* static, unused */, GUISkin_t2614611333 * ___newSkin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_tooltip(System.String)
extern "C"  void GUI_set_tooltip_m2757283616 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
extern "C"  void GUI_Label_m1483857617 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Label_m2293702269 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Box(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUI_Box_m3007052244 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  bool GUI_Button_m2185150522 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::Button(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  bool GUI_Button_m3806860863 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoRepeatButton(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.FocusType)
extern "C"  bool GUI_DoRepeatButton_m4194170646 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, int32_t ___focusType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.GUI::PasswordFieldGetStrToShow(System.String,System.Char)
extern "C"  String_t* GUI_PasswordFieldGetStrToShow_m1283548296 (Object_t * __this /* static, unused */, String_t* ___password, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle)
extern "C"  void GUI_DoTextField_m1314526082 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___id, GUIContent_t2432841515 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String)
extern "C"  void GUI_DoTextField_m597815358 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___id, GUIContent_t2432841515 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t1006925219 * ___style, String_t* ___secureText, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoTextField(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char)
extern "C"  void GUI_DoTextField_m3194851797 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___id, GUIContent_t2432841515 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t1006925219 * ___style, String_t* ___secureText, uint16_t ___maskChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForTouchscreen(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,System.String,System.Char,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForTouchscreen_m3727225151 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___id, GUIContent_t2432841515 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t1006925219 * ___style, String_t* ___secureText, uint16_t ___maskChar, TextEditor_t657407335 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::HandleTextFieldEventForDesktop(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent,System.Boolean,System.Int32,UnityEngine.GUIStyle,UnityEngine.TextEditor)
extern "C"  void GUI_HandleTextFieldEventForDesktop_m3098489379 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___id, GUIContent_t2432841515 * ___content, bool ___multiline, int32_t ___maxLength, GUIStyle_t1006925219 * ___style, TextEditor_t657407335 * ___editor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::Toolbar(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],UnityEngine.GUIStyle)
extern "C"  int32_t GUI_Toolbar_m3845961669 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___selected, GUIContentU5BU5D_t130836426* ___contents, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::FindStyles(UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,UnityEngine.GUIStyle&,System.String,System.String,System.String)
extern "C"  void GUI_FindStyles_m4203162469 (Object_t * __this /* static, unused */, GUIStyle_t1006925219 ** ___style, GUIStyle_t1006925219 ** ___firstStyle, GUIStyle_t1006925219 ** ___midStyle, GUIStyle_t1006925219 ** ___lastStyle, String_t* ___first, String_t* ___mid, String_t* ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::CalcTotalHorizSpacing(System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_CalcTotalHorizSpacing_m1193798691 (Object_t * __this /* static, unused */, int32_t ___xCount, GUIStyle_t1006925219 * ___style, GUIStyle_t1006925219 * ___firstStyle, GUIStyle_t1006925219 * ___midStyle, GUIStyle_t1006925219 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::DoButtonGrid(UnityEngine.Rect,System.Int32,UnityEngine.GUIContent[],System.Int32,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  int32_t GUI_DoButtonGrid_m4269625009 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___selected, GUIContentU5BU5D_t130836426* ___contents, int32_t ___xCount, GUIStyle_t1006925219 * ___style, GUIStyle_t1006925219 * ___firstStyle, GUIStyle_t1006925219 * ___midStyle, GUIStyle_t1006925219 * ___lastStyle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect[] UnityEngine.GUI::CalcMouseRects(UnityEngine.Rect,System.Int32,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  RectU5BU5D_t1056984396* GUI_CalcMouseRects_m1004387707 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, int32_t ___count, int32_t ___xCount, float ___elemWidth, float ___elemHeight, GUIStyle_t1006925219 * ___style, GUIStyle_t1006925219 * ___firstStyle, GUIStyle_t1006925219 * ___midStyle, GUIStyle_t1006925219 * ___lastStyle, bool ___addBorders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GUI::GetButtonGridMouseSelection(UnityEngine.Rect[],UnityEngine.Vector2,System.Boolean)
extern "C"  int32_t GUI_GetButtonGridMouseSelection_m1444198773 (Object_t * __this /* static, unused */, RectU5BU5D_t1056984396* ___buttonRects, Vector2_t3525329788  ___mousePos, bool ___findNearest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Slider(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C"  float GUI_Slider_m2269439694 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, float ___value, float ___size, float ___start, float ___end, GUIStyle_t1006925219 * ___slider, GUIStyle_t1006925219 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::HorizontalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_HorizontalScrollbar_m2127981046 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::ScrollerRepeatButton(System.Int32,UnityEngine.Rect,UnityEngine.GUIStyle)
extern "C"  bool GUI_ScrollerRepeatButton_m2505011526 (Object_t * __this /* static, unused */, int32_t ___scrollerID, Rect_t1525428817  ___rect, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::VerticalScrollbar(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  float GUI_VerticalScrollbar_m1710564744 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, float ___value, float ___size, float ___topValue, float ___bottomValue, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.GUI::Scroller(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean)
extern "C"  float GUI_Scroller_m520117136 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, float ___value, float ___size, float ___leftValue, float ___rightValue, GUIStyle_t1006925219 * ___slider, GUIStyle_t1006925219 * ___thumb, GUIStyle_t1006925219 * ___leftButton, GUIStyle_t1006925219 * ___rightButton, bool ___horiz, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.GUI::BeginScrollView(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,System.Boolean,UnityEngine.GUIStyle,UnityEngine.GUIStyle,UnityEngine.GUIStyle)
extern "C"  Vector2_t3525329788  GUI_BeginScrollView_m3702064537 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, Vector2_t3525329788  ___scrollPosition, Rect_t1525428817  ___viewRect, bool ___alwaysShowHorizontal, bool ___alwaysShowVertical, GUIStyle_t1006925219 * ___horizontalScrollbar, GUIStyle_t1006925219 * ___verticalScrollbar, GUIStyle_t1006925219 * ___background, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::EndScrollView(System.Boolean)
extern "C"  void GUI_EndScrollView_m3615223136 (Object_t * __this /* static, unused */, bool ___handleScrollWheel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::Window(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String)
extern "C"  Rect_t1525428817  GUI_Window_m2314976695 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817  ___clientRect, WindowFunction_t999919624 * ___func, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::ModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,System.String,UnityEngine.GUIStyle)
extern "C"  Rect_t1525428817  GUI_ModalWindow_m3722794679 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817  ___clientRect, WindowFunction_t999919624 * ___func, String_t* ___text, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::CallWindowDelegate(UnityEngine.GUI/WindowFunction,System.Int32,UnityEngine.GUISkin,System.Int32,System.Single,System.Single,UnityEngine.GUIStyle)
extern "C"  void GUI_CallWindowDelegate_m2260338804 (Object_t * __this /* static, unused */, WindowFunction_t999919624 * ___func, int32_t ___id, GUISkin_t2614611333 * ____skin, int32_t ___forceRect, float ___width, float ___height, GUIStyle_t1006925219 * ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_changed(System.Boolean)
extern "C"  void GUI_set_changed_m727947722 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_enabled()
extern "C"  bool GUI_get_enabled_m3799739706 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::set_enabled(System.Boolean)
extern "C"  void GUI_set_enabled_m262604887 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::Internal_SetTooltip(System.String)
extern "C"  void GUI_Internal_SetTooltip_m2127802787 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::DoLabel(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_DoLabel_m2990009013 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoLabel(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  void GUI_INTERNAL_CALL_DoLabel_m2707679966 (Object_t * __this /* static, unused */, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::DoButton(UnityEngine.Rect,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_DoButton_m2194494269 (Object_t * __this /* static, unused */, Rect_t1525428817  ___position, GUIContent_t2432841515 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::INTERNAL_CALL_DoButton(UnityEngine.Rect&,UnityEngine.GUIContent,System.IntPtr)
extern "C"  bool GUI_INTERNAL_CALL_DoButton_m1954108340 (Object_t * __this /* static, unused */, Rect_t1525428817 * ___position, GUIContent_t2432841515 * ___content, IntPtr_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GUI::get_usePageScrollbars()
extern "C"  bool GUI_get_usePageScrollbars_m944581596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::InternalRepaintEditorWindow()
extern "C"  void GUI_InternalRepaintEditorWindow_m3223206407 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoModalWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin)
extern "C"  Rect_t1525428817  GUI_DoModalWindow_m1270479406 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817  ___clientRect, WindowFunction_t999919624 * ___func, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUISkin_t2614611333 * ___skin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoModalWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoModalWindow_m1785328038 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817 * ___clientRect, WindowFunction_t999919624 * ___func, GUIContent_t2432841515 * ___content, GUIStyle_t1006925219 * ___style, GUISkin_t2614611333 * ___skin, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.GUI::DoWindow(System.Int32,UnityEngine.Rect,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean)
extern "C"  Rect_t1525428817  GUI_DoWindow_m2731683716 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817  ___clientRect, WindowFunction_t999919624 * ___func, GUIContent_t2432841515 * ___title, GUIStyle_t1006925219 * ___style, GUISkin_t2614611333 * ___skin, bool ___forceRectOnLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUI::INTERNAL_CALL_DoWindow(System.Int32,UnityEngine.Rect&,UnityEngine.GUI/WindowFunction,UnityEngine.GUIContent,UnityEngine.GUIStyle,UnityEngine.GUISkin,System.Boolean,UnityEngine.Rect&)
extern "C"  void GUI_INTERNAL_CALL_DoWindow_m104027050 (Object_t * __this /* static, unused */, int32_t ___id, Rect_t1525428817 * ___clientRect, WindowFunction_t999919624 * ___func, GUIContent_t2432841515 * ___title, GUIStyle_t1006925219 * ___style, GUISkin_t2614611333 * ___skin, bool ___forceRectOnLayout, Rect_t1525428817 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
