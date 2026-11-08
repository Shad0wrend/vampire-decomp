// CAI_Node: a node of the AI network (not in the game's RTTI); only what recovered code needs.
#pragma once

class CAI_Node
{
public:
	unsigned int m_nHullMask;	// 0x00: the hulls the node already failed for
	int m_nIndex;	// 0x04: the node's index in the network
	float m_x, m_y, m_z;	// 0x08
	float m_aHullHeight[22];	// 0x14: the node's height above the floor per hull
	int m_n6c;	// 0x6c
	int m_nType;	// 0x70: 1 ground, 2 air, 3 climb, 4 water
	int m_n74;	// 0x74
	int m_n78;	// 0x78: cleared for every node by CAI_NodeGraph::sub_102f4e00
	struct CAI_NodeLink **m_ppLinks;	// 0x7c: array of m_n78 link pointers
	int m_n80;	// 0x80: allocation count of the CUtlVector-shaped link memory at +0x7c (memory +0x7c, alloc +0x80, grow +0x84, size +0x88, elements +0x8c)
	int m_n84;	// 0x84: its grow size (-1 = the memory is not owned)
	int m_n88;	// 0x88: cleared together with m_n78 (the vector's size)
	struct CAI_NodeLink **m_ppLinks8c;	// 0x8c: the vector's debug view of m_ppLinks
	class CBitString *m_pBits;	// 0x90: the node's bit string, sized to the node count
	int m_n94;	// 0x94: set to 3 on the nodes the pass marks
	class CAI_NodeGraph *m_pGraph98;
	int m_n9c;
	int m_nA0;
	//	// 0x98: the node list (CAI_NodeGraph, count at +0, node pointers at +4) the node belongs to; a failed index check bumps the global counter 0x106c994c (read as a null node)

	void sub_102fc6b0();	// stub 0x1000358a: the destructor body / link teardown (called by SPtrList::sub_102f31f0 before the node is deleted): for every link i < m_n78 that is set and whose far end (CPairFields102dda40::sub_102dda40(m_nIndex)) has a higher index than this node, walks that node's links (the node of m_pGraph98, bounds checked) and nulls every slot whose link has m_nIndex as its source (+4) or destination (+8) end, then deletes the link and nulls the slot; then deletes the bit string (m_pBits, via sub_100bf6a0), sets m_n88 = 0 and purges the link memory (+0x7c: Plat_Free when m_n84 != -1, twice)
	void sub_102fa510();	// checks the node: a type 4 node goes to sub_102f9cd0, a type 2 node finds the first hull of the global hull mask (sub_102f9950) and, when its height is below -200, prints "Node %.0f %.0f %.0f too low" with the WC id and marks the hull in m_nHullMask; type 1 / 3 are fine, anything else prints "Bad node type!"
	void sub_102f9cd0();	// stub 0x100066fe
	void sub_102fa170();	// stub 0x100037ec
	float *sub_102fb0d0(float *pOut, int hull);	// the node position written for one hull (called by sub_102fa170 with (&local, hull)); this in ecx, ret 8; the function at 0x102fb0d0 is still unnamed
	void sub_102fac00();	// stub 0x10014ac9: second pass over every node of the graph (CAI_NodeGraph::sub_102f4e00)
	void sub_102fb4e0();	// stub 0x1000e60b: last pass over every node of the graph (CAI_NodeGraph::sub_102f4e00); "CAI_Node_InitLinks" (SDK CAI_NetworkBuilder::ComputeConnection): this = the source node (+4 index, +8 origin, +0x6c yaw, +0x70 type, +0x90 the bit set of neighbours, +0x98 the node list). For every other node i (list at +0x98, bounds checked, bumping g_106c994c): skip when already linked (CAINodeView::sub_102f96e0), share a previous link, or not neighbours (bit i of the +0x90 bit string clear); otherwise per hull (22) check "Skipping hull" (sub_102f9950 & sub_102d6210), the NPC from sub_102d74c0 is placed (sub_102d7730, sub_100b3580(1)), CanFitAtNode(0x2000b) at both nodes, then climb (type 4 both, UTIL_TraceHull + sub_102fc3d0 line-up test, link bit 8), ground / jump (a node of type 2: scope 'CAI_Node_InitLinks_Ground', MoveProbe sub_102e7270 stand checks, sub_102e4f50 walk, sub_102e7e80, jump via NPC slot 521 +0x824 and CAI_MoveProbe::sub_102e6d70 with 100.0f, link bits 1 / 2) and fly (type 3 both, trace, link bit 4); a link object (new 0x6c bytes, sub_102dda70) takes the 22 hull words at +0xc and is added by sub_102f95d0; "NO LINK" clears the neighbour bit. Debug: g_10610bec / g_10610bf0 are two node ids whose pair triggers DevMsg("")
	void sub_102fa630();	// third pass over one node (called by sub_102fac00 and CAI_NodeGraph::sub_102f4e00): traces between the node and its neighbours
};

float *__cdecl sub_101d2f40(float *pOut, float flYaw);	// 0x101d2f40 (todo): the forward vector of a yaw (z = 0), written to pOut and returned
char __cdecl sub_102fc3d0(const float *pPosA, const float *pDirB, const float *pPosC, const float *pDirD);	// 0x102fc3d0 (todo, cdecl, 4 pointers): the climb line-up test CAI_Node::sub_102fb4e0 makes between the two ladder nodes (their positions and yaw directions)
extern int g_10610bec;	// 0x10610bec: debug node id A of CAI_Node::sub_102fb4e0 (with g_10610bf0: the pair that prints an empty DevMsg)
extern int g_10610bf0;	// 0x10610bf0: debug node id B
extern int g_106c994c;	// 0x106c994c: counter bumped whenever a node index fails its bounds check (read as a null node)
