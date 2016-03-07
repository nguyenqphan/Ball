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
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// SpawnerManager
struct  SpawnerManager_t45089093  : public MonoBehaviour_t3012272455
{
	// UnityEngine.GameObject SpawnerManager::cubeToInstantiate
	GameObject_t4012695102 * ___cubeToInstantiate_2;
	// UnityEngine.GameObject SpawnerManager::cubeParticle
	GameObject_t4012695102 * ___cubeParticle_3;
	// UnityEngine.GameObject SpawnerManager::diamond
	GameObject_t4012695102 * ___diamond_4;
	// UnityEngine.GameObject SpawnerManager::diaEmissive
	GameObject_t4012695102 * ___diaEmissive_5;
	// UnityEngine.GameObject SpawnerManager::diaBreaking
	GameObject_t4012695102 * ___diaBreaking_6;
	// UnityEngine.GameObject SpawnerManager::ball
	GameObject_t4012695102 * ___ball_7;
	// UnityEngine.GameObject SpawnerManager::ballExplode
	GameObject_t4012695102 * ___ballExplode_8;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::cubeList
	List_1_t514686775 * ___cubeList_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::particleList
	List_1_t514686775 * ___particleList_10;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diamondList
	List_1_t514686775 * ___diamondList_11;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaEmissiveList
	List_1_t514686775 * ___diaEmissiveList_12;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::diaBreakingList
	List_1_t514686775 * ___diaBreakingList_13;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballList
	List_1_t514686775 * ___ballList_14;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> SpawnerManager::ballExplodeList
	List_1_t514686775 * ___ballExplodeList_15;
	// System.Int32 SpawnerManager::pooledAmount
	int32_t ___pooledAmount_16;
	// System.Int32 SpawnerManager::ballAmount
	int32_t ___ballAmount_17;
	// System.Int32 SpawnerManager::diamondAmount
	int32_t ___diamondAmount_18;
	// System.Int32 SpawnerManager::indexSwitch
	int32_t ___indexSwitch_19;
	// UnityEngine.Vector3 SpawnerManager::leftOffset
	Vector3_t3525329789  ___leftOffset_20;
	// UnityEngine.Vector3 SpawnerManager::rightOeffet
	Vector3_t3525329789  ___rightOeffet_21;
	// UnityEngine.Vector3 SpawnerManager::position
	Vector3_t3525329789  ___position_22;
	// System.Single SpawnerManager::fixedY
	float ___fixedY_23;
	// System.Single SpawnerManager::fixedX
	float ___fixedX_24;
	// System.Single SpawnerManager::wait
	float ___wait_25;
	// System.Single SpawnerManager::spawnTime
	float ___spawnTime_26;
	// System.Single SpawnerManager::speedTime
	float ___speedTime_27;
	// System.Boolean SpawnerManager::firstSpawn
	bool ___firstSpawn_28;
	// System.Int32 SpawnerManager::spawnNumber
	int32_t ___spawnNumber_29;
	// System.Int32 SpawnerManager::ballNumber
	int32_t ___ballNumber_30;
};
