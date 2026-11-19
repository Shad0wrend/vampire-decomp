// CBatSwarm: swarm of bats (CBaseAnimating -> CBaseToggle -> CBaseEntity). Only what decompiled code needs.
#pragma once

#include "CBaseAnimating.h"
#include "Vector.h"

struct Ray_t;
struct CGameTrace;

struct CBatSwarmPathNode	// one of the ten path nodes at +0x744 (0x28 bytes each)
{
	Vector m_vecPos;	// 0x00
	float m_flRadius;	// 0x0c: the bat has reached the node when it is closer than this
	float m_flStrength;	// 0x10: how hard the node pulls the bat
	char m_bFlag14;	// 0x14: when clear the node's own limits (0x18..0x24) are used instead of the defaults
	char m_pad15[3];
	float m_f18;	// 0x18: lower distance limit
	float m_f1c;	// 0x1c: upper distance limit
	float m_f20;	// 0x20: lower height limit
	float m_f24;	// 0x24: upper height limit
};

class CBatSwarm : public CBaseAnimating
{
public:
	char m_pad04a4[0x730 - 0x4a4];
	unsigned int m_mask730;
	unsigned int m_mask734;
	float m_flSpeed738;
	char m_bSlow73c;
	char m_pad073d[0x740 - 0x73d];
	int m_nLimit740;
	CBatSwarmPathNode m_Path[10];	// 0x744: the flight path the bats follow, m_nLimit740 nodes in use
	char m_bLoop8d4;	// 0x8d4: set when the bats leave the swarm after the last node instead of wandering
	char m_pad08d5[3];
	Vector m_vecPos[32];	// 0x8d8
	Vector m_vecBatVelocity[32];	// 0x0a58
	bool m_bBatHittingPlayer[32];	// 0x0bd8
	int m_nBat[32];	// 0xbf8

	// Slot 141, called directly so far; declared as a plain member.
	void vfunc141(int *pRef, int unused, void *pInfo);
	void vfunc103();	// 0x100b87a0 (slot 103): spawn/init (model 0x1055a770, precaches Impact_Flesh_Emitter, randomises the 32 bat positions / velocities)
	bool vfunc99(const Ray_t *pRay, unsigned int mask, CGameTrace *pTrace);	// 0x100b9c20 (slot 99): traces the ray against the 32 bat AABBs (+-16 units) using sub_1023f3d0 / sub_10240fd0

	bool sub_100ba0c0(void *pEntity);	// slot 68: true when the entity is set and its field at +0xa8 is non-null
	virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CSimplePhysicsProp (transplant)
	void sub_10004c3c();	// as in CSimplePhysicsProp (transplant)
	bool vfunc69(void *pEntity);	// as in CBatSwarm (transplant)
	void vfunc104();	// as in CCameraAnimated (transplant)
	CBatSwarm *sub_100b8730();	// as in CKeepUpright (transplant)
	void vfunc101(Vector *pMins, Vector *pMaxs);	// slot 101: bounds of the active bats
	bool sub_100b99d0();	// true when no active bat is below the limit at +0x740
	void sub_100b8b50();	// per-think movement: steps the active bats (mask at +0x734) in up to 10 sub-steps of the time since the last think (+0x178) with sub_100b8d50
	void vfunc265(int iBat);	// slot 265: clears the bat from both active masks (+0x730 / +0x734) and spawns an "Impact_Flesh_Emitter" at its position
	void vfunc266(int a);	// slot 266: the entity of player index 1 gets slot 320(0, 0x76) when there is one
	void sub_100b8d50(int iBat, float flStep);	// moves one bat (stub 0x10007405), called directly
public:
    virtual datamap_t * vfunc82();
public:
    virtual int vfunc81();
    virtual int vfunc80();
};
