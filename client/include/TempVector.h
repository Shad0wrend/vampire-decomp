// Source's AllocTempVector(): a ring of 128 temporary vectors (static array at 0x109f0cc0, guard 0x109f0b80, index 0x106b856c).
#pragma once

#include "Vector.h"

extern int g_102de68c;

inline Vector &AllocTempVector()
{
	static Vector s_vecTemp[128];
	g_102de68c = (g_102de68c + 1) & 0x7f;
	return s_vecTemp[g_102de68c];
}
