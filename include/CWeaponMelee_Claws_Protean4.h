// CWeaponMelee_Claws_Protean4: declared by pcdecomp transplant for 0x103ecc00 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CWeaponMelee.h"

class CWeaponMelee_Claws_Protean4 : public CWeaponMelee
{
public:
	CBaseEntity *vfunc5(unsigned int flags);
	void sub_10013a57();
public:
	int vfunc80();
	int vfunc81();
	CWeaponActivityRecord *vfunc362();
	int vfunc363();
	int vfunc373();
	char m_pad08b8[0x910 - 0x8b8];
};
