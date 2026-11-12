// CUnknown1030a6e0: object with a list of 0x18-byte records (position, two ints, entity handle) at +0x3c
// (memory at +0x3c, allocation count +0x40, grow size +0x44, size +0x48, elements pointer +0x4c); real name not yet known.
// It belongs to an NPC (pointer at +4).
#pragma once

#include "CUnknown1030b2f0.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPC.h"

extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct Vec3_1030a6e0
{
	float x, y, z;
};

struct Rec1030a6e0
{
	float x, y, z;
	int a;
	int b;
	unsigned int hEnt;

	void Init(Vec3_1030a6e0 v, int a_, int b_, unsigned int h)
	{
		x = v.x;
		y = v.y;
		z = v.z;
		a = a_;
		b = b_;
		hEnt = h;
	}
};

struct CircleObstacles_t	// CAI_PlaneSolver's obstacle record (0x18 bytes)
{
	CircleObstacles_t(const Vector &center, float radius, CBaseEntity *pEntity, int type)
		: center(center), radius(radius), type(type), hEntity(pEntity)
	{
	}
	Vector center;
	float radius;
	int type;
	EHANDLE hEntity;
};

struct RecVec1030a6e0
{
	CUnknown1030b2f0 m_Memory;	// pointer, allocation count, grow size
	int m_Size;
	Rec1030a6e0 *m_pElements;

	void AddRec(Vec3_1030a6e0 v, int a, int b, unsigned int h)
	{
		int elem = m_Size;
		if (elem + 1 > m_Memory.m_nAllocationCount)
			m_Memory.sub_1030b2f0(elem + 1 - m_Memory.m_nAllocationCount);
		m_Size++;
		m_pElements = (Rec1030a6e0 *)m_Memory.m_pMemory;
		int numToMove = m_Size - elem - 1;
		if (numToMove > 0)
			memmove((Rec1030a6e0 *)m_Memory.m_pMemory + elem + 1, (Rec1030a6e0 *)m_Memory.m_pMemory + elem, numToMove * sizeof(Rec1030a6e0));
		Rec1030a6e0 *p = (Rec1030a6e0 *)m_Memory.m_pMemory + elem;
		if (p)
			p->Init(v, a, b, h);
	}
};

struct CUnknown1030a6e0_Debug	// the object at +0x50 (its fields are not known yet)
{
	void sub_102e8b80(const Vector &vecOrigin);	// stub 0x1001398a: debug draw for the given origin
	bool sub_102e91b0(void *pSuggestions, int nSuggestions, float *pResult);
	int m_n0;
	int m_n4;
	int m_n8;
	int m_nCount;	// 0xc
};

class CUnknown1030a6e0
{
public:
	virtual int vfunc0(void *pGoal, void *pTrace, float distClear, float probeDist, float degreesPositiveArc, int nProbes);
	bool sub_1030a0d0(void *pGoal, void *pTrace, float degreesPositiveArc, bool fDeterOscillation, Vector *pSolution);
	float sub_1030a650(float speed);
	void sub_10308150(int navType, Vector *pEnd, int n, int *pTrace);
	CAI_BaseNPC *m_pOuter;	// 0x04
	Vector m_vecGoal;	// 0x08: the goal the progress below was measured for
	char m_bSteer14;	// 0x14: the last steer step was solved (at speed)
	char m_b15;
	char m_b16;
	char m_b17;
	float m_flPrev18;	// 0x18
	Vector m_vecPrev1c;	// 0x1c
	float m_flBestDist;	// 0x28: the closest the NPC has been to the goal
	float m_flBestTime;	// 0x2c: when it got that close
	char m_bStuck;	// 0x30
	char pad31[0x3c - 0x31];
	RecVec1030a6e0 m_List;	// +0x3c
	CUnknown1030a6e0_Debug m_Debug50;	// 0x50

	void sub_10309e40();	// debug: with bit 26 of the NPC's flags (+0x224) set, hands the NPC's slot 192 position to the object at +0x50

	void sub_1030a6e0(const Vector &vPos, float flRadius, CBaseEntity *pEnt, int nType);	// appends a record {vPos, bits of flRadius, nType, handle of pEnt (-1 for null)} to the list (AddToTail inlined)
	void sub_10309230(void *pGoal, float flTolerance);	// gathers entities into the obstacle list (this+0x3c): arg1 is the move-goal whose pointer at +0x3c (object's handle at +0x30) is skipped; arg2 is an extra horizontal tolerance. Waits in the same object as CAI_PlaneSolver (same layout: +4 NPC, +0x3c obstacle list, +0x50 sample vector)
	void sub_10309e80(const Vector *pDirA, const Vector *pDirB);	// debug draw: with bit 26 of the NPC's flags (+0x224) set, draws a white line from slot 192 of the NPC along pDirA (length 20) and a yellow one along pDirB, each for 0.1 s
	void sub_10309f60(const Vector *pPos, float flUnused, Vector *pOut);	// direction from the NPC's origin to pPos, with the vertical part pushed away from a flat result
	bool sub_10308190(const Vector *pGoal);	// stuck test (stub 0x10008e4f): a new goal restarts the measurement; once the 2D distance to the goal stops shrinking for 0.75 s the NPC counts as stuck
	bool sub_1030aea0(void *pGoal, float flDist, Vector *pOut);	// stub 0x1030aea0: the local-navigator steer step (this is the object at CAI_LocalNavigator +0x18 = CAI_LocalNavigator::m_pData); fills *pOut with the steered direction; called by CAI_LocalNavigator::vfunc6 (0x102de110). Its own body calls this->slot0 (6 stack args, result 2 = failed) and the members below; the class still needs a virtual slot0 modelled (pad0[4] is the vptr).
};
