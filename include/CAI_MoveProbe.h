// CAI_MoveProbe (RTTI .?AVCAI_MoveProbe@@, vtable 0x1049a120, 3 slots): the NPC's movement probe (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"

class CBaseEntity;

extern "C" void *__cdecl memset(void *, int, unsigned int);

// AIMoveTrace_t: the result of a movement trace, 14 dwords, zeroed by its constructor.
struct AIMoveTrace_t
{
	int fStatus;	// 0x00: 0 = ok, negative = blocked
	int m_unk[13];

	AIMoveTrace_t() { memset(this, 0, sizeof(*this)); }
};

class CAI_MoveProbe : public CAI_Component
{
public:
	CAI_MoveProbe(void *pOuter) : m_nUnk0c(-1) { m_pOuter = pOuter; }

	bool sub_102e6d70(int navType, const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, float pctToCheckStandPositions, unsigned char flags, AIMoveTrace_t *pTrace, int a9, int a10);	// "CAI_MoveProbe::MoveLimit" (stub 0x10012b43): true when the trace did not fail (fStatus >= 0)
	char sub_102e7270(const float *vecPosition, unsigned int collisionMask, int a3, int a4, int a5, int a6);	// the stand position check (stub 0x1000b1e5): true when the hull fits at the position
	void sub_102e6be0(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, AIMoveTrace_t *pTrace, int unused);	// "CAI_MoveProbe::FlyMoveLimit"-like (stub 0x10009f5c is its helper, not this): hull trace (profiled as CAI_MoveProbe_TraceHull, filtered by CTraceFilterNav) of the owner's collision bounds from start to end; when it hit something that is not pTarget, fills the trace record (hit entity, zero obstruction vector, status of the helper sub_102e2d70, the unused fraction of the way as a distance, at least 0.001)

	int m_pad08;
	int m_nUnk0c;	// 0x0c: starts at -1
	int m_unk10;
};
