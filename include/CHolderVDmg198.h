// CHolderVDmg198: a 0xec84 byte record that embeds a CVDmg_t at +0x198 (real name not yet known).
// Its constructor (0x1025b390) only constructs the CVDmg_t; it is the element constructor the compiler hands to the
// vector-constructor helper for the arrays of it inside the big tree nodes.
#pragma once

#include "CVDmg_t.h"

class CHolderVDmg198
{
public:
	char m_pad0000[0x198];
	CVDmg_t m_Dmg;	// 0x198
	char m_pad01dc[0xec84 - 0x198 - sizeof(CVDmg_t)];

	CHolderVDmg198();	// the constructor at 0x1025b390
};
