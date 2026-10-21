// CUtlRBTreeBig: Source's CUtlRBTree with very large nodes (8-byte links, 0x5f31c-byte element), a less-func pointer first.
#pragma once

class CUtlRBTreeBig
{
public:
	struct Links_t
	{
		unsigned short m_Left;
		unsigned short m_Right;
		unsigned short m_Parent;
		unsigned short m_Tag;
	};
	struct Node_t
	{
		Links_t m_Links;
		char m_Data[0x5f324 - 8];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;	// 0x08: the allocation count of the node memory
	int m_unkC;	// 0x0c: its grow size (-1 for external memory)
	unsigned short m_Root;	// 0x10
	unsigned short m_NumElements;	// 0x12
	unsigned short m_FirstFree;	// 0x14
	unsigned short m_TotalElements;	// 0x16

	static unsigned short InvalidIndex() { return 0xffff; }

	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

	bool sub_1025d2b0(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
	bool sub_1025d3a0(unsigned short i) const;	// "CUtlRBTree::IsRightChild"
	unsigned short sub_1025c6a0(const void *search);	// "CUtlRBTree::Find": index of the node equal to search, or InvalidIndex()
	void sub_1025c9d0(const void *insert, unsigned short &parent, bool &leftchild);	// "CUtlRBTree::FindInsertionPoint": walks down from the root with the less function, remembering the last node and the side
	unsigned short sub_1025c800(unsigned short parent, bool leftchild);	// "CUtlRBTree::InsertAt": NewNode (free list head, else the memory grows by one node and the next unused index is taken), constructs the element, links it below parent (the root when parent is InvalidIndex()), InsertRebalance, ++m_NumElements; returns the node index
	Links_t &sub_1025cb70(unsigned short i);	// "CUtlRBTree::Links" (out of line, with the sentinel static; stub 0x10007fdb)
	void sub_1025cbf0(unsigned short i);	// "CUtlRBTree::InsertRebalance" (stub 0x1000cc9d)
};
