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
	bool sub_102e6d70(int navType, const float *vecStart, const float *vecEnd, unsigned int collisionMask, const CBaseEntity *pTarget, float pctToCheckStandPositions, unsigned char flags, AIMoveTrace_t *pTrace, int a9, int a10);	// "CAI_MoveProbe::MoveLimit" (stub 0x10012b43): true when the trace did not fail (fStatus >= 0)
};
