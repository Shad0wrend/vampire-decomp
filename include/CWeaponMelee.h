// CWeaponMelee (RTTI .?AVCWeaponMelee@@): melee weapon base (CBaseCombatWeapon -> CBaseAnimating -> CBaseToggle -> CBaseEntity).
// Only the members decompiled code needs; CBaseCombatWeapon is modelled flat (without CBaseAnimating).
#pragma once

#include "CBaseCombatWeapon.h"

class CWeaponMelee : public CBaseCombatWeapon
{
public:
	bool vfunc315();	// when the weapon has an owner: plays the swing, picks a sound name by the owner state (slots 272 / 273), and queries the animation (slots 342, 343, 344)
	void vfunc370(int *event, CBaseCombatWeapon *other);	// animation events: 0xbb9 / 0xbd6..0xbe7 run slot 326 unless other has its dword at +0xa8 set, 0xfa1 / 0xfa2 set a bodygroup from the event's string, the rest go to the base class
	void *sub_100011f4();	// the weapon's owner (CAI_BaseNPCTroika::sub_10252240 stub)
	char sub_1000c37e(int a);	// helper taking the result of slot 342 (stub)
	void sub_10093b10(int group, int value);	// CBaseAnimating::SetBodygroup, called directly (stub 0x10001bb8)
};
