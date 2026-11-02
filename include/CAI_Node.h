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
	class CAI_NodeGraph *m_pGraph98;	// 0x98: the node list (CAI_NodeGraph, count at +0, node pointers at +4) the node belongs to; a failed index check bumps the global counter 0x106c994c (read as a null node)

	void sub_102fa510();	// checks the node: a type 4 node goes to sub_102f9cd0, a type 2 node finds the first hull of the global hull mask (sub_102f9950) and, when its height is below -200, prints "Node %.0f %.0f %.0f too low" with the WC id and marks the hull in m_nHullMask; type 1 / 3 are fine, anything else prints "Bad node type!"
	void sub_102f9cd0();	// stub 0x100066fe
	void sub_102fa170();	// stub 0x100037ec
	void sub_102fac00();	// stub 0x10014ac9: second pass over every node of the graph (CAI_NodeGraph::sub_102f4e00)
	void sub_102fb4e0();	// stub 0x1000e60b: last pass over every node of the graph (CAI_NodeGraph::sub_102f4e00)
};
