// CWeaponMelee_FireAxe: declared by pcdecomp transplant for 0x103eccc0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponMelee_FireAxe
{
public:
	char m_pad0000[0x871];
	char m_b871;
	void sub_100047be();	// CBaseCombatWeapon::vfunc103 (stub), called directly
	void vfunc103();
	CWeaponMelee_FireAxe *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc298(int a, int b);	// slot 298: the owner's values at +0x4fec0 / +0x4fed0 are handed to a's sub_100091a6 when a is set, then the base's slot 298 (stub 0x100131ec) runs with (a, b)
	void vfunc300();	// slot 300: clears the bits of the owner's +0x4fed0 value from the dword at +0xe38 of the weapon's sub_10252240 record (when there is one), then CBaseCombatWeapon::vfunc300 (stub 0x10005b69)
public:
	int vfunc80();
	int vfunc81();
	int vfunc362();
	int vfunc363();
	char m_pad0872[0x910 - 0x872];
};
