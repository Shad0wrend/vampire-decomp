// class CWorld: the world entity (derived from CBaseEntity); only the overridden slots needed so far are declared.
#pragma once

#include "CBaseEntity.h"

class CWorldPlayer	// a player entity as CWorld::vfunc113 sees it
{
public:
	void sub_10170750();	// stub 0x10010a73
};

class CWorld : public CBaseEntity
{
public:
	CWorld();	// the constructor (0x1023b840): CBaseEntity body, vftable, engine edict 0 attached, world flags, solid BSP / move type none
	virtual void vfunc113();	// "CWorld::Activate"-like: CBaseEntity::vfunc113, caches sv_cheats in the global 0x10752e9c, clamps the value at +0x49c to 0..2 and, when that changed it, refreshes every player (sub_10170750) and flags the entity (+0x1b1); resets the globals 0x109247e0 / 0x109247e4 to -1 and 0x10924fb8 to 0
	virtual void vfunc130(int a);
	CWorld *vfunc5(unsigned int flags);	// as in CPhysForce (transplant)
	void sub_1000fe98();	// as in CPhysForce (transplant)
	CWorld *sub_1023b840();	// as in CKeepUpright (transplant)
	virtual bool vfunc110(const char *key, const char *value);	// "CWorld::KeyValue": skyname / sounds / WaveHeight / newunit / world_mins / world_maxs, else CBaseEntity::KeyValue
	void vfunc241(void *pSource, int nSound, int unused1, int unused2);	// slot 241 (declared as a plain member): plays the sound of the table entry nSound (global table at 0x105c230c, 8 bytes each, skipped when negative) to every player from the position at +0xc of pSource, through the engine object at 0x10540528 (slot 41)

	char m_padWorld[0x45c - 0x3e0];
	float m_flWaveHeight;	// 0x045c
	float m_vecWorldMins[3];	// 0x0460
	float m_vecWorldMaxs[3];	// 0x046c
	char m_pad0478[4];	// 0x0478
	char m_bColdWorld;	// 0x047c
	char m_pad047d[0x49c - 0x47d];
	int m_n49c;	// 0x049c: 0..2
	char m_pad04a0[0x518 - 0x4a0];
	int m_n518;	// 0x0518
	float m_f51c;	// 0x051c
	float m_f520;	// 0x0520
};
