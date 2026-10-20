// CWeaponGravityGun: gravity gun weapon (derived from CBaseCombatWeapon at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseCombatWeapon.h"

class CWeaponGravityGun : public CBaseCombatWeapon
{
public:
	virtual char vfunc316(int a);	// sub_1014d110, then the base implementation; returns true
	virtual void *vfunc285();	// the entity of the held-object handle at +0x918 when it resolves, else sub_1014a1b0()

	void sub_1014d110();
	void *sub_1014a1b0();
};
