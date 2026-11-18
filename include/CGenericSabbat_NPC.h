// CGenericSabbat_NPC: generic Sabbat NPC (derived from CAI_BaseNPC at +0x0).
#pragma once

#include "CAI_BaseNPC.h"

struct CTakeDamageInfo;	// a tail-call override's parameter
struct animevent_t;	// a tail-call override's parameter
class CGenericSabbat_NPC : public CAI_BaseNPC
{
public:
	CGenericSabbat_NPC *vfunc5(int flags);	// slot 5 (plain overload of the base slot; VC6 has no covariant returns): sub_1000c9cd (destructor body), then sub_100aa7b0(this) when flags & 1; returns this
	virtual void vfunc103();	// Spawn: slot 104 (Precache), SetModel from slot 9, clears +0x1568 / +0x156c, sub_10273070(0), SetSolid(2) (inlined scope trace), move type (4, 0), +0x1570 = 0xf7, flags +0x19c = 0, health from the global at 0x1093a36c, +0x1574 = 0.2f, +0x5cc0 = 0, sub_1026dc00(1) and (0x800000), then slot 420
	virtual void vfunc104();	// Precache
	virtual void vfunc144(int a);	// slot 144 override: sub_10090890(0), then the base implementation

	void sub_10090890(float time);	// "CBaseAnimating::...MarkEffectStart"-like worker (scope trace, stores curtime + time at +0x5a4), called directly
	void sub_10273070(int a);	// CAI_BaseNPC member (stub 0x1000dc29), called by Spawn with 0
	void sub_1026dc00(int flags);	// CAI_BaseNPC member (stub 0x10012855), called by Spawn with 1 and 0x800000
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	virtual int vfunc473();	// slot 473: 0x19 when the NPC state at +0x5cc0 is 1, else 0x17
	float vfunc516();	// as in CGeneric_NPC (transplant)
	void vfunc495();	// slot 495 (plain member): emits one of the 0x1062a008 sounds (channel 2, volume 1.0, attenuation 0.8) from the NPC's edict to the players that can hear its position, reliably (a PAS attenuation filter built inline)
	void vfunc489();	// slot 489 (plain member): same shape as vfunc495, sounds at 0x1062a004
	void vfunc488();	// slot 488 (plain member): same shape as vfunc495, volume 0.5, sounds at 0x1062a00c
	void vfunc491();	// slot 491 (plain member): same shape as vfunc495, sounds at 0x1062a014 (random 0..3)
public:
    virtual const char * vfunc451();
public:
	virtual void vfunc434();
public:
	virtual int vfunc580();
public:
	virtual int vfunc432(int);
	char m_pad0004[0x5f48 - 0x4];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc259(animevent_t *);	// slot 259 (0x1035bf10): a tail call of CAI_BaseNPC::vfunc259
	virtual int vfunc438();	// slot 438 (0x1035bf30): a tail call of CAI_BaseNPC::vfunc438
	virtual int vfunc390(CTakeDamageInfo *);	// slot 390 (0x1035bfd0): a tail call of CAI_BaseNPC::vfunc390
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	int vfunc440(int);	// slot 440 (0x1035bf50): a tail call of CAI_BaseNPC::vfunc440 (a base declares it plain vfunc440: this one hides it)
};
