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
};
