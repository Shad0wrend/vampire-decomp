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
	virtual char vfunc267();
	CBaseCombatWeapon *vfunc5(unsigned int flags);	// slot 5 override: the game's 0x10149fc0 (scalar deleting destructor)
	unsigned int vfunc117();	// slot 117 override: the game's 0x10149f50
	void vfunc300();	// slot 300 override: the game's 0x10149f30
	void vfunc327();	// slot 327 override: the game's 0x1014e160
	virtual void vfunc321();	// slot 321 (0x1014e180, plain this-call, no arguments): when slot 309 holds: slot 307(0xb6); with a held object (handle m_hHeld918 resolving, m_n910 set, m_bB24 set) and the entity of the handle m_slots9d8[m_hB1c].a: the physics object of the weapon owner side (CUnknown100290c0::sub_100290c0 on EHandleEntityList *g_10566458 with entity+0x25c, its +0x36c, the default g_10723938 when absent) and that of the held entity (+0x36c) are handed to sub_1014e3f0(objA, objB, &params[0x30 bytes]) (cdecl) and to slot 14 of the physics environment g_10723940 (objA, objB, 0, &params) -> a controller stored at held->+0x730 whose slot 3 gets the held entity; both entities' colour bytes +0x1a0/+0x1a1/+0x1a2 = 0x40/0x40/0x80 and the byte +0x734 = 1; m_flTimes730[0] = curtime + 0.75 (a double constant); then (also without a held object) sub_1014d110() and sub_1014c130() = StopLoopingSounds (stub 0x10013c14 -> 0x1014c110 ... see the asm)
	virtual void vfunc103();	// slot 103: slot 104 (Precache), then slot 105 with slot 343's result, clears the bytes at +0x914 and +0xb25
	virtual void vfunc104();	// slot 104 (Precache): base slot 104, the sounds at 0x1057b8a0 and the six physgun loop sounds at 0x1057b888, then the model of \"hud/PhysicsHand_Closed.vmt\" into the global at 0x1071a36c
	void sub_1014d110();
	void sub_1014a0b0();
	void sub_1014abe0();
	void sub_1014c0f0();
	void sub_1014c2d0();
	void *sub_1014a1b0();
	void sub_1014dd50();	// 0x1014dd50: physics object throw handler: with a live held object (m_hHeld918) and a live owner, scales the throw speed by the mass ratio, applies it to the held object's physics velocity and reports the CSActs criminal act (m_nB28 > 0) through sub_1017e150
	void sub_1014d140();	// 0x1014d140 "CWeaponGravityGun::ReleaseHeldObject"-like: drops the held object (m_hHeld918), detaches the CGravControllerPoint at +0x93c, reports the drop / momentum throw criminal act, clears the held handle
	float sub_1014c680(float a, float b, float c, float d);	// free cdecl 4-arg float remap used by sub_1014c2d0 (0x1014c680)
	void sub_1014c130();	// \"StopLoopingSounds\": when the weapon has an owner, stops the physgun loop sound of the owner's entity for the current state at +0x928 (state 0: loop2; state 1: loop2, loop1, loop3 and loop4)

	CWeaponGravityGun();
	char m_pad898[0x8b4 - 0x898];
	char m_b8b4;	// 0x8b4
	char m_pad8b5[0x910 - 0x8b5];
	int m_n910;
	char m_b914;	// 0x914
	char m_pad915[0x918 - 0x915];
	EHANDLE m_hHeld918;	// 0x918
	char m_pad91c[0x920 - 0x91c];
	float m_fl920;	// 0x920: a distance parameter (remapped through sub_1014c680 with 0 / 200 / 1)
	char m_pad924[0x928 - 0x924];
	int m_nSoundState;	// 0x928
	char m_pad92c[0x938 - 0x92c];
	float m_fl938;	// 0x938: the vertical offset of the held object (subtracted from its origin z)
	CGravControllerPoint m_controller93c;	// 0x93c
	char m_pad9d0[0x9d8 - 0x93c - sizeof(CGravControllerPoint)];
	struct CSlot9d8 { int pad; EHANDLE a; EHANDLE b; int pad2[2]; } m_slots9d8[16];	// 0x9d8: two handles per entry
	int m_hB18;	// 0xb18
	int m_hB1c;	// 0xb1c
	char m_padb20[0xb24 - 0xb20];
	char m_bB24;	// 0xb24: set while the beam to the held object exists (vfunc321 needs it)
	char m_bB25;	// 0xb25
	char m_padB26[0xb28 - 0xb26];
	int m_nB28;	// 0xb28: the criminal-act priority of a physics throw (the CSActs notice runs only when > 0)
public:
	void vfunc298(CBaseEntity *pOwner, float unused);	// slot 298: forwards to CBaseCombatWeapon::vfunc298 (jump stub 0x100131ec) with the first argument as it is
};
