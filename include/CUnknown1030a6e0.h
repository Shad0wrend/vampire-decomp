// CUnknown1030a6e0: object with a list of 0x18-byte records (position, two ints, entity handle) at +0x3c
// (memory at +0x3c, allocation count +0x40, grow size +0x44, size +0x48, elements pointer +0x4c); real name not yet known.
#pragma once

#include "CUnknown1030b2f0.h"
#include "CBaseEntity.h"

struct Rec1030a6e0
{
	float x, y, z;
	int a;
	int b;
	unsigned int hEnt;
};

class CUnknown1030a6e0
{
public:
	char pad0[0x3c];
	CUnknown1030b2f0 m_Memory;	// +0x3c: pointer, allocation count, grow size
	int m_Size;	// +0x48
	Rec1030a6e0 *m_pElements;	// +0x4c

	void sub_1030a6e0(const float *pos, int a, CBaseEntity *pEnt, int b);	// appends a record {*pos, a, b, handle of pEnt (-1 for null)} to the list (AddToTail inlined)
};
