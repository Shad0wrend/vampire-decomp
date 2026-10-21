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
};
