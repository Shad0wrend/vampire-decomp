// CAI_Network: the AI node network (not in the game's RTTI; name from the "AI network" role of the object that
// the network manager entity keeps at +0x454). Only what recovered code needs.
#pragma once

class CAI_Network
{
public:
	int m_nNodes;	// 0x00
	void **m_ppNodes;	// 0x04
	unsigned int m_nDebugFlags;	// 0x08: the node-graph debug draw bits (sub_102f7e60): 0x1 nodes, 0x4 / 0x8 / 0x20 link groups, 0x40 trace + nearest, 0x80 sub_102d31c0, 0x100 hull boxes, 0x2 / 0x10b mask tests, 0x10000000 = draw through the graph entity (+0x10) instead; bit 28 is also cleared by CAI_NetworkManager::sub_102f50e0
	int m_nNumNodes;	// 0x0c
	void *m_pGraphEntity10;	// 0x10: the graph entity whose sub_102f5120 (CNodeGraphEntity, this in ecx) draws when bit 28 of the flags is set
	int *m_pCount14;	// 0x14: the number of entries of the worldcraft id table at +0xc

	int sub_102f6d10(int wcId);	// the node index of a worldcraft node id, -1 when unknown (called through the stub at 0x100012a8)
	int sub_102f32f0(void *pOutVec, int nMax, const float *pMins, const float *pMaxs, void *pFilter);	// "CAI_Network_ListNodesInBox" (scope string 0x106103e0): this in ecx, 5 stack args (ret 20); walks the node array (count at +0, node pointers at +4), keeps the nMax nearest nodes whose pFilter->vfunc0(node) is true and whose position at node+8/+0xc/+0x10 lies inside pMins..pMaxs (distance from pFilter->vfunc1(node)), using a CUtlPriorityQueue8, then drains it into pOutVec; returns the count
};

// The object at the global 0x10934088 (the network manager entity); it points at the network at +0x454.
struct CAI_NetworkOwner
{
	char m_pad0000[0x454];
	CAI_Network *m_pNetwork;	// 0x454
};
