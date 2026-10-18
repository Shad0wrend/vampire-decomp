// CNPC_VAsianVampire: Asian vampire NPC. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

class CNPC_VAsianVampire
{
public:
	char pad0[0x17c];
	float m_flNextThink;	// +0x17c
	char pad180[0x1b38 - 0x180];
	int m_nIdealState;	// +0x1b38
	char pad1b3c[0x66d8 - 0x1b3c];
	float m_flStationaryTime;	// +0x66d8

	bool sub_10362670();	// "CNPC_VAsianVampire::StationaryFor...": curtime - m_flStationaryTime >= constant
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VAsianVampire::Spawn": scope trace around the base spawn
	void vfunc431();	// "CNPC_VAsianVampire::NPCThink": scope trace around the base think, then schedules the next think
	int vfunc461();	// "CNPC_VAsianVampire::SelectIdealState": scope trace, sets the ideal state to 6, then the base implementation
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
	void sub_100052d6();	// CNPC_VVampireBoss::vfunc431, called directly
	int sub_10011225();	// CNPC_VHuman::vfunc461, called directly
};
