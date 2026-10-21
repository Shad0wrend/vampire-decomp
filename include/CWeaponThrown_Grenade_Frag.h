// CWeaponThrown_Grenade_Frag: thrown frag grenade weapon.
// Declared standalone for now: the vtable slots are *not* modelled here, so the
// position of the virtual below is not its real slot (266). Give the class its
// real base before making a virtual call through it.
#pragma once

#include "Vector.h"

class CBaseEntity;

class CWeaponThrown_Grenade_Frag
{
public:
	virtual void vfunc266();
	char pad_04[0x918 - 4];
	bool m_bFlag918;
	CWeaponThrown_Grenade_Frag *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_10013a57();	// as in CPhysForce (transplant)
	bool vfunc325();	// slot 325 (declared as a plain member, the slots are not modelled here): with a live owner that still has ammo of the roll's ammo type, clears the field at +0x920, tells the owner (slot 449 with 0xe, 0), plays slot 307(0xc2), stamps the time at +0x730 and starts slot 333(10, 1, 0, 0, 0, 0); false without
	CBaseEntity *vfunc372(Vector vecOrigin, Vector vecAngles, Vector vecVelocity, Vector angVelocity);	// slot 372 "CWeaponThrown_Grenade_Frag::CreateGrenade" (plain member): creates the projectile entity named by the string at +0x11c at vecOrigin, makes it damageable with health 1, gives it a physics object (VPhysicsInitNormal(2), "No physics data for grenade" and removal on failure), sets its velocity unless the byte at +0x930 is set, starts its think function and schedules its first think after the timer at +0x91c; returns it
	void *sub_102521f0();	// CBaseCombatWeapon member (stub 0x10014fab): the dword at +0x9c of the entity the owner handle at +0x88c resolves to (0 when stale)
	int *sub_102517e0();	// CBaseCombatWeapon member (stub 0x10003d91): the weapon's current roll slot record
};
