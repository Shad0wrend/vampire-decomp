// CWeaponRanged_Rifle_SuperShotgun: declared by pcdecomp transplant for 0x1023a4d0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponRanged.h"

class CWeaponRanged_Rifle_SuperShotgun : public CWeaponRanged
{
public:
	CBaseEntity *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	int vfunc80();
	int vfunc81();
	CWeaponActivityRecord *vfunc362();
	int vfunc363();
	char m_pad898[0x91c - 0x898];
};
