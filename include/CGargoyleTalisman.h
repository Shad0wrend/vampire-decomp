// CGargoyleTalisman: declared by pcdecomp transplant for 0x1040a0c0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CGargoyleTalisman
{
public:
	CGargoyleTalisman *vfunc5(unsigned int flags);
	void sub_10013a57();
	void vfunc298(void *pChar, int nValue);	// slot 298: when the character is set, its sub_10322800 gets the owner's value at +0x4fed0 (the owner of this's sub_102517b0 and its handle at +0x4fec0); then CBaseCombatWeapon::vfunc298(pChar, nValue)
	void vfunc300();	// slot 300: clears the owner's bits at +0xe38 (the value at +0x4fed0 of sub_10010ea6) of the character from sub_10252240, then CBaseCombatWeapon::vfunc300
};
