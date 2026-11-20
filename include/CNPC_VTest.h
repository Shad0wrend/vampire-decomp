// CNPC_VTest: declared by pcdecomp transplant for 0x103b3b60 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

struct CTakeDamageInfo;	// a tail-call override's parameter
struct animevent_t;	// a tail-call override's parameter
class CNPC_VTest : public CBaseEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// slot 103 (plain member): CUnk1026dc00::sub_1026dc00(0x200000), then sub_103c4ef0
	void vfunc104();	// slot 104 "CNPC_VTest::Precache": precaches the test NPC sounds, then CNPC_VHuman::vfunc104
	CNPC_VTest *sub_103b3ae0();	// as in CKeepUpright (transplant)
	int vfunc461();	// slot 461 "SelectIdealState" (plain member): state 2 without a slot 167 object warns "***Combat state with no enemy!" and goes to state 3, a pending condition 0x47 clears it and goes to state 0xb; state 0xb goes back to state 2 on condition 0x54 or 0x46, to state 1 when slot 462 holds; otherwise CNPC_VHuman::vfunc461
	void vfunc490();	// slot 490 "CNPC_VTest::Idle sound" (plain member): when slot 486 allows, emits one of the "character/npc/test/idle" sounds (channel 2, volume 1.0, attenuation 0.8) from the NPC's edict to the players that can hear its position (a PAS attenuation filter built inline)
	void vfunc488();	// slot 488 (plain member): emits one of the 0x10652188 sounds (channel 2, volume 0.5, attenuation 0.8) from the NPC's edict to the players that can hear its position, reliably (a PAS attenuation filter built inline)
	void vfunc489();	// slot 489 (plain member): like vfunc488 with the 0x1065218c sounds (volume 1.0)
	void vfunc491();	// slot 491 (plain member): like vfunc489 with the 0x10652194 sounds, random stream (0, 3), channel 2
	void vfunc492();	// slot 492 (plain member): like vfunc489 with another sound table
	void vfunc493();	// slot 493 (plain member): like vfunc489 with the 0x106521a8 sounds
	void vfunc494();	// slot 494 (plain member): like vfunc489 with another sound table
	void vfunc495();	// slot 495 (plain member): like vfunc489 with the 0x106521b0 sounds
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	virtual void *vfunc580();	// slot 580
	virtual const char *vfunc451();	// slot 451: the class name "CNPC_VTest"
	virtual char vfunc452();	// slot 452
	virtual int vfunc473();	// slot 473: 0x17
	char m_pad03e0[0x6668 - 0x3e0];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	int vfunc440(int);	// slot 440 (0x103b4fd0): a tail call of CNPC_VHuman::vfunc440 (no such slot in this view: plain)
	void vfunc434();	// slot 434 (0x103b51c0): a tail call of CNPC_VHuman::vfunc434 (no such slot in this view: plain)
	bool vfunc366(int, int, int);	// slot 366 (0x103b5200): a tail call of CNPC_VHuman::vfunc366 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc463(int, int);	// slot 463 (0x103b4ef0): a tail call of CNPC_VHuman::vfunc463 (no such slot in this view: plain)
	void vfunc259(animevent_t *);	// slot 259 (0x103b4f10): a tail call of CNPC_VHuman::vfunc259 (no such slot in this view: plain)
	int vfunc390(CTakeDamageInfo *);	// slot 390 (0x103b51e0): a tail call of CNPC_VHuman::vfunc390 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc144(void *p0);	// slot 144 (0x103b5220): a tail call of CNPC_VVampire::vfunc144 (a base declares another vfunc144: this one hides it)
};
