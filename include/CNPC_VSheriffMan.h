// CNPC_VSheriffMan: sheriff man NPC (derived from CNPC_VVampireBoss at +0x0). Only the functions that decompiled code needs are declared.
#pragma once

class CNPC_VSheriffMan
{
public:
	char pad0[0x1b38];
	int m_nIdealState;	// +0x1b38

	int sub_10005e20(int a);
	int vfunc440(int a);
	void vfunc448(int arg);
	void sub_100054bb(int arg);
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc431();	// "CNPC_VSheriffMan::NPCThink": scope trace around the base think, then schedules the next think
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int vfunc461();	// "CNPC_VSheriffMan::SelectIdealSchedule": scope trace, sets the ideal state to 0x21, then the base implementation
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VSheriffMan *vfunc5(unsigned int flags);	// as in CBaseCineCam (transplant)
};
