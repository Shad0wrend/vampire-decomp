// CNPC_VHumanCombatant: declared by pcdecomp transplant for 0x10386b20 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#define CVHW_V(n) virtual void vfunc##n();
#define CVHW_V10(p) CVHW_V(p##0) CVHW_V(p##1) CVHW_V(p##2) CVHW_V(p##3) CVHW_V(p##4) CVHW_V(p##5) CVHW_V(p##6) CVHW_V(p##7) CVHW_V(p##8) CVHW_V(p##9)
class CNPC_VHumanCombatantWeapon	// the active weapon (slots 66 and 67 are used)
{
public:
	CVHW_V10(0) CVHW_V10(1) CVHW_V10(2) CVHW_V10(3) CVHW_V10(4) CVHW_V10(5)
	CVHW_V(60) CVHW_V(61) CVHW_V(62) CVHW_V(63) CVHW_V(64) CVHW_V(65) CVHW_V(66)
	virtual void vfunc67();
};

class CNPC_VHumanCombatant : public CBaseEntity
{
public:
	CNPC_VHumanCombatant *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// as in CNPC_VAndreiBlood (transplant)
	void vfunc104();	// slot 104 (the base implementation, stub 0x10009dbd): called directly by CNPC_VGhoulCroucher::vfunc104
	void vfunc420();	// slot 420: calls CAI_BaseNPCTroika::vfunc420 (stub 0x1000c531), then, when the active weapon (sub_1032e7b0) is set, calls slot 66 of it
	void sub_10384690();	// as in CNPC_VAndreiBlood (transplant)
	void sub_10012855(int a);	// as in CNPC_VAndreiBlood (transplant)
	CNPC_VHumanCombatant *sub_10386aa0();	// as in CKeepUpright (transplant)
	void sub_10387290(int *pEvent);	// slot 442 (animation event handler), called directly as the base implementation by CNPC_VCop::vfunc442
	int vfunc440(int arg);	// slot 440: the base implementation (0x10387360), tail called by CNPC_VHunter::vfunc440
	void vfunc463(int a, int type);	// slot 463 "SetIdealActivityForType"-like: types 1 / 2 / 3 / 0xb tell the active weapon (slot 66 / 67) before the base implementation
	void sub_10011234(int a, int type);	// CNPC_VHuman::vfunc463 (stub 0x10011234), called directly
	CNPC_VHumanCombatantWeapon *sub_1032e7b0();	// the active weapon (stub 0x10007e19), 0 when none
	int sub_103872d0();	// slot 438 (select schedule, stub 0x1000b10e), called directly as the base implementation by CNPC_VGhoulCroucher::vfunc438
	int vfunc438();	// slot 438 "SelectSchedule": at state 2 the weapon's type flags (slot 360) pick slot 604 (0x18000 bits) or slot 605, a non-zero answer is the schedule, else CNPC_VHuman::vfunc438
	int sub_10015ad2();	// CNPC_VHuman::vfunc438 (stub 0x10015ad2), tail called
	int vfunc461();	// slot 461 "SelectIdealState": at state 1 a pending 0x4c..0x4e condition (without the byte at +0x65f6) switches to state 3; condition 0x3e reports the entity of the handle at +0x628c to slot 597 on the map la_empire_2 and switches to state 0xb; otherwise CNPC_VHuman::vfunc461
	void vfunc453();	// slot 453: CAI_BaseNPCTroika::vfunc453, then (slot 158 holds, state slot 464 is 1, flag bit 7 of +0x4c clear or byte +0x65f4 clear) sets condition 0x3e
	void sub_102ad140();	// CAI_BaseNPCTroika::vfunc453 (stub 0x10011b35), called directly
	void sub_10269eb0(int condition);	// CAI_BaseNPC SetCondition (stub 0x100123f5), called directly
	void *vfunc580();	// slot 580 (plain member; the model derives from CBaseEntity): returns the address of the global object g_1093b498 (the condition-table owner, CAI_CondOwner in the NPC hierarchy)
	char vfunc452();	// slot 452 (plain member): the raw byte global at 0x1063f8b8 (a char, as other matched sources declare it)
public:
    virtual datamap_t * vfunc82();
	const char *sub_10386b00();
	int sub_10387180();
};
