// CNPC_VHumanCombatant: declared by pcdecomp transplant for 0x10386b20 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VHumanCombatantWeapon;	// the active weapon (slots 66 and 67 are used)

class CNPC_VHumanCombatant : public CBaseEntity
{
public:
	CNPC_VHumanCombatant *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// as in CNPC_VAndreiBlood (transplant)
	void vfunc420();	// slot 420: calls CAI_BaseNPCTroika::vfunc420 (stub 0x1000c531), then, when the active weapon (sub_1032e7b0) is set, calls slot 66 of it
	void sub_10384690();	// as in CNPC_VAndreiBlood (transplant)
	void sub_10012855(int a);	// as in CNPC_VAndreiBlood (transplant)
	CNPC_VHumanCombatant *sub_10386aa0();	// as in CKeepUpright (transplant)
	void sub_10387290(int *pEvent);	// slot 442 (animation event handler), called directly as the base implementation by CNPC_VCop::vfunc442
	void vfunc463(int a, int type);	// slot 463 "SetIdealActivityForType"-like: types 1 / 2 / 3 / 0xb tell the active weapon (slot 66 / 67) before the base implementation
	void sub_10011234(int a, int type);	// CNPC_VHuman::vfunc463 (stub 0x10011234), called directly
	CNPC_VHumanCombatantWeapon *sub_1032e7b0();	// the active weapon (stub 0x10007e19), 0 when none
	int sub_103872d0();	// slot 438 (select schedule, stub 0x1000b10e), called directly as the base implementation by CNPC_VGhoulCroucher::vfunc438
	int vfunc438();	// slot 438 "SelectSchedule": at state 2 the weapon's type flags (slot 360) pick slot 604 (0x18000 bits) or slot 605, a non-zero answer is the schedule, else CNPC_VHuman::vfunc438
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
};
