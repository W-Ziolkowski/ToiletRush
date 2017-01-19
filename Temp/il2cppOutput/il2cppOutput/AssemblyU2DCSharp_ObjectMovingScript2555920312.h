#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObjectMovingScript
struct  ObjectMovingScript_t2555920312  : public MonoBehaviour_t667441552
{
public:
	// System.Single ObjectMovingScript::speed
	float ___speed_2;
	// System.Single ObjectMovingScript::step
	float ___step_3;
	// UnityEngine.Vector3 ObjectMovingScript::target
	Vector3_t4282066566  ___target_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ObjectMovingScript_t2555920312, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_step_3() { return static_cast<int32_t>(offsetof(ObjectMovingScript_t2555920312, ___step_3)); }
	inline float get_step_3() const { return ___step_3; }
	inline float* get_address_of_step_3() { return &___step_3; }
	inline void set_step_3(float value)
	{
		___step_3 = value;
	}

	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(ObjectMovingScript_t2555920312, ___target_4)); }
	inline Vector3_t4282066566  get_target_4() const { return ___target_4; }
	inline Vector3_t4282066566 * get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Vector3_t4282066566  value)
	{
		___target_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
