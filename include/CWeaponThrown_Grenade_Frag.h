// CWeaponThrown_Grenade_Frag: thrown frag grenade weapon.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (266). Give the class its
// real base before making a virtual call through it.
#pragma once

class CWeaponThrown_Grenade_Frag
{
public:
	virtual void vfunc266();
	char pad_04[0x918 - 4];
	bool m_bFlag918;
	CWeaponThrown_Grenade_Frag *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
	bool vfunc325();	// slot 325 (declared as a plain member, the slots are not modelled here): with a live owner that still has ammo of the roll's ammo type, clears the field at +0x920, tells the owner (slot 449 with 0xe, 0), plays slot 307(0xc2), stamps the time at +0x730 and starts slot 333(10, 1, 0, 0, 0, 0); false without
	void *sub_102521f0();	// CBaseCombatWeapon member (stub 0x10014fab): the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	int *sub_102517e0();	// CBaseCombatWeapon member (stub 0x10003d91): the weapon's current roll slot record
};
