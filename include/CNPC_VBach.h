// CNPC_VBach: declared by pcdecomp transplant for 0x10362c90 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VBach : public CBaseEntity
{
public:
	CNPC_VBach *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int vfunc609(int arg);	// slot 609: when the dword at +0x5cc0 is 4 or 0xc forwards arg to CAI_BaseNPCTroika::vfunc609 (stub 0x100075ae), else clears +0x6444 and returns 0
	int sub_10363c70(void *info);	// slot 390 override: when the byte at +0x66a8 is set, flags the hit at +0x66a6 and clears one of the dwords +0x6688/+0x6690 (or passes a zeroed copy of the damage info), then calls CNPC_VHuman::vfunc390
	CNPC_VBach *sub_10362c10();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "Precache": the base Precache, three weapon items and the boss sounds
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (Precache), called directly
	void vfunc432(int arg);	// slot 432: when the byte at +0x66a5 is set and its time at +0x6684 has passed, clears stat 0xd of the stat list with id 3 (shared default list when absent) and the byte; then CNPC_VHuman::vfunc432
	void sub_10279a50(int a);	// CAI_BaseNPC::sub_10279a50 (stub 0x1000b974), called directly
	void sub_10385a10(int arg);	// CNPC_VHuman::vfunc432 (stub 0x1000698d), called directly
	int vfunc440(int schedule);	// slot 440 "TranslateSchedule": schedules 0x17 / 0xed / 0x15f become 0x15f (0x160 when the active weapon is the katana with a sequence for 0x10 and condition 0x2c is clear) while the byte at +0x66a7 is clear, 0xb1 / 0xef become 0x15f, 0xdc becomes 0x15e, everything else goes to CNPC_VHuman::vfunc440
	int sub_103851c0(int schedule);	// CNPC_VHuman::vfunc440 (stub 0x10005e20), called directly
	CBaseEntity *sub_10007e19();	// CBaseCombatCharacter member (the stub at 0x10007e19 for 0x1032e7b0): the active weapon, called directly
	int sub_1008dc40(int a, int b);	// CBaseAnimating::SelectWeightedSequence (stub 0x100125c1), called directly
	bool sub_10269aa0(int condition);	// CAI_BaseNPC::HasCondition (stub 0x10014df8), called directly

	char m_pad03e0[0x66a7 - 0x3e0];
	char m_b66a7;	// 0x66a7
};
