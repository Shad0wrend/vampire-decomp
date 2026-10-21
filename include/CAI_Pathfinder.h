// CAI_Pathfinder (RTTI .?AVCAI_Pathfinder@@, vtable 0x1049a134, 3 slots): the NPC's pathfinder (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"
#include "CAI_MoveProbe.h"

class CBaseEntity;
class CAI_Waypoint;

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

struct CAI_PathfinderLink;

// A node of the AI network as the pathfinder reads it.
struct CAI_PathfinderNode
{
	char m_pad0000[0x70];
	int m_nType;	// 0x70
	unsigned char m_fFlags;	// 0x74

	void sub_102fb0d0(float *pOutPosition, int nHull);	// the node's position for a hull (stub 0x1000d99a)
};

// The node list of the network (count, then the node pointers).
struct CAI_PathfinderNetwork
{
	int m_nNodes;	// 0x00
	CAI_PathfinderNode **m_ppNodes;	// 0x04
};

class CAI_Pathfinder : public CAI_Component
{
public:
	int m_unk08;
	int m_unk0c;
	CAI_PathfinderOverlay m_Overlay;	// 0x10
	char m_pad0011[0x24 - 0x11];
	CAI_MoveProbe *m_pMoveProbe;	// 0x24
	char m_pad0028[4];
	CAI_PathfinderNetwork *m_pNetwork;	// 0x2c

	bool sub_103058c0(int navType, const float *vecStart, const float *vecApex, const float *vecEnd, const CBaseEntity *pTarget, AIMoveTrace_t *pStartTrace, unsigned int collisionMask);	// "CAI_Pathfinder::TestTriangulationRoute": true when the probe can move from the start to the apex and from there to the end
	bool sub_102fce80(int moveType, CAI_PathfinderLink *pLink);	// "CAI_Pathfinder::IsLinkStillStale": false without the stale bit (bit 0 of +0x64) or once the stale time (+0x68) has passed (the bit is cleared); at most one route check per frame (time at +0x14, hull type at +0x8): CheckStaleRoute(position of the node +4, of the node +8, moveType) - when it passes the bit is cleared and false returned, else true
	bool sub_10304a40(const float *vecStart, const float *vecEnd, int moveTypes);	// "CAI_Pathfinder::CheckStaleRoute" (stub 0x10005d6c)
	bool sub_103059d0(int a1, int a2, int a3, int a4, int a5, float *pOutApex, int a7, int a8);	// "CAI_Pathfinder::Triangulate" (stub 0x10010546): looks for a triangulation apex and stores it in pOutApex; false when there is none
	CAI_Waypoint *sub_10304020(int a1, const float *pEndPosition, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);	// "CAI_Pathfinder::BuildTriangulationRoute": triangulates (sub_103059d0) and, when there is an apex, builds the two waypoints (the end position and the apex, the end waypoint chained after it) and returns the apex waypoint; 0 when the triangulation fails (ret 0x28: ten stack arguments)
	CAI_Waypoint *sub_10303740(int navType, const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int nodeTargetType, int flYaw, int a9);	// "CAI_Pathfinder::BuildSimpleRoute": for the node nodeID (any when -1) of the target type, when the probe can move from the start to the end a one waypoint route to the end position; 0 otherwise (ret 0x24: nine stack arguments)
	bool sub_102f1900(int nodeNum, unsigned int collisionMask);	// "CAI_Pathfinder::CanFitAtNode": DevMsg "CanFitAtNode() called with no network!" without a network; for air nodes (type 2) and for climb nodes with a flag of 0x1d (type 4) the probe's stand check at the node's position must pass, then the hull test sub_102f1a20 at that position
	char sub_102f1a20(const float *vecPosition, unsigned int collisionMask);	// the hull fit test at a position (stub 0x10008706)
};
