// CUnknown1030b610: an AI helper that tracks the direction from a position source (the sub-object at +0x24) to a
// target entity (handle at +0x70); real name not yet known.
#pragma once

#include "Vector.h"

class CBaseEntity;

struct CUnknown1030b610_Sub	// the 0x40 byte sub-object at +0x24
{
	char m_pad[0x40];

	float *sub_1031a000();	// stub 0x100118e7: a position (3 floats), null when there is none
};

class CUnknown1030b610
{
public:
	void sub_1030b610(CBaseEntity *pEnt);	// remembers the target's handle (-1 for none) and the normalised direction from the position source to it
	Vector sub_1030b6b0();	// refreshes the direction when the target still resolves, returns it

	char m_pad0000[0x24];
	CUnknown1030b610_Sub m_sub24;	// 0x24
	Vector m_vecDir;	// 0x64
	unsigned int m_hTarget;	// 0x70
};
