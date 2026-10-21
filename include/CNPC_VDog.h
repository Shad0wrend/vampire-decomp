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
	virtual void vfunc432(int a);	// slot 432: for a few activities (+0xfec) asks slot 310 for state 1 or 3 (sometimes at random), then CNPC_VAnimal::vfunc432(a)
	void sub_10374e50();	// state change helper of vfunc460: passes the entity behind the handle at +0x628c to slot 596, records the source line (0x52a) and state 2, and tells the active thing at +0x5da4 about the slot 167 value
	void sub_10374f40();	// the dog's bite shot (called by vfunc259): with an enemy (slot 167) and an active weapon, traces from this one's origin to the enemy's origin at the same height (mask 0x202400b) and hands the trace result to the weapon's slot 270
	CEntityVSlots *sub_1032e7b0();	// CBaseCombatCharacter::GetActiveWeapon (stub 0x10007e19), called directly
	int vfunc460();	// slot 460 (declared as a plain member): conditions 0x78 / 0x7e run the state change helper and answer the state at +0x5cc4; 0x79 forces state 3, 0x7c leaves state 3 for state 1 (both stamp the source line), then the Troika base
	char sub_10014df8(int condition);	// "HasCondition" (the stub at 0x10014df8 for CAI_BaseNPC::sub_10269aa0), called directly
	int sub_1000cc34();	// CAI_BaseNPCTroika::vfunc460 (stub 0x1000cc34), tail called
	float vfunc516();	// slot 516 (declared as a plain member): the dog's movement speed: the moving state (flag 0x2000 at +0x5d8c) uses |slot 242| times a convar value (at least 1.0f); the flag 0x8000000 at +0x14b8 gives 45.0f; else by the activity (+0xfec) 30.0f, 40.0f, a convar value or 45.0f
};
