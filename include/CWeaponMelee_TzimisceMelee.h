// CWeaponMelee_TzimisceMelee: the Tzimisce melee weapon (base CWeaponMelee, CWeaponMelee.h).
#pragma once

#include "CWeaponMelee.h"

class CWeaponMelee_TzimisceMelee : public CWeaponMelee
{
public:
	CWeaponMelee_TzimisceMelee();
	virtual int vfunc81();	// slot 81 override: returns 0

	int m_n08b8;
	int m_n08bc;
	float m_f08c0;
	float m_f08c4;
	char m_pad08c8[0x910 - 0x8c8];
	int m_n0910;
	int vfunc367(int a, float b, float c);	// slot 367: its own (0x103e8ad0)
	void vfunc370(int *event, CBaseCombatWeapon *other);	// slot 370: its own (0x103e8be0)
	void vfunc269(CBaseCombatWeapon *pOther, Vector vecDir);	// slot 269: its own (0x103e8cd0)
	CBaseEntity *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
	void sub_103e8c90();	// 0x103e8c90: like sub_103e8c50 with the flag 2
	void sub_103e8c50();	// 0x103e8c50: sets the flag at +0x910, calls the swing slot 372 (0x4b, 1, 0) and clears the flag again
public:
    virtual CWeaponActivityRecord * vfunc362();
    virtual int vfunc363();
public:
	virtual int vfunc373();
	virtual int vfunc80();	// slot 80: the class's datamap
};
