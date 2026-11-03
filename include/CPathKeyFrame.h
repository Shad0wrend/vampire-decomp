// CPathKeyFrame: declared by pcdecomp transplant for 0x10140f00 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (the vtable pointer at +0 is not modelled).
#pragma once

struct datamap_t;

#include "Vector.h"

void sub_1013fdf0(float *pAngles);	// stub 0x10003710 (free, cdecl): normalises a vector of three angles into -180..180

class CPathKeyFrame
{
public:
	CPathKeyFrame *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// slot 103: caches the absolute origin (slot 220) at +0x450 and the absolute angles (slot 221) at +0x45c, then hands the angles to sub_10140270
	void sub_10140270(Vector angles);
	CPathKeyFrame *sub_10140330(Vector vecOrigin, Vector vecAngles);	// "CPathKeyFrame::InsertNewKeyFrame": creates a "keyframe_track" entity (warning when it is of the wrong class), gives it the angles and origin, this key frame's name, parent and +0x488 value, and links it into the key frame chain (+0x480 / +0x484) right behind this one; returns it
	void sub_10140200();	// looks up the key frame named m_pszNextKey (dynamic cast of the entity found by name) into m_pNext and links itself as its m_pPrev
	void sub_10140070();	// "CPathKeyFrame::CalculateNextTime"-like (stub of 0x10140070): with a next key frame and a positive speed (+0x488) the time to reach it (+0x47c) = the distance between the origins / speed, or, for two key frames at the same place, the largest angle difference (whole degrees) / speed
	void vfunc113();	// slot 113: CBaseEntity::vfunc113, sub_10140200(), then sub_10140070()

	char m_pad0000[0x450];
	Vector m_vOrigin;	// 0x450
	Vector m_vAngles;	// 0x45c
	char m_pad0468[0x478 - 0x468];
	const char *m_pszNextKey;	// 0x478: the name of the next key frame
	float m_flNextTime;	// 0x47c
	CPathKeyFrame *m_pNext;	// 0x480
	CPathKeyFrame *m_pPrev;	// 0x484
	float m_flSpeed;	// 0x488
public:
	datamap_t * vfunc82();
};
