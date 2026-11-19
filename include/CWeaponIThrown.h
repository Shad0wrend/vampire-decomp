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

class CWeaponIThrown : public CBaseCombatWeapon
{
public:
	CWeaponIThrown();
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_10013a57();
	virtual int vfunc328();	// slot 328: returns 0xb9 + 1 when the pointer at +0x86c is set, else 0xb9
	virtual datamap_t *vfunc82();	// slot 82
	char pad_0898[0x910 - 0x898];	// (m_i778 at 0x778 and m_p86c at 0x86c are CBaseCombatWeapon's)
	CWeaponIThrownPair m_pair910;	// 0x910 / 0x914
	char m_b918;	// 0x918
	virtual void vfunc372() = 0;	// slot 372: _purecall in the game's CWeaponIThrown vtable
	virtual void vfunc373() = 0;	// slot 373: _purecall in the game's CWeaponIThrown vtable
	virtual void vfunc374();	// slot 374: flips the state at +0x86c
	virtual unsigned int vfunc360();	// slot 360: the weapon's type flags (0x2000)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc319();	// slot 319 (0x103ed1e0): a tail call of CBaseCombatWeapon::vfunc319
};
