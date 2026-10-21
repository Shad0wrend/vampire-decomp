// CUnknown10044c20: an object that owns a CUtlRBTree36 at +0x78 (28-byte elements: a key dword and two vectors,
// ordered by the tree's less function). Its dword at +0x90 (the tree's +0x18) is published in the global at 0x109f0b74
// before every tree operation.
#pragma once

#include "Vector.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeNode36.h"

class CUnknown10044c20
{
public:
	char m_pad0000[0x78];
	CUtlRBTree36 m_Tree;	// 0x78
	int m_nTreeOwner;	// 0x90

	void sub_10044c20(const Vector *pA, const Vector *pB, unsigned int key);	// inserts (key, *pA, *pB) into the tree unless the key is 0 or already in it
};
