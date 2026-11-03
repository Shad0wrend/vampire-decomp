// CNPC_VHuman: human NPC base of the Troika NPCs (base chain not modelled). Only what decompiled code needs.
#pragma once
#include "CBaseAnimating.h"
#include "CBaseCombatCharacter.h"

#include "CAI_BaseNPCTroika.h"
#include "CEntityVSlots.h"

class CNPC_VHuman : public CAI_BaseNPCTroika
{
public:
	CNPC_VHuman *vfunc5(int flags);	// slot 5 (plain overload of the base slot; VC6 has no covariant returns): sub_100123af (destructor body), then sub_100aa7b0(this) when flags & 1; returns this
	void sub_100123af();	// the destructor body (stub 0x100123af -> 0x1028d610), called directly
	// Slot 440 (TranslateSchedule), called directly; declared as a plain member.
	int vfunc440(int schedule);
	virtual void vfunc444(void *pTask);	// slot 444 override (0x10384ab0): state/task handler for the task types 0x89..0x91; the default falls through to CAI_BaseNPCTroika::vfunc444
	// Slot 482 (CanPlaySequence-like, asked by the scripted sequence): 0 when the scripted sequence entity of the handle at +0x5d74 refuses
	// or the NPC is not alive (slot 158); with the NPC state (+0x5cc0) not idle / none, not heading for idle (+0x5cc4) and not
	// (combat with a high interrupt level) only a state of 4 may go on; declared as a plain member.
	int vfunc482(char bDisregardState, int interruptLevel);
	// Slot 442 (StartTask) implementation (stub 0x10013336, function 0x103847f0), called directly by the subclasses' override; takes the task record.
	void sub_10013336(const int *pTask);
	void vfunc442(const int *pTask);	// slot 442 (StartTask, plain member): function 0x103847f0, the same as sub_10013336
	// Slot 390 implementation (damage handling taking the damage info), called directly by the Bach override.
	int sub_10001b45(void *info);
	// Slot 104 (Precache) override, called directly by the NPC subclasses' Precache.
	virtual void vfunc104();
	// Slot 103 override (function 0x10384690): four condition-mask setters (0x4000000, 0x8000000, 0x200000, 0xd00) on the base, then CAI_BaseNPCTroika::vfunc103.
	void vfunc103();
	// Slot 376 (TranslateActivity step 2 / next activity of the fallback chain) override: maps the activities
	// 0x3d, 0x3e, 0x9f, 0xa0, 0xa3 and 0xa4 to 0x3b, 0x3c, 0x9d, 0x9e, 0xa1 and 0xa2 for the Troika version.
	virtual int vfunc376(int act);
	void vfunc434();	// slot 434 (plain member): does nothing, a bare ret
	int sub_10295710(int act);	// CAI_BaseNPCTroika::vfunc376 (stub 0x1000fb14), called directly
	// Slot 600 override: same as CAI_BaseNPCTroika::sub_102b57c0.
	virtual char vfunc600(int unused);
	// Slot 601 override: notifies the global at 0x10924edc, clears the byte at +0x6078, re-arms the time at +0x6070 when slot 308 holds, then the named object at +0x65e8 gets sub_1025ddd0.
	virtual void vfunc601(int a);
	// Slot 602 override: true when the NPC may carry on (not blocked by the flags at +0x5b84 / slot 293); without the named object check of the base.
	virtual char vfunc602();
	// Slot 605 override (function 0x10386560, ret 4): the schedule pick for the NPC's current state; stamps the source file / line at +0x1b30 / +0x1b34 with each answer.
	virtual int vfunc605(int unused);
	// Slot 463 implementation (stub 0x10011234, function 0x10384720), called directly by the Guard override; two arguments.
	void sub_10384720(int a, int b);
	// Slot 563 implementation (function 0x10384760): adds the offset between two position getters of pEnt to pVec.
	void vfunc563(CEntityVSlots *pEnt, Vector *pVec, int a, int b);
	// Slot 438 (SelectSchedule) implementation (function 0x10384ee0, stub 0x10015ad2), called directly by the subclasses' override.
	int vfunc438();
	int sub_103851e0();	// slot 461 (SelectIdealState) implementation of the human NPCs (stub 0x10011225), called directly (tail jump) by the combatants' override
	virtual int vfunc375(int act);	// slot 375 (TranslateActivity step 1) override, function 0x103854f0: remaps the activities by the weapon state
	int sub_102ad660();	// CAI_BaseNPCTroika::vfunc461 (stub 0x1000e49e), tail called
public:
    virtual CAI_CondOwner * vfunc580();
    virtual const char * vfunc451();
    int vfunc546(int arg);
	int sub_10384700();
	virtual bool vfunc366(int a, int b, int c);	// slot 366	// as in CNPC_Crow (transplant)
};
