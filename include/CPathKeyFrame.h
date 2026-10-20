// CPathKeyFrame: declared by pcdecomp transplant for 0x10140f00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

#include "Vector.h"

class CPathKeyFrame
{
public:
	CPathKeyFrame *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103: caches the absolute origin (slot 220) at +0x450 and the absolute angles (slot 221) at +0x45c, then hands the angles to sub_10140270
	void sub_10140270(Vector angles);

	char m_pad0004[0x450 - 4];
	Vector m_vOrigin;	// 0x450
	Vector m_vAngles;	// 0x45c
};
