// CNPC_VDog: declared by pcdecomp transplant for 0x10373570 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CNPC_VAnimal.h"

class CEntityVSlots;

class CNPC_VDog : public CNPC_VAnimal
{
public:
	CNPC_VDog *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VDog *sub_103734f0();	// as in CKeepUpright (transplant)
	virtual void vfunc259(int *pEvent);	// slot 259: the dog's bite on event 0xbb9 (the dog's shot when a weapon is active, then "Gots a doggie bite!"), else CNPC_VAnimal::vfunc259
	virtual void vfunc432(int a);	// slot 432: for a few activities (+0xfec) asks slot 310 for state 1 or 3 (sometimes at random), then CNPC_VAnimal::vfunc432(a)
	void vfunc103();	// slot 103: a random 0..1 second delay + curtime at +0x6674, clears +0x6688, sets three flags through sub_1026dc00 (0x4000000, 0x200000, 0x8000), then CNPC_VAnimal::vfunc103
	void sub_1026dc00(unsigned int flags);	// CAI_BaseNPC member (stub 0x10012855), called directly
	void sub_10374e50();	// state change helper of vfunc460: passes the entity behind the handle at +0x628c to slot 596, records the source line (0x52a) and state 2, and tells the active thing at +0x5da4 about the slot 167 value
	void sub_10374f40();	// the dog's bite shot (called by vfunc259): with an enemy (slot 167) and an active weapon, traces from this one's origin to the enemy's origin at the same height (mask 0x202400b) and hands the trace result to the weapon's slot 270
	CEntityVSlots *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int vfunc461();	// slot 461 "SelectIdealState" (plain member): state 1 / 3 (+0x5cc0) pick the ideal state (+0x5cc4) from conditions (0x44, 0x54, 0x46, 0x78, 0x7c, 0x7d, 0x2b, ...) and stamp the source line; else CNPC_VAnimal::vfunc461
	void sub_100041b0(int condition);	// CAI_BaseNPC condition clear (stub for sub_10269a20), called directly
	char sub_103747c0(int arg);	// returns 0 (this unused)
	int vfunc460();	// slot 460 (declared as a plain member): conditions 0x78 / 0x7e run the state change helper and answer the state at +0x5cc4; 0x79 forces state 3, 0x7c leaves state 3 for state 1 (both stamp the source line), then the Troika base
	char sub_10014df8(int condition);	// "HasCondition" (the stub at 0x10014df8 for CAI_BaseNPC::sub_10269aa0), called directly
	char sub_1001482b(int condition);	// CAI_BaseNPC condition test (the stub for sub_10269d30), called directly
	void sub_10015839(int condition);	// CAI_BaseNPC "SetCondition"-like (stub 0x10015839), called directly
	int sub_1000cc34();	// CAI_BaseNPCTroika::vfunc460 (stub 0x1000cc34), tail called
	float vfunc516();	// slot 516 (declared as a plain member): the dog's movement speed: the moving state (flag 0x2000 at +0x5d8c) uses |slot 242| times a convar value (at least 1.0f); the flag 0x8000000 at +0x14b8 gives 45.0f; else by the activity (+0xfec) 30.0f, 40.0f, a convar value or 45.0f
	int vfunc438();	// slot 438 "SelectSchedule": +0x1b2c = 0xd; condition 0x7b (cleared again) gives schedule 0x166; the dog state (+0x5cc0): 1 uses the schedule of the object at +0x6590, else 0x164 without the byte +0x63d9; 1 / 3 give 0x167 while condition 0x7d holds; 2 clears the byte +0x5b80; else CNPC_VAnimal::vfunc438 (0x6b becomes 0x164)
	void vfunc442(int *pTask);	// slot 442 "StartTask": task 0x36 (move to the enemy's last known position): AutoMovement, resets the motor's look state, looks at the enemy's last known position (queued with weight -2.0f), starts activity 0x4b and completes the movement when slot 251 holds; task 0xbc first asks slot 310 for state 3; every other task goes to CNPC_VAnimal::vfunc442
	bool sub_10280a50();	// "CAI_BaseNPC::AutoMovement" (stub 0x1000cf6d), called directly
	void sub_10289ee0(int activity);	// CAI_BaseNPC activity setter (stub 0x10014524), called directly
	void sub_10273e80(char flag);	// CAI_BaseNPC::sub_10273e80 (stub 0x1000ac68), called directly
	virtual void vfunc444(int *pTask);	// slot 444 "RunTask": tasks 2 / 0x67 in state 3 queue a look at slot 217 of the local player (weight -2.0f), then CNPC_VAnimal::sub_1035f940
	int vfunc440(int activity);	// slot 440: 0x6b gives 0x164, 0x156 gives 0x161, 0x157 gives 0x162, else CNPC_VAnimal::vfunc440 (tail called)
public:
	virtual int vfunc580();
public:
	virtual int vfunc138();
	virtual int vfunc451();
	virtual bool vfunc452();
	char sub_10374aa0(CBaseEntity *pHint);	// slot 566 (plain member): whether the hint's type at +0x5dc is 12000 (0x2ee0)
};
