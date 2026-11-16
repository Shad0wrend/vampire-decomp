// CUnknown108c1288.h: the 0xec84 byte elements of the global array 0x108c1288 (3 of them): a CVDmg_t head the
// implicit constructor and destructor build and destroy, then plain data. Only the initializer units see it.
#pragma once
#ifdef PCD_INITIALIZERS
#include "CVDmg_t.h"
struct CUnknown108c1288
{
	CVDmg_t m_dmg;	// 0x00
	char m_pad0044[0xec84 - 0x44];
};
#endif
