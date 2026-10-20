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
	int m_unk8;
	int m_unkC;
	unsigned short m_Root;
	unsigned short m_NumElements;

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
};
