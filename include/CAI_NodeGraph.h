// CAI_NodeGraph: the node list object at +0x458 of the AI network manager entity (not in the game's RTTI): the node
// count at +0x00 and the array of node pointers at +0x04. Only what recovered code needs.
#pragma once

#include "CAI_Node.h"

class CAI_NodeGraph
{
public:
	int m_nNodes;	// 0x00
	CAI_Node **m_ppNodes;	// 0x04

	void sub_102f4e00();	// prepares the graph after loading: every node's check (sub_102fa510) and second pass (sub_102fac00), the global pass sub_102cc9f0, +0x78 of every node cleared, every node's last pass (sub_102fb4e0), the global pass sub_102f99b0, then sub_102f49c0 on the graph
	void sub_102f49c0();	// stub 0x100033d7
};
