// CNPC_VCombatman: declared by pcdecomp transplant for 0x1036fb50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VCombatmanTarget
{
public:
	int sub_100037e2();	// returns a state code (8 = ready)
};

struct CTakeDamageInfo;	// a tail-call override's parameter
struct animevent_t;	// a tail-call override's parameter
class CNPC_VCombatman : public CBaseEntity
{
public:
	void vfunc103();	// slot 103: the 0x200000 condition-mask bit, CNPC_VHuman::vfunc103, then GetModelPtr(-1)
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VCombatman *sub_1036fad0();	// as in CKeepUpright (transplant)
	int vfunc438();	// slot 438 (TranslateSchedule-like): see the body
	int vfunc461();	// slot 461 override: the state field at +0x1b38 = 0xb, then CNPC_VHuman's implementation
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	char sub_1001482b(int a);	// condition test, called with 0x10 / 0x11 / 0x13
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	char m_pad03e0[0x6664 - 0x3e0];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc104();	// slot 104 (0x10370180): a tail call of CNPC_VHuman::vfunc104
	int vfunc440(int);	// slot 440 (0x10370300): a tail call of CNPC_VHuman::vfunc440 (no such slot in this view: plain)
	void vfunc434();	// slot 434 (0x10370360): a tail call of CNPC_VHuman::vfunc434 (no such slot in this view: plain)
	bool vfunc366(int, int, int);	// slot 366 (0x103703a0): a tail call of CNPC_VHuman::vfunc366 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc463(int, int);	// slot 463 (0x103701f0): a tail call of CNPC_VHuman::vfunc463 (no such slot in this view: plain)
	void vfunc259(animevent_t *);	// slot 259 (0x10370210): a tail call of CNPC_VHuman::vfunc259 (no such slot in this view: plain)
	int vfunc390(CTakeDamageInfo *);	// slot 390 (0x10370380): a tail call of CNPC_VHuman::vfunc390 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc144(void *p0);	// slot 144 (0x103703c0): a tail call of CNPC_VHuman::vfunc144 (a base declares another vfunc144: this one hides it)
};
