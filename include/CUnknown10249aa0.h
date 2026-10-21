// CUnknown10249aa0: a thin wrapper around a CUtlRBTree16 (16-byte nodes, a key / value pair in each) that is
// searched by key (real name not yet known).
#pragma once

#include "CUtlRBTree16.h"

class CUnknown10249aa0
{
public:
	CUtlRBTree16 *m_pTree;	// 0x00

	int sub_10249aa0(unsigned int key);	// searches the tree for the key and answers the value of its node, -1 when there is none
};
