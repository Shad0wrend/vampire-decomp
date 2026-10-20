// CWeaponMelee (RTTI .?AVCWeaponMelee@@): melee weapon base (CBaseCombatWeapon -> CBaseAnimating -> CBaseToggle -> CBaseEntity).
// Declared flat: only the members decompiled code needs, as plain members.
#pragma once

class CWeaponMelee
{
public:
	bool vfunc315();	// when the weapon has an owner: plays the swing, picks a sound name by the owner state (slots 272 / 273), and queries the animation (slots 342, 343, 344)
	void *sub_100011f4();	// the weapon's owner (CAI_BaseNPCTroika::sub_10252240 stub)
	char sub_1000c37e(int a);	// helper taking the result of slot 342 (stub)
};
