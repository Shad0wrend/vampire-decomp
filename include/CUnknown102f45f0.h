// CUnknown102f45f0: owner of a ring cache of 20 nearest-node lookups (0x18-byte entries from +8, next slot at +0x1e8);
// real name not yet known.
#pragma once

#include "Vector.h"

struct NearestNodeCache_t
{
	Vector m_vecPos;	// 0x00
	float m_flTime;	// 0x0c
	int m_nNode;	// 0x10
	int m_nField14;	// 0x14
};

class CUnknown102f45f0
{
public:
	char pad0[8];
	NearestNodeCache_t m_cache[20];	// 0x08
	int m_nNextCache;	// 0x1e8

	void sub_102f45f0(const Vector *pPos, int node, int field);	// "AI NearestNode Cache is full" check, then stores the lookup in the ring
};
