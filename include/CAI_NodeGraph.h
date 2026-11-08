// CAI_NodeGraph: the node list object at +0x458 of the AI network manager entity (not in the game's RTTI): the node
// count at +0x00 and the array of node pointers at +0x04. Only what recovered code needs.
#pragma once

#include "CAI_Node.h"
#include "CUtlVector4.h"

class CAI_NodeGraph
{
public:
	int m_nNodes;	// 0x00
	CAI_Node **m_ppNodes;	// 0x04
	char m_pad0008[0x1e8 - 8];
	int m_n1e8;	// 0x1e8
	__forceinline CAI_Node *NodeAt(int i)
	{
		if (i < 0 || i >= m_nNodes)
		{
			g_106c994c++;
			return 0;
		}
		return m_ppNodes[i];
	}
	CAI_NodeGraph *sub_102f30f0();	// the constructor body: every field cleared, the float at the start of each of 20 six dword records from +0x14 set to -10.0f
	CUtlVector4 m_Counts;	// 0x1ec

	void sub_102f4e00();	// prepares the graph after loading: every node's check (sub_102fa510) and second pass (sub_102fac00), the global pass sub_102cc9f0, +0x78 of every node cleared, every node's last pass (sub_102fb4e0), the global pass sub_102f99b0, then sub_102f49c0 on the graph
	void sub_102f49c0();	// stub 0x100033d7
	void sub_102f4940(CAI_Node *pNode, int nGroup);	// stub 0x10002257: flood fill, gives the group number to the nodes linked to pNode
	void sub_102f4be0();	// marks the nodes flagged 0x20000000 (m_n74) and every node near them (squared distance below 640000, or 4194304 for climb nodes) with flag 0x10000000 and m_n94 = 3, then runs, over the marked nodes only, the check (sub_102fa510), the bit string resize (the unmarked ones: sub_100bf480 with the node count), the second pass (sub_102fac00), the global pass sub_102cc9f0, the clearing of m_n88 / m_n78 and the last pass (sub_102fb4e0)
};
