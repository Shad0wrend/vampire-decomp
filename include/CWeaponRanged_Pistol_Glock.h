// CWeaponRanged_Pistol_Glock: declared by pcdecomp transplant for 0x1023a3b0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponRanged.h"

class CWeaponRanged_Pistol_Glock : public CWeaponRanged
{
public:
	CWeaponRanged *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	int vfunc80();
	int vfunc81();
	int vfunc362();
	int vfunc363();
	char m_pad0004[0x91c - 0x4];
};
