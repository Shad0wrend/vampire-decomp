// CNPCMaker: declared by pcdecomp transplant for 0x1034aae0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPCMaker : public CBaseEntity
{
public:
	CNPCMaker *sub_1034ad80();
	void vfunc103();	// slot 103 "CNPCMaker::Spawn": SetSolid(0) (inlined scope trace), clears +0x66b0, slot 104, with the flag at +0x66c3 sets the flag at +0x66c2, then installs the think function (with the delay at +0x6664 unless the flag at +0x66c0 is set) and clears +0x66b8
	void vfunc139(CBaseEntity *pEnt);	// slot 139 "ChildPostSpawn": marks the spawned entity (flag byte at +0x44c), counts it (+0x6660 when slot 158 says it is alive, else it is handed to the list at +0x6680), hands it to the list at +0x6698 when sub_1034b430() holds, and lowers the live count at +0x66b0 (not below 0)
	char sub_1034b430();	// stub 0x10001afa
	void sub_1034cf20(int a, char bNotify);	// stores a at +0x76d0 and, with bNotify, walks the entities named like the string at +0x66bc and hands a to the one (sub_103e0980) whose owner handle (+0x254 of the object at +0x98) resolves to this
	void sub_1034bbf0();	// schedules the next think: the spawn delay (+0x6664) after slot 617(0) or when the live count (+0x66b0) reached the limit (+0x66b4), else 1..2 seconds

	char m_pad03e0[0x6664 - 0x3e0];
	float m_flSpawnDelay;	// 0x6664
	char m_pad6668[0x66b0 - 0x6668];
	int m_n66b0;	// 0x66b0
	int m_n66b4;	// 0x66b4: limit of live NPCs (0 = none)
	int m_n66b8;	// 0x66b8
	char m_pad66bc[4];
	char m_b66c0;	// 0x66c0
	char m_pad66c1;
	char m_b66c2;	// 0x66c2
	char m_b66c3;	// 0x66c3
};
