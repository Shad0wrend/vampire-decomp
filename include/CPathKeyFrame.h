// CPathKeyFrame: declared by pcdecomp transplant for 0x10140f00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (the vtable pointer at +0 is not modelled).
#pragma once

#include "Vector.h"

class CPathKeyFrame
{
public:
	CPathKeyFrame *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103: caches the absolute origin (slot 220) at +0x450 and the absolute angles (slot 221) at +0x45c, then hands the angles to sub_10140270
	void sub_10140270(Vector angles);
	CPathKeyFrame *sub_10140330(Vector vecOrigin, Vector vecAngles);	// "CPathKeyFrame::InsertNewKeyFrame": creates a "keyframe_track" entity (warning when it is of the wrong class), gives it the angles and origin, this key frame's name, parent and +0x488 value, and links it into the key frame chain (+0x480 / +0x484) right behind this one; returns it

	char m_pad0000[0x450];
	Vector m_vOrigin;	// 0x450
	Vector m_vAngles;	// 0x45c
};
