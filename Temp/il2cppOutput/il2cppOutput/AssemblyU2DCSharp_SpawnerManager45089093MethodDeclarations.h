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

// SpawnerManager
struct SpawnerManager_t45089093;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_GameObject4012695102.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void SpawnerManager::.ctor()
extern "C"  void SpawnerManager__ctor_m2325899510 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::OnEnable()
extern "C"  void SpawnerManager_OnEnable_m2236494544 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::OnDisable()
extern "C"  void SpawnerManager_OnDisable_m1052791389 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::Start()
extern "C"  void SpawnerManager_Start_m1273037302 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::Update()
extern "C"  void SpawnerManager_Update_m815302871 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayCubeEffect(UnityEngine.GameObject)
extern "C"  void SpawnerManager_PlayCubeEffect_m142571712 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateEffect(UnityEngine.GameObject)
extern "C"  Object_t * SpawnerManager_InstantiateEffect_m3716465887 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayerDiamondEmissive(UnityEngine.GameObject)
extern "C"  void SpawnerManager_PlayerDiamondEmissive_m3751467318 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamondEmissive(UnityEngine.GameObject)
extern "C"  Object_t * SpawnerManager_InstantiateDiamondEmissive_m3132308367 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayExplodeBall(UnityEngine.GameObject)
extern "C"  void SpawnerManager_PlayExplodeBall_m2334700920 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateBallExplode(UnityEngine.GameObject)
extern "C"  Object_t * SpawnerManager_InstantiateBallExplode_m2685458982 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::PlayDiamondBreaking(UnityEngine.GameObject)
extern "C"  void SpawnerManager_PlayDiamondBreaking_m3939813999 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamondBreaking(UnityEngine.GameObject)
extern "C"  Object_t * SpawnerManager_InstantiateDiamondBreaking_m325807035 (SpawnerManager_t45089093 * __this, GameObject_t4012695102 * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SpawnerManager::StartSpawnCube()
extern "C"  void SpawnerManager_StartSpawnCube_m4152759772 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::targetPosition()
extern "C"  Vector3_t3525329789  SpawnerManager_targetPosition_m75385346 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos_m1260455560 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::diamondPos2()
extern "C"  Vector3_t3525329789  SpawnerManager_diamondPos2_m419426316 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::ballPos()
extern "C"  Vector3_t3525329789  SpawnerManager_ballPos_m1551588303 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SpawnerManager::camPos()
extern "C"  Vector3_t3525329789  SpawnerManager_camPos_m1519462509 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::randomFixedY()
extern "C"  int32_t SpawnerManager_randomFixedY_m2696925700 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SpawnerManager::randonDegree()
extern "C"  float SpawnerManager_randonDegree_m2571470058 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateCube()
extern "C"  Object_t * SpawnerManager_InstantiateCube_m2329272203 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateDiamond()
extern "C"  Object_t * SpawnerManager_InstantiateDiamond_m19475872 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator SpawnerManager::InstantiateBall()
extern "C"  Object_t * SpawnerManager_InstantiateBall_m2282477269 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SpawnerManager::RandomSpawnNum()
extern "C"  int32_t SpawnerManager_RandomSpawnNum_m654313418 (SpawnerManager_t45089093 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
