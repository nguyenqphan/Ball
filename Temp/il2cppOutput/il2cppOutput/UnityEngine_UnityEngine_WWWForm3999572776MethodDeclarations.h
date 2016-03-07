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

// UnityEngine.WWWForm
struct WWWForm_t3999572776;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t180559927;
// System.Byte[]
struct ByteU5BU5D_t58506160;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t2606186806;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Text_Encoding180559927.h"

// System.Void UnityEngine.WWWForm::.ctor()
extern "C"  void WWWForm__ctor_m1417930174 (WWWForm_t3999572776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C"  void WWWForm_AddField_m2890504319 (WWWForm_t3999572776 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C"  void WWWForm_AddField_m3426667506 (WWWForm_t3999572776 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t180559927 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String)
extern "C"  void WWWForm_AddBinaryData_m3460911449 (WWWForm_t3999572776 * __this, String_t* ___fieldName, ByteU5BU5D_t58506160* ___contents, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddBinaryData(System.String,System.Byte[],System.String,System.String)
extern "C"  void WWWForm_AddBinaryData_m1424533973 (WWWForm_t3999572776 * __this, String_t* ___fieldName, ByteU5BU5D_t58506160* ___contents, String_t* ___fileName, String_t* ___mimeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C"  Dictionary_2_t2606186806 * WWWForm_get_headers_m370408569 (WWWForm_t3999572776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C"  ByteU5BU5D_t58506160* WWWForm_get_data_m2893811951 (WWWForm_t3999572776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
