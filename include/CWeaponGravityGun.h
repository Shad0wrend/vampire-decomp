// CWeaponGravityGun: gravity gun weapon (derived from CBaseCombatWeapon at +0x0). Only what the matched functions need.
#pragma once

#include "CBaseCombatWeapon.h"
#include "CGravControllerPoint.h"
#include "ehandle.h"

class CWeaponGravityGun : public CBaseCombatWeapon
{
public:
	virtual char vfunc316(int a);	// sub_1014d110, then the base implementation; returns true
	virtual void *vfunc285();	// the entity of the held-object handle at +0x918 when it resolves, else sub_1014a1b0()
	virtual void vfunc319();	// picks one of slots 321 / 325 / 326 / 327 from the owner's player object flags (+0x208c, +0x2088)
	virtual float vfunc278();	// the pull strength of the held object (handle at +0x918): the owner's stat 0x1a divided by the physics object's mass (slot 12), -1.0f without a held object

	virtual void vfunc326();
	virtual void vfunc103();	// slot 103: slot 104 (Precache), then slot 105 with slot 343's result, clears the bytes at +0x914 and +0xb25
	virtual void vfunc104();	// slot 104 (Precache): base slot 104, the sounds at 0x1057b8a0 and the six physgun loop sounds at 0x1057b888, then the model of \"hud/PhysicsHand_Closed.vmt\" into the global at 0x1071a36c
	void sub_1014d110();
	void sub_1014a0b0();
	void sub_1014abe0();
	void sub_1014c0f0();
	void sub_1014c2d0();
	void *sub_1014a1b0();
	void sub_1014c130();	// \"StopLoopingSounds\": when the weapon has an owner, stops the physgun loop sound of the owner's entity for the current state at +0x928 (state 0: loop2; state 1: loop2, loop1, loop3 and loop4)

	char m_pad898[0x8b4 - 0x898];
	char m_b8b4;	// 0x8b4
	char m_pad8b5[0x910 - 0x8b5];
	int m_n910;
	char m_b914;	// 0x914
	char m_pad915[0x918 - 0x915];
	unsigned int m_hHeld918;	// 0x918
	char m_pad91c[0x928 - 0x91c];
	int m_nSoundState;	// 0x928
	char m_pad92c[0xb25 - 0x92c];
	char m_bB25;	// 0xb25
public:
	virtual void vfunc298(CBaseEntity *pOwner, int unused);	// slot 298: forwards to CBaseCombatWeapon::vfunc298 (jump stub 0x100131ec) with the first argument as it is
};
