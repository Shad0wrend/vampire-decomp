// CRevertSaved: declared by pcdecomp transplant for 0x101844b0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CRevertSaved : public CBaseEntity
{
public:
	CRevertSaved *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc173(int a, int b, int c, int d);	// slot 173 "CRevertSaved::InputReload"-like: fades the screen of every player (colour at +0x1a0, duration +0x45c, hold +0x460, flags 2), then thinks at +0x454 after now

	char m_pad03e0[0x454 - 0x3e0];
	float m_flReload;	// 0x454
	char m_pad0458[4];
	float m_flFadeTime;	// 0x45c
	float m_flFadeHold;	// 0x460
};
