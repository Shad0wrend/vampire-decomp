// CWeaponMelee_MingXiaoMelee: Ming Xiao's melee weapon (base CWeaponMelee).
// The vtable slots are *not* modelled here.
#pragma once

#include "CWeaponMelee_TzimisceMelee.h"

class CWeaponMelee_MingXiaoMelee : public CWeaponMelee
{
public:
	void vfunc370(CWeaponMeleeEvent *pEvent, int b);	// slot 370: ignores event type 0xbbb, else the base handler
	CWeaponMelee_MingXiaoMelee *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
};
