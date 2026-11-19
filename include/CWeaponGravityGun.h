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
	CBaseEntity *vfunc5(unsigned int flags);	// slot 5 override: the game's 0x10149fc0 (scalar deleting destructor)
	int vfunc117();	// slot 117 override: the game's 0x10149f50
	void vfunc300();	// slot 300 override: the game's 0x10149f30
	void vfunc327();	// slot 327 override: the game's 0x1014e160
	virtual void vfunc321();	// slot 321 (0x1014e180, plain this-call, no arguments): when slot 309 holds: slot 307(0xb6); with a held object (handle m_hHeld918 resolving, m_n910 set, m_bB24 set) and the entity of the handle m_slots9d0[m_hB1c].m_hA: the physics object of the weapon owner side (CUnknown100290c0::sub_100290c0 on EHandleEntityList *g_10566458 with entity+0x25c, its +0x36c, the default g_10723938 when absent) and that of the held entity (+0x36c) are handed to sub_1014e3f0(objA, objB, &params[0x30 bytes]) (cdecl) and to slot 14 of the physics environment g_10723940 (objA, objB, 0, &params) -> a controller stored at held->+0x730 whose slot 3 gets the held entity; both entities' colour bytes +0x1a0/+0x1a1/+0x1a2 = 0x40/0x40/0x80 and the byte +0x734 = 1; m_flTimes730[0] = curtime + 0.75 (a double constant); then (also without a held object) sub_1014d110() and sub_1014c130() = StopLoopingSounds (stub 0x10013c14 -> 0x1014c110 ... see the asm)
	virtual void vfunc103();	// slot 103: slot 104 (Precache), then slot 105 with slot 343's result, clears the bytes at +0x914 and +0xb25
	virtual void vfunc104();	// slot 104 (Precache): base slot 104, the sounds at 0x1057b8a0 and the six physgun loop sounds at 0x1057b888, then the model of \"hud/PhysicsHand_Closed.vmt\" into the global at 0x1071a36c
	void sub_1014d110();
	void sub_1014a0b0();
	void sub_1014cbf0(float flRadius, CBaseEntity *pHeld);	// 0x1014cbf0 (ret 8): nearest-pair search over the 16 records at m_slots9d0 (outer index < m_nB14, inner index >= outer and < m_nB10); stores the best pair in m_hB18/m_hB1c and curtime in m_flB20, sets m_bB24 when the best squared distance is below 9.0f
	void sub_1014abe0();	// 0x1014abe0 (plain this-call, no arguments, 8-aligned frame): the per-frame update of the held object: traces from the owner's eye along the view (UTIL_TraceLine_Calls form, mask 0x46004003, CTraceFilterSimple(owner, 0)); attaches a new object with sub_1014d7c0 when none is held (slot 285 = the pick entity, owner slot 209 = ground entity check, 0x30 / 0x2f criminal acts through sub_101cebc0), else moves the held object towards the eye point (AngleMatrix sub_10139b90 of the controller's +0x80 angles and of the owner's yaw delta, sub_10138df0 / sub_10137ed0 composing them), grab distance m_fl91c, second trace mask 0x200400b, sub_1014cbf0(stat 0xe-ish radius, held entity), then the controller's origin vectors (+0x94c) and the CBaseEntity::sub_100a1250 / CUnk101c26d0 damage-info push (mask 0x20000000) when button 0x80000 is held; ends with sub_1014d140 (release) when the held object is farther than the squared limit [0x1057b7b8]^2
	void sub_1014d7c0(CBaseEntity *pPick, const Vector *pForward, const Vector *pHitPos, CBaseEntity *pPick2);	// 0x1014d7c0 (stub 0x10012d91, ret 16, todo): attaches pPick (called with the slot 285 entity twice) at the hit position
	void sub_1014c0f0();
	void sub_1014c880(CBaseEntity *pEnt);
	void sub_1014c2b0();
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
	float m_fl91c;	// 0x91c: the grab distance (scaled by 0.1 while button 0x80000 / 0x100000 is held, clamped through sub_1013d400 with 1024.0f / 40.0f)
	float m_fl920;	// 0x920: a distance parameter (remapped through sub_1014c680 with 0 / 200 / 1)
	float m_fl924;	// 0x924: the owner's last view yaw (+0x2070 of the owner), the yaw delta is rotated into the held object's angles
	int m_nSoundState;	// 0x928
	int m_nOwnerEdict92c;	// 0x92c: engine index (slot 35) of the owner's edict (+0x2e0), or of the player behind sub_1015d680(0)
	float m_fl930;	// 0x930: the held object's offset (slot 220's vector of the entity at pickup, x)
	float m_fl934;	// 0x934: (y)
	float m_fl938;	// 0x938: the vertical offset of the held object (subtracted from its origin z)
	CGravControllerPoint m_controller93c;	// 0x93c (0x94 bytes, ends at 0x9d0)
	struct CSlot9d0 { Vector m_vec; EHANDLE m_hA; EHANDLE m_hB; } m_slots9d0[16];	// 0x9d0: 16 * 0x14 records, ends at 0xb10
	int m_nB10;	// 0xb10: count of the inner range
	int m_nB14;	// 0xb14: count of the outer range
	int m_hB18;	// 0xb18: best pair index (inner)
	int m_hB1c;	// 0xb1c: best pair index (outer)
	float m_flB20;	// 0xb20: curtime when the best pair changed
	char m_bB24;	// 0xb24: set while the beam to the held object exists (vfunc321 needs it)
	char m_bB25;	// 0xb25
	char m_padB26[0xb28 - 0xb26];
	int m_nB28;	// 0xb28: the criminal-act priority of a physics throw (the CSActs notice runs only when > 0)
	int m_nB2c;	// 0xb2c: the lift level (stat "Physics_Lift_Supernatural_Value", set in sub_1014d7c0)
	int m_nB30;	// 0xb30: the drag level (stat "Physics_Drag_Supernatural_Value", set in sub_1014d7c0)
	float m_flB34;	// 0xb34: 50000.0f at pickup
public:
	void vfunc298(CBaseEntity *pOwner, float unused);	// slot 298's body (0x10149f10): forwards to CBaseCombatWeapon::vfunc298 (jump stub 0x100131ec) with the first argument as it is; the game copies the second one as a float (mov eax / mov back), so it stays float here
	virtual void vfunc298(CBaseEntity *pOwner, int unused);	// slot 298 with the base slot's signature: the game's 0x10149f10, the float member above (link audit, CWeaponGravityGun)
	virtual char vfunc268();	// slot 268: 0x10149f80 in the game's CWeaponGravityGun vtable, returns true (link audit, CWeaponGravityGun)
	virtual bool vfunc325();	// slot 325: 0x1014e500 in the game's CWeaponGravityGun vtable, returns false (link audit, CWeaponGravityGun)
};
