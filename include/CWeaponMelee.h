// CWeaponMelee (RTTI .?AVCWeaponMelee@@): melee weapon base (CBaseCombatWeapon -> CBaseAnimating -> CBaseToggle -> CBaseEntity).
// Only the members decompiled code needs; CBaseCombatWeapon is modelled flat (without CBaseAnimating). The one
// definition of the class: CWeaponMelee_TzimisceMelee.h and the other melee weapons include this header.
#pragma once

#include "CBaseCombatWeapon.h"

struct CWeaponMeleeEvent
{
	int m_type;
};

class CWeaponMelee : public CBaseCombatWeapon
{
public:
	CWeaponMelee();
	bool vfunc315();	// when the weapon has an owner: plays the swing, picks a sound name by the owner state (slots 272 / 273), and queries the animation (slots 342, 343, 344)
	void vfunc367(int a, int b, int c);	// forwards to sub_103ea7e0 with the constant 0x4b
	void vfunc370(int *event, CBaseCombatWeapon *other);	// animation events: 0xbb9 / 0xbd6..0xbe7 run slot 326 unless other has its dword at +0xa8 set, 0xfa1 / 0xfa2 set a bodygroup from the event's string, the rest go to the base class
	void *sub_100011f4();	// the weapon's owner (CAI_BaseNPCTroika::sub_10252240 stub)
	char sub_1000c37e(int a);	// helper taking the result of slot 342 (stub)
	void sub_10093b10(int group, int value);	// CBaseAnimating::SetBodygroup, called directly (stub 0x10001bb8)
	void sub_103ea5b0(CWeaponMeleeEvent *pEvent, int b);	// slot 370 (vfunc370) as CWeaponMelee_MingXiaoMelee calls it
	void sub_103ea7e0(int kind, int a, int b, int c);
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns

	char m_pad0898[0x8b8 - 0x898];
};
