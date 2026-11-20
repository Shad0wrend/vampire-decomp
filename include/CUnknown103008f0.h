// CUnknown103008f0: the pathfinder component of an NPC (the object at +0x5d3c of the NPC; real name not yet known).
// A CAI_Component like the navigator: vptr, owner at +4, the two per-frame stamps at +8 / +0xc.
#pragma once

#include "CAI_Navigator.h"

class CUnknown103008f0 : public CAI_Component
{
public:
	CUnknown103008f0() : CAI_Component(0) {}

	int sub_103008f0(const Vector *pPosition, float flDistance, int c);	// "FindBackAwayNode" (stub 0x10004697): the index of the graph node to back away to, -1 when there is none
	int sub_10300b50(class CBitString *pVisited, const Vector *pPosition, float flDistanceSqr, int c, int iTarget, const Vector *pOrigin, int iNearest, Vector *pNodePos);	// stub 0x10003d69: the search worker of sub_103008f0 (ret 0x20)
	int sub_10301010(const Vector *pPosition, float flDistance, int c);	// "FindBackAwayNodeAStar" (stub 0x10002fea): same contract as sub_103008f0, searching with A*
	int sub_10301720(const Vector *pPosition, float flDistance, int c, int d, int e);	// the five argument variant of the node search (stub 0x10010357): the index of the graph node, -1 when there is none
	int sub_10302320(const Vector *pPosition, float flDistance, int c, int d, int e, int f);	// the six argument variant of the node search (stub 0x100094a3): the index of the graph node, -1 when there is none
};
