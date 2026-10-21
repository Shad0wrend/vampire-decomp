// CNPCMaker_Zombie: declared by pcdecomp transplant for 0x1034c980 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPCMaker_Zombie : public CBaseEntity
{
public:
	CNPCMaker_Zombie *sub_1034ca80();
	void vfunc103();	// slot 103 "Spawn": like CNPCMaker::vfunc103, with a randomised first think and the five counters at +0x6348 set to 999999
	void sub_1034d2d0();	// schedules the next think like CNPCMaker::sub_1034bbf0

	char m_pad03e0[0x6348 - 0x3e0];
	int m_nCounters[5];	// 0x6348
	char m_pad635c[0x6664 - 0x635c];
	float m_flSpawnDelay;	// 0x6664
	char m_pad6668[0x66b0 - 0x6668];
	int m_n66b0;	// 0x66b0
	int m_n66b4;	// 0x66b4
	int m_n66b8;	// 0x66b8
	char m_pad66bc[4];
	char m_b66c0;	// 0x66c0
	char m_pad66c1;
	char m_b66c2;	// 0x66c2
	char m_b66c3;	// 0x66c3
};
