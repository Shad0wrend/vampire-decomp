// CAI_Pathfinder (RTTI .?AVCAI_Pathfinder@@, vtable 0x1049a134, 3 slots): the NPC's pathfinder (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"
#include "CAI_MoveProbe.h"

class CBaseEntity;
class CAI_Waypoint;
class CAI_Pathfinder;

// The owning NPC as the pathfinder sees it (class not modelled here).
struct CAI_PathfinderOuter
{
	char m_pad0000[0x224];
	unsigned int m_nDebugBits;	// 0x224: bit 15 turns the triangulation overlay on
	char m_pad0228[0x5d34 - 0x228];
	CAI_Pathfinder *m_pPathfinder;	// 0x5d34
	char m_pad5d38[0x5d40 - 0x5d38];
	CAI_MoveProbe *m_pMoveProbe;	// 0x5d40
};

// The overlay helper embedded at +0x10.
struct CAI_PathfinderOverlay
{
	void sub_10306280(const float *vecStart, const float *vecApex, const float *vecEnd, AIMoveTrace_t *pStartTrace, AIMoveTrace_t *pEndTrace, char bResult);	// stub 0x1000d3ff: draws the two legs of a triangulation route
};

struct CAI_PathfinderLink;
struct CPairFields102dda40;

// A node of the AI network as the pathfinder reads it.
struct CAI_PathfinderNode
{
	char m_pad0000[0x6c];
	int m_n6c;	// 0x6c
	int m_nType;	// 0x70
	unsigned char m_fFlags;	// 0x74

	float *sub_102fb0d0(float *pOutPosition, int nHull);	// the node's position for a hull (stub 0x1000d99a); returns pOutPosition
	char sub_102f98d0();	// stub 0x1000c3ba: whether the node is a route link node (the waypoint chain marks the join of two of them)
};

// The node list of the network (count, then the node pointers).
struct CAI_PathfinderNetwork
{
	int m_nNodes;	// 0x00
	CAI_PathfinderNode **m_ppNodes;	// 0x04

	int sub_102f3c10(void *pNPC, const float *pPosition);	// stub 0x1000827e: the node nearest to the position for the NPC (-1 when none)
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

	char sub_10300140(int a, int b, int c, int d, int e);	// stub 0x10010fc8, called by CAI_Navigator::sub_102ee300; the result is tested (true when the route can be built)
	CAI_Waypoint *sub_10304e00(int a1, void *pRoute, int a3, int a4, int a5, const float *pOrigin, int a7, int a8);	// stub 0x10004507 (ret 0x20): builds the node route from the route record the check filled in
	CAI_Waypoint *sub_103055b0(int a1, int a2, int a3, int a4, int a5, int a6);	// "CAI_Pathfinder_BuildExtrapolationNodeRoute" (ret 0x18): profiler scope, sub_10300140([this+4], a2, a4, a5, route) then sub_10304e00(a1, route, a3, 0, 0, zero vector, 0, a6); 0 when the check fails
	void sub_102ee970();	// copies the NPC's field at +0x156c and the global at 0x1070b228 + 4 into m_unk08 / m_unk0c, then the network's nearest node query for the NPC's position (vfunc220)
	bool sub_103058c0(int navType, const float *vecStart, const float *vecApex, const float *vecEnd, const CBaseEntity *pTarget, AIMoveTrace_t *pStartTrace, unsigned int collisionMask);	// "CAI_Pathfinder::TestTriangulationRoute": true when the probe can move from the start to the apex and from there to the end
	bool sub_102fce80(int moveType, CAI_PathfinderLink *pLink);	// "CAI_Pathfinder::IsLinkStillStale": false without the stale bit (bit 0 of +0x64) or once the stale time (+0x68) has passed (the bit is cleared); at most one route check per frame (time at +0x14, hull type at +0x8): CheckStaleRoute(position of the node +4, of the node +8, moveType) - when it passes the bit is cleared and false returned, else true
	bool sub_102ff960(CPairFields102dda40 *pLink, int startID);	// "CAI_Pathfinder::IsLinkUsable": false for a link that is off, that the NPC cannot use (move types of its hull and capabilities), whose end is unusable, whose jump is illegal or that is still stale
	bool sub_10304a40(const float *vecStart, const float *vecEnd, int moveTypes);	// "CAI_Pathfinder::CheckStaleRoute" (stub 0x10005d6c)
	bool sub_103048d0(int navType, const float *vecStart, const float *vecEnd);	// the ground route check of CheckStaleRoute: a straight probe move (100% stand checks), else a triangulation (shortened by the distance already free) with the obstruction's own mask
	bool sub_103059d0(int a1, int a2, int a3, int a4, int a5, float *pOutApex, int a7, int a8);	// "CAI_Pathfinder::Triangulate" (stub 0x10010546): looks for a triangulation apex and stores it in pOutApex; false when there is none
	bool sub_103059d0(int a1, const float *vecStart, const float *vecEnd, float flDist, int a5, float *pOutApex, int a7, int a8);	// the same function as the sub_103059d0 above with the argument types its caller 0x103048d0 passes
	CAI_Waypoint *sub_10304020(int a1, const float *pEndPosition, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);	// "CAI_Pathfinder::BuildTriangulationRoute": triangulates (sub_103059d0) and, when there is an apex, builds the two waypoints (the end position and the apex, the end waypoint chained after it) and returns the apex waypoint; 0 when the triangulation fails (ret 0x28: ten stack arguments)
	CAI_Waypoint *sub_10303740(int navType, const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int nodeTargetType, int flYaw, int a9);	// "CAI_Pathfinder::BuildSimpleRoute": for the node nodeID (any when -1) of the target type, when the probe can move from the start to the end a one waypoint route to the end position; 0 otherwise (ret 0x24: nine stack arguments)
	CAI_Waypoint *sub_10303c90(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int a6, int flYaw, int a9);	// BuildSimpleRoute with nodeTargetType 2 and navType 1 (ret 0x20)
	CAI_Waypoint *sub_10303cd0(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int a6, int flYaw, int a9);	// BuildSimpleRoute with nodeTargetType 4 and navType 3 (ret 0x20)
	char sub_102f1900(int nodeNum, unsigned int collisionMask);	// "CAI_Pathfinder::CanFitAtNode": DevMsg "CanFitAtNode() called with no network!" without a network; for air nodes (type 2) and for climb nodes with a flag of 0x1d (type 4) the probe's stand check at the node's position must pass, then the hull test sub_102f1a20 at that position
	char sub_102f1a20(const float *vecPosition, unsigned int collisionMask);	// the hull fit test at a position (stub 0x10008706)
	int sub_102fcab0(CAI_PathfinderNode **ppNodes, int nNode, int nLink);	// stub 0x100114c3
	CAI_Waypoint *sub_102fcbd0(int *pNext, int nNode);	// builds a chain of waypoints along pNext starting at nNode (ret 8)
	CAI_Waypoint *sub_102fcd00(int *pNext, int nNode);	// the same chain with route link marking: a node joined to the previous waypoint's node by two route link nodes gets the waypoint flags 0x20 (ret 8)
};
