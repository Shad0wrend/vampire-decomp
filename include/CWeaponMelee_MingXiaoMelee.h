// CWeaponMelee_MingXiaoMelee: Ming Xiao's melee weapon (base CWeaponMelee).
// The vtable slots are *not* modelled here.
#pragma once

#include "CWeaponMelee_TzimisceMelee.h"

class CWeaponMelee_MingXiaoMelee : public CWeaponMelee
{
public:
	CWeaponMelee_MingXiaoMelee();	// constructor (0x103ec2b0): the base constructor, vtable, the float fields 500.0f
	virtual int vfunc81();	// slot 81 override: returns 0
	int vfunc367(int a, float b, float c);	// slot 367: its own (0x103ec350)
	virtual void vfunc370(int *event, CBaseCombatWeapon *other);	// slot 370: ignores event type 0xbbb (a CWeaponMeleeEvent), else the base handler
	void vfunc269(CBaseCombatWeapon *pOther, Vector vecDir);	// slot 269: its own (0x103ec490), pushes pOther along -vecDir scaled by the mathlib value while the state at +0x910 is 1 or 2
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns

	int m_n08b8;
	int m_n08bc;
	float m_f08c0;
	float m_f08c4;
	char m_pad08c8[0x910 - 0x8c8];
	int m_n0910;
public:
    virtual CWeaponActivityRecord * vfunc362();
    virtual int vfunc363();
public:
	virtual int vfunc373();
};
