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
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
};
