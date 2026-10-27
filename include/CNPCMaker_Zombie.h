// CNPCMaker_Zombie: declared by pcdecomp transplant for 0x1034c980 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CAI_BaseNPCTroika;

class CNPCMaker_Zombie : public CBaseEntity
{
public:
	CNPCMaker_Zombie *sub_1034ca80();
	void vfunc103();	// slot 103 "Spawn": like CNPCMaker::vfunc103, with a randomised first think and the five counters at +0x6348 set to 999999
	void vfunc104();	// slot 104 "Precache": like the Fleshpile one, but clears the fields +0x1a98 / +0x5dec and also precaches "item_w_zombie_fists"; without a model name warns "<name> at x y z missing modelname" and removes the entity
	void sub_1027bb50();	// CAI_BaseNPC::vfunc104 (stub 0x1000eaf7), called directly
	const char *sub_100ab4f0();	// the entity's name text for messages (stub 0x1000b5cd)
	void sub_1034d2d0();	// schedules the next think like CNPCMaker::sub_1034bbf0
	char vfunc618(char bForce);	// slot 618: true when forced; else CNPCMaker::vfunc618(0) unless the player (sub_101cda50) is farther than 0.9 * the Manhattan distance limit at +0x76d8
	char sub_1034b580(char a);	// CNPCMaker::vfunc618 (stub 0x1000ae4d), called directly
	CAI_BaseNPCTroika *vfunc617(int a);	// slot 617 "SpawnNPC": CNPCMaker::vfunc617, then gives the new zombie the fists, hands it the maker's value at +0x76d0 and plays the "Zombies spawning emitter" particle at its place
	CAI_BaseNPCTroika *sub_1034b7b0(int a);	// CNPCMaker::vfunc617 (stub 0x10005a5b), called directly

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
	char m_pad66c4[0x76d0 - 0x66c4];
	int m_n76d0;	// 0x76d0
	char m_pad76d4[4];
	float m_flRange;	// 0x76d8
public:
    virtual datamap_t * vfunc82();
};
