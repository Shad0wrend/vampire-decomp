// CUtlMap16: a CUtlMap whose CUtlRBTree (16-byte nodes: 8-byte links, 8-byte key / element pair) sits at +0x40; the
// class around it is not known yet. Declared flat; only Insert is known.
#pragma once

#include "CUtlRBTree16.h"

// The tree of the map: CUtlRBTree16 followed by the less-function context (copied to a global before each search).
class CUtlRBTree16Ctx : public CUtlRBTree16
{
public:
	void *m_pLessContext;	// 0x18
};

class CUtlMap16
{
public:
	char m_pad0000[0x40];
	CUtlRBTree16Ctx m_Tree;	// 0x40

	void sub_10044db0(unsigned int key, unsigned int elem);	// "CUtlMap::Insert": publishes the less context, finds the insertion position, takes a node (free list or growth), links it into the tree (stub 0x100076e4) and stores the (key, element) pair in it
	void sub_10044f60(unsigned int key, unsigned int elem);	// same shape as sub_10044db0 (another instance)
};
