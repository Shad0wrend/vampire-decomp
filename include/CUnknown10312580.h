// CUnknown10312580: an object with a CUtlRBTree (16-byte nodes: 8 bytes of links, an int key and a float value) at +0x14 and
// the tree's debug name pointer at +0x2c.
#pragma once

#include "CUtlRBTree16.h"

class CUnknown10312580
{
public:
	int m_pad0[5];
	CUtlRBTree16 m_Tree;	// +0x14
	const char *m_pTreeName;	// +0x2c

	float sub_10312580(int key);	// the float stored for key, or -1.0f
	void sub_10312930(int key);	// removes the node whose key equals key (searching with the value -1.0f), if there is one
};
