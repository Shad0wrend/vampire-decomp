// CUnknown10044a90: an object that owns a CUtlRBTree16 at +0x1c (16-byte nodes: links, a key dword and a pointer to a
// heap-allocated CUtlVector4, ordered by the tree's less function). Its dword at +0x34 (the tree's +0x18) is published
// in the global at 0x109f0b7c before every tree operation.
#pragma once

#include "CUtlRBTree16.h"
#include "CUtlVector4.h"

class CUnknown10044a90
{
public:
	char m_pad0000[0x1c];
	CUtlRBTree16 m_Tree;	// 0x1c
	int m_nTreeOwner;	// 0x34

	void sub_10044a90(unsigned int key);	// removes the entry with that key: frees its vector and puts the node on the free list
};
