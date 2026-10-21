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
	virtual void vfunc103();	// slot 103 "CHL2_Player::Spawn": the player base (sub_1016d260) and CBasePlayer::vfunc103 around a switch of slot 406 / 407 / 408 on the CUnknown1015ef20 flag tests; flag bit 5 at +0x19c follows the same test
	virtual void pb04(); virtual void pb05(); virtual void pb06(); virtual void pb07(); virtual void pb08(); virtual void pb09();	// slots 104..109
	CHL2_V10(pb1) CHL2_V10(pb2) CHL2_V10(pb3) CHL2_V10(pb4) CHL2_V10(pb5) CHL2_V10(pb6) CHL2_V10(pb7) CHL2_V10(pb8) CHL2_V10(pb9)	// slots 110..199
	CHL2_V100(pc) CHL2_V100(pd)	// slots 200..399
	CHL2_V10(pe0) CHL2_V10(pe1) CHL2_V10(pe2) CHL2_V10(pe3)	// slots 400..439
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
};
