// UnreachableEnt_t: element of CUtlVector<UnreachableEnt_t> (0x14 bytes). Its constructor (sub_1027fbf0) stores
// -1 (an invalid entity handle) in the first dword; the rest is not recovered yet.
#pragma once

#include "ehandle.h"
#include "Vector.h"

struct UnreachableEnt_t
{
	EHANDLE hUnreachableEnt;	// 0x00
	float fExpireTime;	// 0x04
	Vector vLocationWhenUnreachable;	// 0x08
};
