// CWeaponIWritten: declared by pcdecomp transplant for 0x1040b300 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CWeaponIArmor.h"	// CWeaponIArmorOwner / CWeaponIArmorTarget

class CWeaponIWritten : public CBaseEntity
{
public:
	CWeaponIWritten *vfunc5(unsigned int flags);
	void sub_10013a57();
	CWeaponIWritten *sub_1040b270();	// as in CKeepUpright (transplant)
	void sub_1040b4f0();	// slot 339: kicks the owner's target with a random vector
	CWeaponIArmorOwner *sub_102521f0();	// the weapon's owner (stub 0x10014fab)
};
