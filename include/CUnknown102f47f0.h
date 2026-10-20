// CUnknown102f47f0: a node list (count at +0, array of node pointers at +4, at most 0x5dc nodes);
// real name not yet known.
#pragma once

#include "CUnknown102fc5d0.h"

class CUnknown102f47f0
{
public:
	int m_nNodes;	// 0x00
	CUnknown102fc5d0 **m_pNodes;	// 0x04

	CUnknown102fc5d0 *sub_102f47f0(const float *pVec, int c);	// allocates the node array on first use, then appends a new node
};
