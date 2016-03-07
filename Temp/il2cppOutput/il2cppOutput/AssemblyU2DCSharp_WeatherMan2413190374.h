#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t514686775;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

// WeatherMan
struct  WeatherMan_t2413190374  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject WeatherMan::rainToInstantiate
	GameObject_t4012695102 * ___rainToInstantiate_2;
	// UnityEngine.GameObject WeatherMan::snowToInstantiate
	GameObject_t4012695102 * ___snowToInstantiate_3;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeatherMan::rainList
	List_1_t514686775 * ___rainList_4;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> WeatherMan::snowList
	List_1_t514686775 * ___snowList_5;
	// System.Int32 WeatherMan::amount
	int32_t ___amount_6;
};
