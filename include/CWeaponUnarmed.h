// CWeaponUnarmed: declared by pcdecomp transplant for 0x103f5430 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
// Real bases (RTTI): CWeaponIGeneric > CBaseCombatWeapon > CBaseAnimating > CBaseToggle > CBaseEntity; modelled as a
// CBaseEntity subclass. For the CBaseCombatWeapon members and slots (owner getter sub_102521f0, the time at +0x730,
// slots 319 / 321 ...) cast `this`: `((CBaseCombatWeapon *)this)->sub_102521f0()`.
#pragma once
#include "CBaseEntity.h"

class CWeaponUnarmed : public CBaseEntity
{
public:
	CWeaponUnarmed *vfunc5(unsigned int flags);
	void sub_10013a57();
	CWeaponUnarmed *sub_103f53f0();	// as in CKeepUpright (transplant)
	void vfunc319();	// slot 319 (plain member, the slot itself is a placeholder of CBaseCombatWeapon): "wield the fists / claws": with the owner player (sub_102521f0 -> +0xa8, a CBasePlayer) whose flag word at +0x2088 has bit 0 and while the time at +0x730 has not passed curtime: move type (slot 94) 10 sends the view message sub_101cebc0(player, 0x4c, 0) and stops; else the item is the player's carried weapon named like the entity of the handle at +0xea4 / +0xea8 (strcmpi of the classnames), or the first carried one of {"item_w_fists", "item_w_claws", "item_w_claws_protean4", "item_w_claws_protean5"} (sub_10335950); player slot 388(item, 0) true -> item slot 319. Without bit 0 of the flags: this slot 321
public:
    virtual int vfunc81();
    virtual int vfunc80();
	int vfunc360();	// slot 360 (plain member; the model derives from CBaseEntity): returns 0
	void *sub_103f52f0();
	int sub_103f5310();
};
