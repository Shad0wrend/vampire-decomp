// CLagCompensationManager: CAutoGameSystem + ILagCompensationManager (at +0x8).
// Modelled as a single class: the slots below are the primary vtable
// (0x10471758); the ILagCompensationManager vptr at +0x8 lives inside the
// padding, so code that needs the secondary vtable has to spell the bases out.
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

#ifdef PCD_INITIALIZERS	// the initializer units: Source's class (dlls/player_lagcompensation.cpp, 2003 form)
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

class CLagCompensationManager : public CAutoGameSystem, public ILagCompensationManager
{
public:
	CUtlVector<CLagCompensationRecord> m_Data;	// 0x0c
	unsigned int restorebits;	// 0x20
	bool m_bNeedToRestore;	// 0x24
	CLagCompensationPlayerRecord restoreData[2][32];	// 0x28 (RESTORE_RECORD, CHANGE_RECORD)
};
#else
class CLagCompensationManager
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual CLagCompensationManager *vfunc8(unsigned int flags);

	char m_pad0004[8];	// 0x0004 .. 0x000b (holds the +0x8 vptr)
	CLagCompensationRecord *m_pRecords;	// 0x000c: the record vector's memory
	int m_allocationCount;	// 0x0010
	int m_growSize;	// 0x0014
	int m_18;	// 0x0018: record count
	CLagCompensationRecord *m_pElements;	// 0x001c

	// Note on slot 7 (0x10187fb0, "FrameUpdatePostEntityThink"-like) is declared virtual vfunc7() above: base sub_10187ef0() first; a CLagCompensationRecord and 32 CLagCompensationPlayerRecord locals (ctor stub 0x100159b0 each, then the whole array zeroed with rep stosd), simtime = engine slot 119(1) (g_1070b22c, float result), players 1..gpGlobals->maxClients through sub_101cd9e0(index), then an AddToHead on the record vector at +0xc (alloc +0x10, grow? +0x14, size +0x18, element pointer +0x1c; grow = Mem784::sub_10189510(size + 1 - alloc), memmove of the tail up by 0x784) and the copy of the locals into the new head element
	void sub_1042c2c0();	// CBaseGameSystem::~CBaseGameSystem, called directly
	void sub_10187c90();	// Purge of the record vector (0x10187c90)
	void sub_10187ef0();
	void sub_10187e60(struct CPlayerView10187e60 *pPlayer);	// drops the records older than one second (walking backwards, memmove'ing the tail down)
};
#endif
