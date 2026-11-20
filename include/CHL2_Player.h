// CHL2_Player : CBasePlayer (the game's RTTI; vtable 0x104a271c, 486 slots; its data starts at 0x2460): the HL2
// player entity. Below slot 469 it declares only its own overrides, each with the signature its base gives the
// slot; its new slots 469..485 follow.
#pragma once

struct datamap_t;

#include "CUnknown1012cf10.h"
#include "Vector.h"
#include "CBasePlayer.h"

struct CTakeDamageInfo;

#include "MvsnSec1.h"

// The member at +0x2464, constructed by CUnknown1012cf10::sub_1012cf10.
struct CHL2_PlayerMember2464 : public CUnknown1012cf10
{
	CHL2_PlayerMember2464() { sub_1012cf10(); }
};

class CHL2_Player : public CBasePlayer
{
public:
	CHL2_Player();

	// Its own slots below 469 (the base declares every slot). The plain members of the slot's signature override
	// by themselves: 104, 138, 372 and 373.
	virtual CBaseEntity *vfunc5(unsigned int flags);	// returns this (as CPhysForce's)
	virtual float vfunc28(); virtual float vfunc29(); virtual float vfunc30();	// slots 28..30
	virtual void vfunc31(int pDump);	// slot 31 "Dump": dumps the suit power fields, then the player base's Dump
	virtual int vfunc80(); virtual int vfunc81(); virtual datamap_t *vfunc82();	// slots 80..82
	virtual char vfunc86(int a, int b, int c, int d, int e);
	virtual void vfunc103();	// slot 103 "CHL2_Player::Spawn": clears the byte at +0x2544, slot 408 / 407 around the flag tests of CUnknown1015ef20 (bit 5 of +0x19c follows them), the player base (sub_1016d260), then CBasePlayer::sub_1015efa0 when slot 406 says so
	virtual int vfunc142(void *pInfo);	// slot 142 "OnTakeDamage" (the damage info, const CTakeDamageInfo *): a damage above zero (the CVDmg_t's GetDmg when the record has one, else the plain damage at +0x30) stamps the time at +0x253c and punches the view by a random angle scaled by the damage (and a convar), then the player base
	virtual void vfunc144(void *pArg);
	virtual void vfunc175(CBaseEntity *pEnt);	// slot 175: flags the byte at +0x2128 when pEnt (not the slot 209 entity) is a type 7 / 6 entity whose object at +0x36c answers slot 1 false
	virtual int vfunc196(int a);	// the slot's signature; the function is the plain Vector vfunc196() below
	virtual void vfunc333(int unused);	// slot 333: the camera offset: (the second vector of the viewpoint query) * 300.0f + the first one, kept at +0xe44 and copied to +0xe50, then slot 277(+0xe50)
	virtual bool vfunc366(int, int, int);
	virtual Vector vfunc370();	// the slot's signature; the function is the plain int sub_1034fd90(int) below
	virtual Vector vfunc371();	// slot 371: the forward direction of the angle (+0xe60, slot 367's y + +0xe5c, 0)
	virtual int vfunc374(int count, int ammoIndex, int unused);	// slot 374 "CHL2_Player::GiveAmmo": remembers whether the active weapon (which answers sub_10253b40(0)) has no ammo of the type, gives the ammo through the base, and when it had none and the game rules (slot 20) agree switches to the next best weapon
	virtual void vfunc430(unsigned char *pvs, int a);	// the slot's signature; the function is the plain vfunc430(int, int) below
	virtual void vfunc436();	// slot 436 "CHL2_Player::Think"-like per-frame update: the vehicle branch, the sv_walkscale / sv_runscale / sv_sneakscale max speed (sub_10350620 per speed table), then the base think steps (slots 416, 472, 444, 470 / 471 / 484), the duck / stuck trace and use-entity check
	virtual void vfunc451(int);
	virtual CBaseEntity *vfunc453();	// "GetPlayerSpawnSpot"-like: picks the next info_player_coop / info_player_start entity after the last spawn (global 0x107260ac), else the entity named like the map; warns when none
	virtual void vfunc462(CUserCmd *pCmd, void *pExtra);	// slot 462 "CHL2_Player::PlayerRunCommand"-like: the button state of the command (+0x34) goes to the player base, a live entity in the handle at +0x1db0 clears the command (or only its three movement floats while the byte at +0x1edc is set), then the two sprint-like meters (+0x2534 / +0x2538, each 0..4) charge or drain by the command's time (+0x10) depending on whether it moves; the command goes on to the player base
	virtual void vfunc468();
	// its new slots 469..485
	virtual void vfunc469(Vector *pTarget, float flTime);
	virtual void vfunc470(); virtual void vfunc471();
	virtual void vfunc472();
	virtual bool vfunc473(float value);
	virtual void vfunc474(float value);
	virtual void vfunc475(int value);
	virtual int vfunc476();
	virtual void vfunc477(unsigned int *pPower);	// slot 477 "SUIT POWER TRIED TO ADD A DUPLICATE DEVICE": sets the power's flag bits in +0x252c (pPower[0]) and adds its amount (the float at pPower[1]) to +0x2530
	virtual void vfunc478(unsigned int *pPower);	// slot 478 "SUIT POWER TRIED TO REMOVE AN INACTIVE DEVICE": clears the power's flag bits in +0x252c (pPower[0]) and takes its amount (the float at pPower[1]) off +0x2530
	virtual int vfunc479();	// 0x1034f3f0: 1 while m_n252c is 0 and the float at +0x2464 is under 100, else 0 (an int: mov eax,1); callers test only al (0x103528d0)
	virtual float vfunc480();
	virtual float vfunc481();
	virtual float vfunc482();
	virtual int vfunc483();
	virtual void vfunc484();
	virtual bool vfunc485(int);

	Vector vfunc196();	// slot 196 (plain; the slot's signature is the int vfunc196(int) above): the camera position record of the viewed entity (+0x5ec) when that entity qualifies, else the base's
	int sub_1034fd90(int a);	// slot 370 (called through the vtable): stores the forward y (slot 367's y + +0xe5c) through sub_1000ecd2(a, y) and answers a
	void vfunc430(int a, int b);	// slot 430 (plain; the slot's signature is declared above)
	int vfunc138();	// slot 138: the dword at +0x2460, or 1 when it is 0
	int vfunc372(int a);	// slot 372: vtable slot 370 with the argument, then the argument
	int vfunc373(int a);	// slot 373: vtable slot 371 with the argument, then the argument
	void vfunc104();	// slot 104 (0x10350600): a tail call of CBasePlayer::vfunc104
	Vector sub_100b4c00();	// CBaseEntity::vfunc196, called directly (stub 0x1000a961)
	void sub_10350620(int nActivity, float *pForward, float *pSide, float *pMaxSpeed, float flScale);	// stub 0x1000c8ab (ret 20): fills one speed table from the model's movement data of the activity, raising *pMaxSpeed
	void sub_1009ba60(int a, char *text, int value);	// CBaseEntity::sub_1009ba60 (stub 0x1000d454), called directly
	void sub_1009b980(int a, char *text, int value);	// CBaseEntity::DumpInt (stub 0x1000b776), called directly
	void sub_1015e140(int pDump);	// CBasePlayer::vfunc31 (stub 0x10001555), called directly
	void sub_10014eb6(float *pFirst, float *pSecond);	// CBaseCombatCharacter::sub_10014eb6 (viewpoint query, stub 0x10014eb6), called directly by slot 333
	void sub_101668b0();	// 0x101668b0: the death/ragdoll state machine called by vfunc436 (no stack args)
	int sub_100b3700();
	void sub_100b2e30(const Vector *pVel);
	char sub_10170fe0();	// 0x10170fe0 (this in ecx, no args): the state test called by sub_101668b0
	void sub_100140f1();	// as in CPhysForce (transplant)
	void sub_10163af0(int a);	// CBasePlayer::vfunc144 (stub 0x1000aea2), called directly
	void sub_103373e0();	// stub 0x100084d1, called directly by vfunc144
	void sub_1016d260();	// the player base's slot 103 (stub 0x10002f9f), called directly
	bool sub_1015ef80();	// stub 0x100157a3, called directly by Spawn
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int sub_103346c0(int ammoIndex);	// CBaseCombatCharacter::GetAmmoCount (stub 0x1000ff97), called directly
	int sub_10334180(int count, int ammoIndex, int unused);	// CBaseCombatCharacter::GiveAmmo by index (slot 374 of the base, stub 0x10009543), called directly
	char sub_10334860(void *pCurrent);	// CBaseCombatCharacter::SwitchToNextBestWeapon (stub 0x100138d6), called directly
	int sub_10163020(const CTakeDamageInfo *pInfo);	// CBasePlayer::vfunc142 (stub 0x10014425), called directly
	void sub_10166cc0();	// 0x10166cc0 (this in ecx, no args): the death follow-up called by sub_101668b0

	int m_nControlClass;	// 0x2460
	CHL2_PlayerMember2464 m_u2464;	// 0x2464
	Vector m_vecMissPositions[16];	// 0x2468 .. 0x2527
	int m_n2528;
	int m_n252c;
	float m_f2530;
	float m_flIdleTime;	// 0x2534
	float m_flMoveTime;	// 0x2538
	float m_flLastDamageTime;	// 0x253c: when the player last took damage
	float m_flTargetFindTime;	// 0x2540
	bool m_bForceWalk;	// 0x2544
	char m_pad2545[0x2548 - 0x2545];
};
