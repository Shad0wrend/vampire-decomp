// CWeaponIThrown: declared by pcdecomp transplant for 0x103ed180 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CWeaponRanged.h"

class CWeaponIThrown : public CWeaponRangedBase
{
public:
	CWeaponIThrown();
	CWeaponIThrown *vfunc5(unsigned int flags);
	void sub_10013a57();
	int vfunc328();	// slot 328: returns 0xb9 + 1 when the pointer at +0x86c is set, else 0xb9
	datamap_t *vfunc82();	// slot 82
	char pad_0004[0x778 - 4];
	int m_i778;	// 0x778
	char pad_077c[0x86c - 0x77c];
	void *m_p86c;	// 0x86c
	char pad_0870[0x910 - 0x870];
	int m_i910;	// 0x910: -1 when the weapon has no entry
	int m_i914;	// 0x914: -1 when the weapon has no entry
	char m_b918;	// 0x918
	virtual unsigned int vfunc360();	// slot 360: the weapon's type flags (0x2000)
};
