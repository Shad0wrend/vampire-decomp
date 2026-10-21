// CNPC_VBach: declared by pcdecomp transplant for 0x10362c90 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VBach : public CBaseEntity
{
public:
	CNPC_VBach *vfunc5(unsigned int flags);
	void sub_100123af();
	virtual void vfunc103();	// slot 103 "CNPC_VBach::Spawn": sub_1026dc00(0x200000), sub_1026dc30(1), the CNPC_VVampire version (sub_103c4ef0), then sets the byte at +0x66a1 and clears the other fight state fields (+0x6664 .. +0x66a8, +0x5db4)
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
	void sub_1026dc00(unsigned int flags);	// stub 0x10012855, called directly by Spawn with 0x200000
	void sub_1026dc30(int a);	// stub 0x1001005f, called directly by Spawn with 1
	void sub_103c4ef0();	// CNPC_VVampire::vfunc103 (stub 0x10014876), called directly

	char m_pad03e0[0x5db4 - 0x3e0];
	int m_n5db4;
	char m_pad5db8[0x6664 - 0x5db8];
	int m_n6664;
	int m_n6668;
	int m_n666c;
	int m_n6670;
	int m_n6674;
	int m_n6678;
	int m_n667c;
	int m_n6680;
	int m_n6684;	// the time of the byte at +0x66a5
	int m_n6688;
	int m_n668c;
	int m_n6690;
	int m_n6694;
	int m_n6698;
	int m_n669c;
	char m_b66a0;
	char m_b66a1;
	char m_b66a2;
	char m_b66a3;
	char m_b66a4;
	char m_b66a5;
	char m_b66a6;
	char m_b66a7;	// 0x66a7
	char m_b66a8;
};
