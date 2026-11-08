// Stand-in for the CBaseAnimating part of CBaseCombatWeapon, only so that the weapon constructor calls the base constructor (stub 0x100103fc).
#pragma once

struct CWeaponAnimBase
{
	CWeaponAnimBase();
	virtual void vfunc0();
};
