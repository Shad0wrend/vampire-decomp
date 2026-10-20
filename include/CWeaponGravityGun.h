// CWeaponGravityGun: gravity gun weapon (derived from CBaseCombatWeapon at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseCombatWeapon.h"

class CWeaponGravityGun : public CBaseCombatWeapon
{
public:
	virtual char vfunc316(int a);	// sub_1014d110, then the base implementation; returns true
	virtual void *vfunc285();	// the entity of the held-object handle at +0x918 when it resolves, else sub_1014a1b0()
	virtual void vfunc319();	// picks one of slots 321 / 325 / 326 / 327 from the owner's player object flags (+0x208c, +0x2088)
	virtual float vfunc278();	// the pull strength of the held object (handle at +0x918): the owner's stat 0x1a divided by the physics object's mass (slot 12), -1.0f without a held object

	void sub_1014d110();
	void *sub_1014a1b0();
	void sub_1014c130();	// \"StopLoopingSounds\": when the weapon has an owner, stops the physgun loop sound of the owner's entity for the current state at +0x928 (state 0: loop2; state 1: loop2, loop1, loop3 and loop4)

	char m_pad898[0x928 - 0x898];
	int m_nSoundState;	// 0x928
};
