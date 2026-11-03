// CAI_Network: the AI node network (not in the game's RTTI; name from the "AI network" role of the object that
// the network manager entity keeps at +0x454). Only what recovered code needs.
#pragma once

class CAI_Network
{
public:
	char m_pad0000[0xc];
	int m_nNumNodes;	// 0x0c
	char m_pad0010[4];
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
