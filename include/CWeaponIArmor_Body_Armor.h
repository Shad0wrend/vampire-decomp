// CWeaponIArmor_Body_Armor: declared by pcdecomp transplant for 0x103f4280 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponIArmor.h"

class CWeaponIArmor_Body_Armor : public CWeaponIArmor
{
public:
	CBaseCombatWeapon *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	void *vfunc80();
	int vfunc81();
	char m_pad0898[0x910 - 0x898];
};
