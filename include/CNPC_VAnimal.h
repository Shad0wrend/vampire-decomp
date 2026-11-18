// CNPC_VAnimal: declared by pcdecomp transplant for 0x1035ec50 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"
#include "datamap.h"

struct animevent_t;	// a tail-call override's parameter
class CNPC_VAnimal : public CBaseEntity
{
public:
	CNPC_VAnimal *vfunc5(unsigned int flags);
	void sub_100123af();
	void vfunc390(struct CVAnimalArg *pArg);	// slot 390 (plain member): flags +0x6660 when the argument's inner object (+0x2c) value at +0xa8 equals sub_101cda50(), then CAI_BaseNPCTroika::vfunc390
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VAnimal *sub_1035eba0();	// as in CKeepUpright (transplant)
	void *sub_1032e7b0();	// "CBaseCombatCharacter::GetActiveWeapon" body at 0x1032e7b0 (this in ecx, no stack args): the entity behind the active-weapon handle at +0x19a4, 0 when none. Call it on this; the game emits `mov ecx,esi; call` (a member call, not the free __fastcall declaration used elsewhere)
	void sub_102a1910(int *pTask);	// CAI_BaseNPCTroika::vfunc442 body at 0x102a1910 (this in ecx, one stack arg): the default task-start handler, called directly by the animal task handler
	virtual void vfunc259(int *pEvent);	// slot 259: the base event handler (0x1035f5a0), called by CNPC_VDog::vfunc259 for every event but 0xbb9
	virtual void vfunc432(int a);	// slot 432 implementation (stub 0x10014f92), called by the CNPC_VDog override
	int vfunc438();	// slot 438 "SelectSchedule" (plain member): stamps +0x1b2c = 5; bit 1 of the flags at +0x14b8 -> clear it, schedule 0x15d; state 1 (+0x5cc0): the schedule of the object at +0x6590, else for the byte +0x63d9 schedule 0x156 / 0x157 by the navigation type; state 3: the Troika schedule picks; else CAI_BaseNPCTroika::vfunc438
	void sub_102aacf0(int *pTask);	// CAI_BaseNPCTroika::vfunc444 (stub 0x10015c2b), called directly
	void vfunc444(int *pTask);	// slot 444 "RunTask": the same function as sub_1035f940 below
	void sub_1035f940(int *pTask);	// slot 444 implementation (stub 0x10015235): the task handler of the animal NPCs, called directly by the zombie
	void sub_1035f650(int *pTask);	// slot 442 implementation (stub 0x10009b06): the task start handler of the animal NPCs, called directly by the dog
	int vfunc440(int activity);	// slot 440 (the base implementation, stub 0x10012283, 0x1035fe60): tail called by CNPC_VDog::vfunc440
	void vfunc103();	// slot 103 (stub 0x100117ca): the base implementation, called by CNPC_VScurrying::vfunc103
	void sub_10298d30();	// CAI_BaseNPCTroika::vfunc103 (stub 0x1000303a), called directly
	int vfunc461();	// slot 461 "SelectIdealState" (plain member): by the state at +0x5cc0 (2, 8 or 10) picks the ideal state (+0x5cc4) from conditions 0x44 / 0x46 / 0x47 and stamps the source file / line (+0x1b3c / +0x1b40), else CAI_BaseNPCTroika::vfunc461
	bool sub_10269d30(int condition);	// CAI_BaseNPC member (stub 0x1001482b), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly
	int sub_102ad660();	// CAI_BaseNPCTroika::vfunc461 (stub 0x1000e49e), tail called
	int vfunc482(char bDisregardState, int interruptLevel);	// slot 482 (CanPlaySequence-like), same as CNPC_VHuman::vfunc482
public:
    virtual datamap_t * vfunc82();
    virtual bool vfunc587(int a);
    virtual bool vfunc366(int a, int b, int c);
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc104();	// slot 104 (0x1035f4f0): a tail call of CAI_BaseNPCTroika::vfunc104
	void vfunc463(int, int);	// slot 463 (0x1035f580): a tail call of CAI_BaseNPCTroika::vfunc463 (no such slot in this view: plain)
	int vfunc376(int);	// slot 376 (0x10360140): a tail call of CAI_BaseNPCTroika::vfunc376 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	int vfunc375(int);	// slot 375 (0x10360120): a tail call of CAI_BaseNPCTroika::vfunc375 (no such slot in this view: plain)
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc144(int);	// slot 144 (0x10360200): a tail call of CAI_BaseNPCTroika::vfunc144 (a base declares another vfunc144: this one hides it)
};
