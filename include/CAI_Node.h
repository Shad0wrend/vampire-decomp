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

	void sub_102fa510();	// checks the node: a type 4 node goes to sub_102f9cd0, a type 2 node finds the first hull of the global hull mask (sub_102f9950) and, when its height is below -200, prints "Node %.0f %.0f %.0f too low" with the WC id and marks the hull in m_nHullMask; type 1 / 3 are fine, anything else prints "Bad node type!"
	void sub_102f9cd0();	// stub 0x100066fe
	void sub_102fa170();	// stub 0x100037ec
};
