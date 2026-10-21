// CWeaponMelee_TzimisceMelee: the Tzimisce melee weapon (base CWeaponMelee, CWeaponMelee.h).
#pragma once

#include "CWeaponMelee.h"

class CWeaponMelee_TzimisceMelee : public CWeaponMelee
{
public:
	CWeaponMelee_TzimisceMelee();
	virtual void vfunc0();

	int m_n08b8;
	int m_n08bc;
	float m_f08c0;
	float m_f08c4;
	char m_pad08c8[0x910 - 0x8c8];
	int m_n0910;
	int vfunc367(int a, float b, float c);	// slot 367: its own (0x103e8ad0)
	void vfunc370(int *event, CBaseCombatWeapon *other);	// slot 370: its own (0x103e8be0)
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
};
