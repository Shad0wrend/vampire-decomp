// CWeaponIThrown: declared by pcdecomp transplant for 0x103ed180 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CWeaponIThrown
{
public:
	CWeaponIThrown *vfunc5(unsigned int flags);
	void sub_10013a57();
	int vfunc328();	// slot 328: returns 0xb9 + 1 when the pointer at +0x86c is set, else 0xb9
	char pad_0000[0x86c];
	void *m_p86c;
};
