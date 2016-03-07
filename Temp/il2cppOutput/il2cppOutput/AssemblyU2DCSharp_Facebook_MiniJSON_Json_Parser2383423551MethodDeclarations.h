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

// Facebook.MiniJSON.Json/Parser
struct Parser_t2383423551;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t2474804324;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t1634065389;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "AssemblyU2DCSharp_Facebook_MiniJSON_Json_Parser_TOKE80003545.h"

// System.Void Facebook.MiniJSON.Json/Parser::.ctor(System.String)
extern "C"  void Parser__ctor_m914662870 (Parser_t2383423551 * __this, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_PeekChar()
extern "C"  uint16_t Parser_get_PeekChar_m943437300 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Facebook.MiniJSON.Json/Parser::get_NextChar()
extern "C"  uint16_t Parser_get_NextChar_m3782688140 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::get_NextWord()
extern "C"  String_t* Parser_get_NextWord_m3465328827 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Facebook.MiniJSON.Json/Parser/TOKEN Facebook.MiniJSON.Json/Parser::get_NextToken()
extern "C"  int32_t Parser_get_NextToken_m2174324081 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::Parse(System.String)
extern "C"  Object_t * Parser_Parse_m1850119056 (Object_t * __this /* static, unused */, String_t* ___jsonString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::Dispose()
extern "C"  void Parser_Dispose_m2464997865 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.Object> Facebook.MiniJSON.Json/Parser::ParseObject()
extern "C"  Dictionary_2_t2474804324 * Parser_ParseObject_m8440312 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Object> Facebook.MiniJSON.Json/Parser::ParseArray()
extern "C"  List_1_t1634065389 * Parser_ParseArray_m199953599 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseValue()
extern "C"  Object_t * Parser_ParseValue_m260572417 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseByToken(Facebook.MiniJSON.Json/Parser/TOKEN)
extern "C"  Object_t * Parser_ParseByToken_m950389239 (Parser_t2383423551 * __this, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Facebook.MiniJSON.Json/Parser::ParseString()
extern "C"  String_t* Parser_ParseString_m826501201 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Facebook.MiniJSON.Json/Parser::ParseNumber()
extern "C"  Object_t * Parser_ParseNumber_m3306554651 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.MiniJSON.Json/Parser::EatWhitespace()
extern "C"  void Parser_EatWhitespace_m2371829631 (Parser_t2383423551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
