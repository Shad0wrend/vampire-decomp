// CWeaponMelee_Tzimisce3Claw: declared by pcdecomp transplant for 0x103ecff0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponMelee_Tzimisce3Claw
{
public:
	char m_pad0000[0x871];
	char m_b871;
	void sub_100047be();	// CBaseCombatWeapon::vfunc103 (stub), called directly
	void vfunc103();
	CWeaponMelee_Tzimisce3Claw *vfunc5(unsigned int flags);
	void sub_10013a57();
	char vfunc372(int a, int b, int c);	// slot 372 (plain member): the swing activity 0x4b becomes 0x4e while the owner's info block at +0x94 has its byte +0x5f2c clear
	void *sub_102521f0();	// the weapon's owner (CBaseCombatWeapon::sub_102521f0)
public:
	int vfunc80();
	int vfunc81();
	int vfunc362();
	int vfunc363();
	int vfunc373();
};
