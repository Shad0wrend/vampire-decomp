// CUtlRBTreeNode36: a CUtlRBTree with 36-byte nodes (8 bytes of links, then data) and 16-bit indices.
#pragma once

#include "CUtlRBTree36.h"	// CUtlRBTree36At: the links of each instance

struct RBTreeNode36Links
{
	unsigned short m_Left;
	unsigned short m_Right;
	unsigned short m_Parent;
	unsigned short m_Tag;
};

struct RBTreeNode36
{
	RBTreeNode36Links m_Links;
	char m_Data[28];
};

class CUtlRBTreeNode36
{
public:
	int m_pad0;
	RBTreeNode36 *m_pElements;

	static unsigned short InvalidIndex() { return (unsigned short)~0; }

	const RBTreeNode36Links &sub_10049d20(unsigned short i) const;	// Links(i): the node's links, or a shared sentinel for InvalidIndex()
};
