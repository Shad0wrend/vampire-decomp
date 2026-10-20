// CWeaponPhysCannon: the physics cannon weapon (derived from CBaseCombatWeapon).
#pragma once
#include "CBaseCombatWeapon.h"

class CWeaponPhysCannon : public CBaseCombatWeapon
{
public:
	virtual void vfunc291();
	virtual void vfunc319();	// slot 319: refreshes the owner's unarmed weapon handle (+0xea4) and forwards to slot 456 of the owner
};
