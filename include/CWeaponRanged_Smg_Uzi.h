// CWeaponRanged_Smg_Uzi: declared by pcdecomp transplant for 0x1023a500 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponRanged.h"

class CWeaponRanged_Smg_Uzi : public CWeaponRanged
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
