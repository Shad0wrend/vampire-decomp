// CLagCompensationManager (RTTI .?AVCLagCompensationManager@@): CAutoGameSystem (GameSystemRoot.h; primary vtable
// 0x10471758) + ILagCompensationManager (at +0x8).
#pragma once

#include "Vector.h"

struct CLagCompensationPlayerRecord	// 0x3c bytes, one per player slot (32); built by the constructor stub 0x100159b0 (CUnknown10188280::sub_10188280)
{
#ifdef PCD_INITIALIZERS	// the initializer units: Troika's LagRecord constructor (the manager's restore arrays)
	CLagCompensationPlayerRecord()
	{
		m_nEdictIndex = 0;
		m_nFlags = 0;
		m_vecOrigin.Init();
		m_angAngles.Init();
		m_vecMins.Init();
		m_vecMaxs.Init();
		m_bValid = 0;
	}
#endif
	unsigned char m_bValid;	// 0x00: set to 1 when the player slot holds an entity
	char m_pad01[3];
	int m_nEdictIndex;	// 0x04: engine slot 35 of the entity's edict (+0x2e0)
	unsigned int m_nFlags;	// 0x08: bit 0 = slot 158 of the entity
	Vector m_vecOrigin;	// 0x0c: slot 220
	Vector m_angAngles;	// 0x18: slot 221 (QAngle; copied by Vector::sub_1011d2e0)
	Vector m_vecMins;	// 0x24: slot 1 of the collision property (+0x270)
	Vector m_vecMaxs;	// 0x30: slot 2 of the collision property
};

struct CLagCompensationRecord	// 0x784 bytes: the element of the manager's vector (Mem784)
{
	float m_flSimulationTime;	// 0x0000
	CLagCompensationPlayerRecord m_aPlayers[32];	// 0x0004
};

#include "GameSystemRoot.h"
#include "utlvector.h"

class CBasePlayer;
class CUserCmd;

class ILagCompensationManager	// vtable 0x10471748 in the manager (+8)
{
public:
	virtual void StartLagCompensation(CBasePlayer *player, CUserCmd *cmd);
	virtual void FinishLagCompensation(CBasePlayer *player);
};

// Source's class (dlls/player_lagcompensation.cpp, 2003 form)
class CLagCompensationManager : public CAutoGameSystem, public ILagCompensationManager
{
public:
	virtual void vfunc1();	// 0x10187c90 (matched as sub_10187c90)
	virtual void vfunc5();	// 0x10187d00
	virtual void vfunc7();	// 0x10187fb0, "FrameUpdatePostEntityThink"-like: base sub_10187ef0() first; a CLagCompensationRecord and 32 CLagCompensationPlayerRecord locals (ctor stub 0x100159b0 each, then the whole array zeroed with rep stosd), simtime = engine slot 119(1) (g_1070b22c, float result), players 1..gpGlobals->maxClients through sub_101cd9e0(index), then an AddToHead on the record vector (grow = Mem784::sub_10189510(size + 1 - alloc), memmove of the tail up by 0x784) and the copy of the locals into the new head element
	CLagCompensationManager *vfunc8(unsigned int flags);	// slot 8 (0x10187dd0) written out: the scalar deleting destructor

	void sub_1042c2c0();	// CBaseGameSystem::~CBaseGameSystem, called directly
	void sub_10187c90();	// Purge of the record vector (0x10187c90)
	void sub_10187ef0();
	void sub_10187e60(struct CPlayerView10187e60 *pPlayer);	// drops the records older than one second (walking backwards, memmove'ing the tail down)

	CUtlVector<CLagCompensationRecord> m_Data;	// 0x0c
	unsigned int restorebits;	// 0x20
	bool m_bNeedToRestore;	// 0x24
	CLagCompensationPlayerRecord restoreData[2][32];	// 0x28 (RESTORE_RECORD, CHANGE_RECORD)
};
