// CUnknown1030a6e0: object with a list of 0x18-byte records (position, two ints, entity handle) at +0x3c
// (memory at +0x3c, allocation count +0x40, grow size +0x44, size +0x48, elements pointer +0x4c); real name not yet known.
// It belongs to an NPC (pointer at +4).
#pragma once

#include "CUnknown1030b2f0.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct Vec3_1030a6e0
{
	float x, y, z;
};

struct Rec1030a6e0
{
	float x, y, z;
	int a;
	int b;
	unsigned int hEnt;

	void Init(Vec3_1030a6e0 v, int a_, int b_, unsigned int h)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		a = a_;
		b = b_;
		hEnt = h;
	}
};

struct RecVec1030a6e0
{
	CUnknown1030b2f0 m_Memory;	// pointer, allocation count, grow size
	int m_Size;
	Rec1030a6e0 *m_pElements;

	void AddRec(Vec3_1030a6e0 v, int a, int b, unsigned int h)
	{
		int elem = m_Size;
		if (elem + 1 > m_Memory.m_nAllocationCount)
			m_Memory.sub_1030b2f0(elem + 1 - m_Memory.m_nAllocationCount);
		m_Size++;
		m_pElements = (Rec1030a6e0 *)m_Memory.m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove((Rec1030a6e0 *)m_Memory.m_pMemory + elem + 1, (Rec1030a6e0 *)m_Memory.m_pMemory + elem, numToMove * sizeof(Rec1030a6e0));
		Rec1030a6e0 *p = (Rec1030a6e0 *)m_Memory.m_pMemory + elem;
		if (p)
			p->Init(v, a, b, h);
	}
};

class CUnknown1030a6e0
{
public:
	char pad0[4];
	CAI_BaseNPC *m_pOuter;	// 0x04
	char pad8[0x3c - 8];
	RecVec1030a6e0 m_List;	// +0x3c

	void sub_1030a6e0(const float *pos, int a, CBaseEntity *pEnt, int b);	// appends a record {*pos, a, b, handle of pEnt (-1 for null)} to the list (AddToTail inlined)
	void sub_10309e80(const Vector *pDirA, const Vector *pDirB);	// debug draw: with bit 26 of the NPC's flags (+0x224) set, draws a white line from slot 192 of the NPC along pDirA (length 20) and a yellow one along pDirB, each for 0.1 s
	void sub_10309f60(const Vector *pPos, float flUnused, Vector *pOut);	// direction from the NPC's origin to pPos, with the vertical part pushed away from a flat result
};
