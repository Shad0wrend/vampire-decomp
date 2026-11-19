// CAI_Pathfinder (RTTI .?AVCAI_Pathfinder@@, vtable 0x1049a134, 3 slots): the NPC's pathfinder (a CAI_Component).
// Only what decompiled code needs.
#pragma once

#include "CAI_Component.h"
#include "CAI_MoveProbe.h"

void *operator new(unsigned int);

float sub_10146150(const Vector *pVec);	// VectorLength (0x10146150): the length of a vector (cdecl, result in st0)
float __stdcall sub_10300010(const Vector &vecA, const Vector &vecB, const Vector &vecDir);	// 0x10300010: dot(normalise(vecA - vecB), vecDir)
void __stdcall sub_103000a0(const Vector &vecA, const Vector &vecB, float flNumerator, float flDenominator, Vector &vecOut);	// 0x103000a0: vecOut = vecA + (vecA - vecB) * (flNumerator / flDenominator)

class CBaseEntity;
class CAI_Waypoint;
class CAI_Pathfinder;
class CAI_BaseNPC;

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
struct CAI_PathfinderOverlay	// 0x10 .. 0x17: two dwords cleared by the CAI_Pathfinder constructor
{
	CAI_PathfinderOverlay() : m_n00(0), m_n04(0) {}
	int m_n00;	// 0x10
	int m_n04;	// 0x14
	void sub_10306550();	// stub 0x100034f4
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

	char sub_102f48b0(int a, int b);
	int sub_102f3c10(void *pNPC, const float *pPosition);	// stub 0x1000827e: the node nearest to the position for the NPC (-1 when none)
};

class CAI_Pathfinder : public CAI_Component
{
public:
	CAI_Pathfinder(CAI_BaseNPC *pOuter) : CAI_Component(pOuter), m_unk0c(-1) {}	// the outer, -1 and the overlay's zeros, then the vptr store
	int m_unk08;	// 0x08
	int m_unk0c;	// 0x0c
	CAI_PathfinderOverlay m_Overlay;	// 0x10 (0x10 .. 0x17)
	static void *operator new(unsigned int) { return ::operator new(0x18); }	// the game allocates the 0x18 byte pathfinder
	char m_pad0018[0x24 - 0x18];
	CAI_MoveProbe *m_pMoveProbe;	// 0x24
	char m_pad0028[4];
	CAI_PathfinderNetwork *m_pNetwork;	// 0x2c

	char sub_10300140(int a, int b, int c, int d, int e);	// stub 0x10010fc8, called by CAI_Navigator::sub_102ee300; the result is tested (true when the route can be built)
	bool sub_102fdcc0(const float *pStart, const float *pEnd);	// "CAI_Pathfinder_HasPathOuter" (0x102fdcc0)
	CAI_Waypoint *sub_103005f0(const float *pVec, unsigned int flags, int index, int a4, int a5);	// node route from a node index (0x103005f0)
	bool sub_102fe150(int startNode, int endNode);	// "CAI_Pathfinder_HasPathInner" (0x102fe150)
	CAI_Waypoint *sub_103007e0(const float *pOrigin, unsigned int flags, int nodeIndex, int a4, int a5);
	CAI_Waypoint *sub_102ffbd0(int a, int index);
	CAI_Waypoint *sub_10304670(const Vector &vStartPos, const Vector &vCenterPos, float flRadius, float flArc, float flStepDist, bool bClockwise, int goalTolerance, bool bAirRoute, bool e);
	CAI_Waypoint *sub_10304130(const float *pLocal, const float *pOrigin, int a, int b, int c, unsigned int flags, int d, int e);
	CAI_Waypoint *sub_10304130(const float *pLocal, const float *pOrigin, int a, int b, int c, unsigned int flags, int d, bool e);
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
	bool sub_103059d0(int navType, const float *vecStart, const float *vecEnd, float flDist, const CBaseEntity *pTarget, float *pOutApex, unsigned int collisionMask, char bSkip);
	CAI_Waypoint *sub_10304020(int a1, const float *pEndPosition, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);	// "CAI_Pathfinder::BuildTriangulationRoute": triangulates (sub_103059d0) and, when there is an apex, builds the two waypoints (the end position and the apex, the end waypoint chained after it) and returns the apex waypoint; 0 when the triangulation fails (ret 0x28: ten stack arguments)
	CAI_Waypoint *sub_10303740(int navType, const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int nodeTargetType, int flYaw, int a9);	// "CAI_Pathfinder::BuildSimpleRoute": for the node nodeID (any when -1) of the target type, when the probe can move from the start to the end a one waypoint route to the end position; 0 otherwise (ret 0x24: nine stack arguments)
	CAI_Waypoint *sub_10303d10(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);	// "CAI_Pathfinder::BuildGroundRoute" (ret 0x24: nine stack arguments): only the profiler scope "CAI_Pathfinder_BuildGroundRoute" (fully inlined enter: GetSubNode with "Unaccounted", rdtsc sample, CVProfile::PushGroupInlined; exit: ExitScopeInlined) around sub_10303850(0, a1 .. a9); returns its result (kept in ebp across the exit)
	CAI_Waypoint *sub_10303850(int a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);	// stub 0x100104ba (ret 0x28: ten stack arguments), the worker behind BuildGroundRoute, not matched yet
	CAI_Waypoint *sub_10303c90(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int a6, int flYaw, int a9);	// BuildSimpleRoute with nodeTargetType 2 and navType 1 (ret 0x20)
	CAI_Waypoint *sub_10303cd0(const float *vecStart, const float *vecEnd, const CBaseEntity *pTarget, int endFlags, int nodeID, int a6, int flYaw, int a9);	// BuildSimpleRoute with nodeTargetType 4 and navType 3 (ret 0x20)
	char sub_10303fd0(const float *vecStart, const float *vecEnd, CBaseEntity *pEnt);	// stub 0x1000fe0c (ret 0xc, the first two arguments unused): true when the NPC object of pEnt (+0x94) has an edict (+0x2e0) and its slot 404 (relation to this pathfinder's outer NPC) answers 3 (D_HT?)
	char sub_102f1900(int nodeNum, unsigned int collisionMask);	// "CAI_Pathfinder::CanFitAtNode": DevMsg "CanFitAtNode() called with no network!" without a network; for air nodes (type 2) and for climb nodes with a flag of 0x1d (type 4) the probe's stand check at the node's position must pass, then the hull test sub_102f1a20 at that position
	int sub_10300b50(void *pVisited, const Vector *pA, float flMinDist, float flMaxZ, int a5, const Vector *pTarget, int nodeID, const Vector *pB);	// recursive node search (stub 0x10003d69, ret 0x20): marks nodeID in the visited bit set, walks its links to unvisited usable nodes farther from pA than pB is and closer to pTarget, returns the first node that passes (or -1)
	int sub_10003d69(void *pVisited, const Vector *pA, float flMinDist, float flMaxZ, int a5, const Vector *pTarget, int nodeID, const Vector *pB);	// the jump stub of sub_10300b50 (the recursion goes through it)
	char sub_102f1a20(const float *vecPosition, unsigned int collisionMask);	// the hull fit test at a position (stub 0x10008706)
	int sub_102fcab0(CAI_PathfinderNode **ppNodes, int nNode, int nLink);	// stub 0x100114c3
	CAI_Waypoint *sub_102fcbd0(int *pNext, int nNode);	// builds a chain of waypoints along pNext starting at nNode (ret 8)
	CAI_Waypoint *sub_102fcd00(int *pNext, int nNode);	// the same chain with route link marking: a node joined to the previous waypoint's node by two route link nodes gets the waypoint flags 0x20 (ret 8)
	float sub_102f1860(int moveType, const float *vecA, const float *vecB);	// the connection cost between two node positions for a move type (stub 0x1000d7c9): the distance, doubled for move types 2 and 8; this in ecx is the pathfinder
	int sub_10301720(const Vector *pThreatPos, const Vector *pPos, float flMinDist, float flMaxDist, CBaseEntity *pThreatEnt);	// 0x10301720 "CAI_Pathfinder::FindCover" (ret 0x14, called by CAI_Navigator::sub_102edc80 with the pathfinder's own this): the node index of a cover node, -1 when none (also -1 while the byte 0x1093408c is clear: no network). Builds a distance-ordered heap (CUnknown102f8f10 over alloca(count * 8), compare fn sub_102f3770, UtlVec8::sub_102f90e0 push, CUnknown102f9090::sub_102f9090 sift, UtlVec8::sub_102f9000 pop) and a CBitString of visited nodes over the network's nodes (m_pNetwork = this->m_pOuter's navigator +0x2c list); start node = sub_102f3c10(outer, outer slot 220 origin), DevWarning(2, "FindCover() - %s has no nearest node (%f, %f, %f)") when -1; flMaxDist 0 means 784.0f, flMinDist is clamped to flMaxDist * 0.5; the search keeps nodes whose hint (+0xa0) is usable, dist between the squared limits, then confirms the best with three sub_103021b0 traces (CTraceFilterSimpleTwoEnt(outer, pThreatEnt, 0), mask 0x2804091) from pThreatPos to the node offset by the outer's box (x/y half sizes * 1.4f), outer slot 569 / 533 queries, stores the winner in the outer's +0x5ddc hint and the global 0x10934140 (start index of the next search)
	int sub_10302320(const Vector *pNearPos, const Vector *pThreatPos, const Vector *pThreatDir, float flMinDist, float flMaxDist, CBaseEntity *pThreatEnt);	// 0x10302320 (ret 0x18, this in ecx = the pathfinder, called by CAI_Navigator::sub_102edd50): the FindCover variant of sub_10301720 with a third vector. Args at [ebp+8] pNearPos (distance of each node is measured to it, and its trace end is compared), [ebp+0xc] pThreatPos (trace start, nearest-node lookup is of the outer's slot 220 origin), [ebp+0x10] pThreatDir (copied and normalised with pfVectorNormalize; the later code reuses its arg slot and [ebp+0x14] as float scratch), [ebp+0x14] flMinDist, [ebp+0x18] flMaxDist (0 -> 784.0f; min clamped to max * 0.5), [ebp+0x1c] pThreatEnt (CTraceFilterSimpleTwoEnt(outer, pThreatEnt, 0), mask 0x2804091). Same locals as sub_10301720: heap CUnknown102f8f10 over alloca(count*8) with compare sub_102f3770, CBitString of visited nodes, globals 0x1093408c (network present byte), 0x10934144 (start index of the next search, stored at the end), 0x106c994c (counter bumped by an out-of-range node list access), +0x5ddc of the outer = the chosen hint; -1 without network / nearest node
	CAI_Waypoint *sub_102fd240(int a, int b);
	bool sub_10306f60(class CBaseEntity *pNPC, int a2, Vector *pDir, float flMaxDist, Vector *pOut);
	int sub_10301010(const Vector *pPos, float flDist, int unused);
	CAI_Waypoint *sub_102fe9f0(int a, int b, int c, int d);
	int sub_102ffca0(CAI_PathfinderOuter *pNPC, const Vector *pPos, const Vector *pDir, float flDist);	// walks from the node nearest pPos along pDir for a distance of |pDir| * flDist (the best-aligned unvisited neighbour each step); returns the last node
	CAI_Waypoint *sub_102fe9f0(int startNode, int endNode, char bRandom, int addCost);
	CAI_Waypoint *sub_102fef30(int startNode, int endNode, int *pOut);	// A* over the node providers: returns the waypoint chain from endNode back to startNode (0 without nodes or path)
	bool sub_10306700(class CBaseEntity *pEnt, const Vector *pVecStart, const Vector *pTargetPos, float flMaxDist);
};

class CBitString;
int sub_102f3270(CBitString *pBits, const float *pDist, int n);	// the index with the lowest pDist among the bits set in pBits (-1 when none); the A* node pick
extern unsigned int g_1055b298[];	// 0x1055b298: the bit-clear mask table used by the A* visited-set trim (index is the bit number % 32)

// NOTE: CAI_PathfinderOuter::m_pPathfinder (+0x5d34) is really the owning NPC's CAI_Navigator
// (CAI_BaseNPC's Owned5d34), NOT a CAI_Pathfinder. Its +0x2c is the CAI_NavProviderList used
// as the node list by the A* family (m_nCount / m_ppItems, nodes at +0x78 / +0x7c).
