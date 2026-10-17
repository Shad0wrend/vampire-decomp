// CNPC_VAsianVampire: Asian vampire NPC. Layout declared flat (vptr and base members are padding)
// until the bases are recovered. Only what decompiled code needs.
#pragma once

class CNPC_VAsianVampire
{
public:
	char pad0[0x66d8];
	float m_flStationaryTime;	// +0x66d8

	bool sub_10362670();	// "CNPC_VAsianVampire::StationaryFor...": curtime - m_flStationaryTime >= constant
};
