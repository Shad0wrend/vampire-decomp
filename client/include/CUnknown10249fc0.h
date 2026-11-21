// CUnknown10249fc0: a handle to a CUtlRBTree16 instance (CUtlRBTree<CUnknown10249fc0_Entry, unsigned short>, its sentinel link lives at 0x1088ae24) that keeps a second
// container at +0x18; real name not yet known.
#pragma once

#include "CUtlRBTreeOf.h"

// the tree's element (8 bytes): the key is the dword at +4
struct CUnknown10249fc0_Entry
{
	int m_n0;
	int m_nKey;
};

struct CUnknown10249fc0_Key	// a two byte value passed by value (built through a constructor)
{
	unsigned short m_v;

	CUnknown10249fc0_Key(const unsigned short &v) : m_v(v) {}
};

class CUnknown10249fc0_Sub
{
public:
	int sub_1013d6f0(CUnknown10249fc0_Key key);	// stub 0x10002202
};

class CUnknown10249fc0_Tree : public CUtlRBTree16Of<CUnknown10249fc0_Entry>	// the CUtlRBTree<CUnknown10249fc0_Entry, unsigned short> instance (sentinel 0x1088ae24)
{
public:
	CUnknown10249fc0_Sub m_sub;	// 0x18

	const unsigned short *sub_10139320(unsigned short i);	// the data of node i (stub 0x10007ce3)
};

class CUnknown10249fc0
{
public:
	CUnknown10249fc0_Tree *m_pTree;	// 0x00

	int sub_10138e20(int nKey);	// walks the tree in order for the node whose key (the dword at +4 of its data) equals nKey and answers the sub container's answer for its data, 0 when there is none
	int sub_101390c0(unsigned short i);	// 0 when the node's first link is its own index (or i is invalid), else the sub container's answer for the node's data
};
