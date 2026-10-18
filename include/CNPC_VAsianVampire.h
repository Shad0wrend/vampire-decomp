// CNPC_VAsianVampire: Asian vampire NPC. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

class CNPC_VAsianVampire
{
public:
	char pad0[0x66d8];
	float m_flStationaryTime;	// +0x66d8

	bool sub_10362670();	// "CNPC_VAsianVampire::StationaryFor...": curtime - m_flStationaryTime >= constant
	void vfunc619(int arg);
	void sub_1000c27a(int arg);
	void vfunc103();	// "CNPC_VAsianVampire::Spawn": scope trace around the base spawn
	void sub_10012855(int flags);	// sets the solid flags, called with 0x201000
	void sub_10014876();	// CNPC_VVampire::vfunc103, called directly
};
