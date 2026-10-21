// CNPC_VHumanCombatPatrol: declared by pcdecomp transplant for 0x10387750 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CEntityVSlots;

class CNPC_VHumanCombatPatrol : public CBaseEntity
{
public:
	CNPC_VHumanCombatPatrol *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VHumanCombatPatrol *sub_103876d0();	// as in CKeepUpright (transplant)

	// Slot 438, declared as a plain member.
	int vfunc438();	// "SelectSchedule": +0x1b2c = 0x16; state 3 (+0x5cc0) or state 2 with the right conditions and a schedule object at +0x6590 hands out that object's dword at +4; otherwise the weapon-flag slots 604 / 605 of CNPC_VHumanCombatant, else CNPC_VHumanCombatant::vfunc438
	int sub_103872d0();	// CNPC_VHumanCombatant::vfunc438 (stub 0x1000b10e), called directly
	CEntityVSlots *sub_1032e7b0();	// "CBaseCombatCharacter::GetActiveWeapon" (stub 0x10007e19), called directly
	char sub_1033e2b0();	// CBaseCombatCharacter::IsBusyWithDiscipline (stub 0x1000caae), called directly
	char sub_10014df8(int condition);	// "HasCondition" (stub 0x10014df8 for 0x10269aa0), called directly
};
