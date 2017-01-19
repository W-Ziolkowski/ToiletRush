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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MovePlayer
struct  MovePlayer_t319209010  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 MovePlayer::playerPosition
	int32_t ___playerPosition_6;
	// UnityEngine.GameObject MovePlayer::player
	GameObject_t3674682005 * ___player_7;

public:
	inline static int32_t get_offset_of_playerPosition_6() { return static_cast<int32_t>(offsetof(MovePlayer_t319209010, ___playerPosition_6)); }
	inline int32_t get_playerPosition_6() const { return ___playerPosition_6; }
	inline int32_t* get_address_of_playerPosition_6() { return &___playerPosition_6; }
	inline void set_playerPosition_6(int32_t value)
	{
		___playerPosition_6 = value;
	}

	inline static int32_t get_offset_of_player_7() { return static_cast<int32_t>(offsetof(MovePlayer_t319209010, ___player_7)); }
	inline GameObject_t3674682005 * get_player_7() const { return ___player_7; }
	inline GameObject_t3674682005 ** get_address_of_player_7() { return &___player_7; }
	inline void set_player_7(GameObject_t3674682005 * value)
	{
		___player_7 = value;
		Il2CppCodeGenWriteBarrier(&___player_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
