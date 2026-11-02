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
	virtual bool vfunc282();	// slot 282 override: returns false (CBaseCombatWeapon::vfunc282 is a boolean slot)
	bool vfunc283(CBaseEntity *pTarget);	// slot 283: its own (0x103ea6d0), true when pTarget answers slot 158, the weapon has an owner other than pTarget and the owner's centre (slot 192) is within the melee range of pTarget's
	bool vfunc315();	// when the weapon has an owner: plays the swing, picks a sound name by the owner state (slots 272 / 273), and queries the animation (slots 342, 343, 344)
	void vfunc319();	// slot 319: its own (0x103eaec0), runs slot 326 when the owner's player object has flag bit 0 and the time at +0x730 has passed, else slot 321
	void vfunc326();	// slot 326: its own (0x103eaca0): picks the swing activity (0x4b, 0x4c or 0x53) and tries it through slot 372 in a few ways, then tells the owner's player (slot 429) when one of them worked
	void vfunc327();	// slot 327: its own (0x103eae00)
	void vfunc339();	// slot 339: kicks the owner player's view with a random (x, y) punch from the weapon's roll record (+0x384..+0x398), scaled down by the owner's stat 1 of its type 0 list
	void vfunc367(int a, int b, int c);	// forwards to sub_103ea7e0 with the constant 0x4b
	int vfunc368(int a, int b, int c);	// slot 368: the swing's result code, sub_100131fb(0x4e, a, b, c) mapped to 0x52 when it is 0x51, else 0x100 (stub 0x103eac60, its own)
	void vfunc370(int *event, CBaseCombatWeapon *other);	// animation events: 0xbb9 / 0xbd6..0xbe7 run slot 326 unless other has its dword at +0xa8 set, 0xfa1 / 0xfa2 set a bodygroup from the event's string, the rest go to the base class
	virtual char vfunc372(int a, int b, int c);	// slot 372 (stub 0x100148e9): starts the swing activity a; the first slot beyond CBaseCombatWeapon's 372
	void *sub_100011f4();	// the weapon's owner (CAI_BaseNPCTroika::sub_10252240 stub)
	char sub_1000c37e(int a, int b, int c, int d);	// CBaseCombatWeapon::sub_10253b70 (stub): the results of slots 342 / 343, 0xb4 and the result of slot 344
	void sub_10093b10(int group, int value);	// CBaseAnimating::SetBodygroup, called directly (stub 0x10001bb8)
	void sub_103ea5b0(CWeaponMeleeEvent *pEvent, int b);	// slot 370 (vfunc370) as CWeaponMelee_MingXiaoMelee calls it
	void sub_103ea7e0(int kind, int a, int b, int c);
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// as in CPhysForce (transplant); VC6 has no covariant returns
	char sub_10411160(CBaseEntity *pTarget, char bFlag);	// a melee weapon subclass member: false without a target, one that lacks bit 1 of its sub_100b39c0 flags, or the target the owner's object at +0xa8 already holds (its slot 209); else hands the target and a damage-scale float (0 / the owner's tuning value, unless bFlag) to sub_1016a660; targets in collision group 9 are refused when sub_1040d930 holds
	virtual int vfunc373();	// slot 373: 6	// a melee weapon subclass member: false without a target, one that lacks bit 1 of its sub_100b39c0 flags, or the target the owner's object at +0xa8 already holds (its slot 209); else hands the target and a damage-scale float (0 / the owner's tuning value, unless bFlag) to sub_1016a660; targets in collision group 9 are refused when sub_1040d930 holds

	char m_pad0898[0x8b8 - 0x898];
};
