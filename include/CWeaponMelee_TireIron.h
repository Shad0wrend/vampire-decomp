// CWeaponMelee_TireIron: declared by pcdecomp transplant for 0x103ece40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponMelee_TireIron
{
public:
	char m_pad0000[0x871];
	char m_b871;
	void sub_100047be();	// CBaseCombatWeapon::vfunc103 (stub), called directly
	void vfunc103();
	CWeaponMelee_TireIron *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	int vfunc80();
	int vfunc81();
	int vfunc360();
	int vfunc362();
	int vfunc363();
};
