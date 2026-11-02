// CLagCompensationManager: CAutoGameSystem + ILagCompensationManager (at +0x8).
// Modelled as a single class: the slots below are the primary vtable
// (0x10471758); the ILagCompensationManager vptr at +0x8 lives inside the
// padding, so code that needs the secondary vtable has to spell the bases out.
#pragma once

#include "Vector.h"

struct CLagCompensationPlayerRecord	// 0x3c bytes, one per player slot (32); built by the constructor stub 0x100159b0 (CUnknown10188280::sub_10188280)
{
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
	virtual void vfunc8();

	char m_pad0004[8];	// 0x0004 .. 0x000b (holds the +0x8 vptr)
	CLagCompensationRecord *m_pRecords;	// 0x000c: the record vector's memory
	char m_pad0010[8];	// 0x0010 .. 0x0017
	int m_18;	// record count

	void vfunc7_body();	// placeholder note: slot 7 (0x10187fb0, "FrameUpdatePostEntityThink"-like) is declared virtual vfunc7() above: base sub_10187ef0() first; a CLagCompensationRecord and 32 CLagCompensationPlayerRecord locals (ctor stub 0x100159b0 each, then the whole array zeroed with rep stosd), simtime = engine slot 119(1) (g_1070b22c, float result), players 1..gpGlobals->maxClients through sub_101cd9e0(index), then an AddToHead on the record vector at +0xc (alloc +0x10, grow? +0x14, size +0x18, element pointer +0x1c; grow = Mem784::sub_10189510(size + 1 - alloc), memmove of the tail up by 0x784) and the copy of the locals into the new head element
	void sub_10187ef0();	// drops the records older than one second (walking backwards, memmove'ing the tail down)
};
