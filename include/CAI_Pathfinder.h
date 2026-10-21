// CAI_Pathfinder (RTTI .?AVCAI_Pathfinder@@, vtable 0x1049a134, 3 slots): the NPC's pathfinder (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"
#include "CAI_MoveProbe.h"

class CBaseEntity;

// The owning NPC as the pathfinder sees it (class not modelled here).
struct CAI_PathfinderOuter
{
	char m_pad0000[0x224];
	unsigned int m_nDebugBits;	// 0x224: bit 15 turns the triangulation overlay on
	char m_pad0228[0x5d40 - 0x228];
	CAI_MoveProbe *m_pMoveProbe;	// 0x5d40
};

// The overlay helper embedded at +0x10.
struct CAI_PathfinderOverlay
{
	void sub_10306280(const float *vecStart, const float *vecApex, const float *vecEnd, AIMoveTrace_t *pStartTrace, AIMoveTrace_t *pEndTrace, char bResult);	// stub 0x1000d3ff: draws the two legs of a triangulation route
};

class CAI_Pathfinder : public CAI_Component
{
public:
	int m_unk08;
	int m_unk0c;
	CAI_PathfinderOverlay m_Overlay;	// 0x10

	bool sub_103058c0(int navType, const float *vecStart, const float *vecApex, const float *vecEnd, const CBaseEntity *pTarget, AIMoveTrace_t *pStartTrace, unsigned int collisionMask);	// "CAI_Pathfinder::TestTriangulationRoute": true when the probe can move from the start to the apex and from there to the end
};
