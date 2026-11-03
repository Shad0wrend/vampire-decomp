// CGargoyleTalisman: declared by pcdecomp transplant for 0x1040a0c0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGargoyleTalisman
{
public:
	CGargoyleTalisman *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc298(int a, int b);	// slot 298: when the character is set, its sub_10322800 gets the owner's value at +0x4fed0 (the owner of this's sub_102517b0 and its handle at +0x4fec0); then CBaseCombatWeapon::vfunc298(pChar, nValue)
	void vfunc300();	// slot 300: clears the bits of the character (sub_10252240) that are set in the owner's value at +0x4fed0 (sub_10010ea6), then CBaseCombatWeapon::vfunc300 (sub_10005b69)
	char *sub_10252240();	// CAI_BaseNPCTroika::sub_10252240 (0x100011f4), called on this: the character or 0
	char *sub_10010ea6();	// the owner object of this (0x10010ea6)
	void sub_10005b69();	// CBaseCombatWeapon::vfunc300 (stub 0x10005b69), called directly
public:
	int vfunc80();
	int vfunc81();
	char m_pad0000[0x914 - 0x0];
};
