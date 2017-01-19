#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnScrpit
struct  SpawnScrpit_t3961104756  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject SpawnScrpit::obj
	GameObject_t3674682005 * ___obj_2;
	// UnityEngine.Vector3 SpawnScrpit::target
	Vector3_t4282066566  ___target_3;

public:
	inline static int32_t get_offset_of_obj_2() { return static_cast<int32_t>(offsetof(SpawnScrpit_t3961104756, ___obj_2)); }
	inline GameObject_t3674682005 * get_obj_2() const { return ___obj_2; }
	inline GameObject_t3674682005 ** get_address_of_obj_2() { return &___obj_2; }
	inline void set_obj_2(GameObject_t3674682005 * value)
	{
		___obj_2 = value;
		Il2CppCodeGenWriteBarrier(&___obj_2, value);
	}

	inline static int32_t get_offset_of_target_3() { return static_cast<int32_t>(offsetof(SpawnScrpit_t3961104756, ___target_3)); }
	inline Vector3_t4282066566  get_target_3() const { return ___target_3; }
	inline Vector3_t4282066566 * get_address_of_target_3() { return &___target_3; }
	inline void set_target_3(Vector3_t4282066566  value)
	{
		___target_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
