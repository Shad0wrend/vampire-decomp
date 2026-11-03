// CWeaponIThrown: declared by pcdecomp transplant for 0x103ed180 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "datamap.h"

#include "CWeaponRanged.h"

struct CWeaponIThrownPair
{
	int m_i910;
	int m_i914;
	CWeaponIThrownPair() : m_i910(-1), m_i914(-1) {}
};

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
	CWeaponIThrownPair m_pair910;	// 0x910 / 0x914
	char m_b918;	// 0x918
	void vfunc374();	// slot 374: flips the state at +0x86c
	virtual unsigned int vfunc360();	// slot 360: the weapon's type flags (0x2000)
};
