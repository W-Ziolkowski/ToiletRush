#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Material
struct Material_t3870600107;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerBoxColor
struct  PlayerBoxColor_t1862009465  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.Color PlayerBoxColor::ObjectColor
	Color_t4194546905  ___ObjectColor_2;
	// UnityEngine.Color PlayerBoxColor::currentColor
	Color_t4194546905  ___currentColor_3;
	// UnityEngine.Material PlayerBoxColor::materialColored
	Material_t3870600107 * ___materialColored_4;

public:
	inline static int32_t get_offset_of_ObjectColor_2() { return static_cast<int32_t>(offsetof(PlayerBoxColor_t1862009465, ___ObjectColor_2)); }
	inline Color_t4194546905  get_ObjectColor_2() const { return ___ObjectColor_2; }
	inline Color_t4194546905 * get_address_of_ObjectColor_2() { return &___ObjectColor_2; }
	inline void set_ObjectColor_2(Color_t4194546905  value)
	{
		___ObjectColor_2 = value;
	}

	inline static int32_t get_offset_of_currentColor_3() { return static_cast<int32_t>(offsetof(PlayerBoxColor_t1862009465, ___currentColor_3)); }
	inline Color_t4194546905  get_currentColor_3() const { return ___currentColor_3; }
	inline Color_t4194546905 * get_address_of_currentColor_3() { return &___currentColor_3; }
	inline void set_currentColor_3(Color_t4194546905  value)
	{
		___currentColor_3 = value;
	}

	inline static int32_t get_offset_of_materialColored_4() { return static_cast<int32_t>(offsetof(PlayerBoxColor_t1862009465, ___materialColored_4)); }
	inline Material_t3870600107 * get_materialColored_4() const { return ___materialColored_4; }
	inline Material_t3870600107 ** get_address_of_materialColored_4() { return &___materialColored_4; }
	inline void set_materialColored_4(Material_t3870600107 * value)
	{
		___materialColored_4 = value;
		Il2CppCodeGenWriteBarrier(&___materialColored_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
