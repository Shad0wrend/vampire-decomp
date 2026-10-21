// CHL2_Player: the HL2 player entity (derived from CBasePlayer at +0x0).
// Slots 0..439 are placeholders that keep the slot indices; the named ones
// from 440 on are the ones decompiled code uses.
#pragma once

#include "CUnknown1012cf10.h"

#define CHL2_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define CHL2_V100(p) CHL2_V10(p##0) CHL2_V10(p##1) CHL2_V10(p##2) CHL2_V10(p##3) CHL2_V10(p##4) CHL2_V10(p##5) CHL2_V10(p##6) CHL2_V10(p##7) CHL2_V10(p##8) CHL2_V10(p##9)

// Stand-in for the real CBasePlayer base (not modelled here, see CBasePlayer.h): a base whose
// constructor is the CBasePlayer constructor, so CHL2_Player's constructor calls it first.
// It owns the vptr at +0 (slot 0 is declared here, CHL2_Player overrides it).
struct CHL2_PlayerBase
{
	CHL2_PlayerBase();
	virtual void pa00();
};

// The member at +0x2464, constructed by CUnknown1012cf10::sub_1012cf10.
struct CHL2_PlayerMember2464 : public CUnknown1012cf10
{
	CHL2_PlayerMember2464() { sub_1012cf10(); }
};

class CHL2_Player : public CHL2_PlayerBase
{
public:
	CHL2_Player();

	CHL2_V100(pa)	// slots 0..99
	virtual void pb00(); virtual void pb01(); virtual void pb02();	// slots 100..102
	virtual void vfunc103();	// slot 103 "CHL2_Player::Spawn": clears the byte at +0x2544, slot 408 / 407 around the flag tests of CUnknown1015ef20 (bit 5 of +0x19c follows them), the player base (sub_1016d260), then CBasePlayer::vfunc103 when slot 406 says so
	virtual void pb04(); virtual void pb05(); virtual void pb06(); virtual void pb07(); virtual void pb08(); virtual void pb09();	// slots 104..109
	CHL2_V10(pb1) CHL2_V10(pb2) CHL2_V10(pb3) CHL2_V10(pb4) CHL2_V10(pb5) CHL2_V10(pb6) CHL2_V10(pb7) CHL2_V10(pb8) CHL2_V10(pb9)	// slots 110..199
	CHL2_V100(pc)	// slots 200..299
	CHL2_V10(pd0) CHL2_V10(pd1) CHL2_V10(pd2) CHL2_V10(pd3) CHL2_V10(pd4) CHL2_V10(pd5) CHL2_V10(pd6)	// slots 300..369
	virtual void pd70(); virtual void pd71(); virtual void pd72(); virtual void pd73();	// slots 370..373
	virtual int vfunc374(int count, int ammoIndex, int unused);	// slot 374 "CHL2_Player::GiveAmmo": remembers whether the active weapon (which answers sub_10253b40(0)) has no ammo of the type, gives the ammo through the base, and when it had none and the game rules (slot 20) agree switches to the next best weapon
	virtual void pd75(); virtual void pd76(); virtual void pd77(); virtual void pd78(); virtual void pd79();	// slots 375..379
	CHL2_V10(pd8) CHL2_V10(pd9)	// slots 380..399
	virtual void pe00(); virtual void pe01(); virtual void pe02(); virtual void pe03(); virtual void pe04(); virtual void pe05();	// slots 400..405
	virtual bool vfunc406();	// slot 406: answers whether the base spawn continues (see vfunc103)
	virtual void vfunc407(); virtual void vfunc408();	// slots 407 / 408
	virtual void pe09();	// slot 409
	CHL2_V10(pe1) CHL2_V10(pe2) CHL2_V10(pe3)	// slots 410..439
	virtual void vfunc440(); virtual void vfunc441(); virtual void vfunc442(); virtual void vfunc443(); virtual void vfunc444();
	virtual int vfunc445(); virtual void vfunc446(); virtual void vfunc447(); virtual void vfunc448(); virtual void vfunc449();
	virtual void vfunc450(); virtual void vfunc451(); virtual void vfunc452();
	virtual CBaseEntity *vfunc453();	// "GetPlayerSpawnSpot"-like: picks the next info_player_coop / info_player_start entity after the last spawn (global 0x107260ac), else the entity named like the map; warns when none
	virtual void vfunc454();
	virtual void vfunc455(); virtual void vfunc456(); virtual void vfunc457(); virtual void vfunc458(); virtual void vfunc459();
	virtual void vfunc460(); virtual void vfunc461(); virtual void vfunc462(); virtual void vfunc463(); virtual void vfunc464();
	virtual void vfunc465(); virtual void vfunc466(); virtual void vfunc467(); virtual void vfunc468(); virtual void vfunc469();
	virtual void vfunc470(); virtual void vfunc471();
	virtual void vfunc472();
	virtual bool vfunc473(float value);
	virtual void vfunc474(float value);
	virtual void vfunc475(int value);
	virtual void vfunc476(); virtual void vfunc477(); virtual void vfunc478();
	virtual bool vfunc479();
	virtual float vfunc480();
	virtual float vfunc481();

	char m_pad0004[0x2460];	// 0x0004 .. 0x2463
	CHL2_PlayerMember2464 m_u2464;
	char m_pad2468[0xC0];	// 0x2468 .. 0x2527
	int m_n2528;
	int m_n252c;
	float m_f2530;
	CHL2_Player *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_100140f1();	// as in CPhysForce (transplant)
	void sub_1016d260();	// the player base's slot 103 (stub 0x10002f9f), called directly
	bool sub_1015ef80();	// stub 0x100157a3, called directly by Spawn
	void *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int sub_103346c0(int ammoIndex);	// CBaseCombatCharacter::GetAmmoCount (stub 0x1000ff97), called directly
	int sub_10334180(int count, int ammoIndex, int unused);	// CBaseCombatCharacter::GiveAmmo by index (slot 374 of the base, stub 0x10009543), called directly
	char sub_10334860(void *pCurrent);	// CBaseCombatCharacter::SwitchToNextBestWeapon (stub 0x100138d6), called directly
};
