// CWeaponHolyLight: declared by pcdecomp transplant for 0x103f2a40 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponHolyLight
{
public:
	CWeaponHolyLight *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc326();	// slot 326 (declared as a plain member): with the weapon's owner and a positive level of the owner's stat list of type 3 for the stat at +0x910, stamps every kindred character around the owner with curtime + level ^ 1.43 at +0x13d4 (when later than the stamp it has), then CDisciplineWeapon::vfunc326
public:
	int vfunc285();
	int vfunc362();
	int vfunc363();
	char m_pad0000[0x914 - 0x0];
};
