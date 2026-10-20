// CUtlRBTree12: Source's CUtlRBTree with 12-byte nodes (8-byte links, 4-byte element), a less-func pointer first.
#pragma once

class CUtlRBTree12
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
		char m_Data[4];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;
	int m_unkC;
	unsigned short m_Root;
	unsigned short m_NumElements;
	unsigned short m_FirstFree;
	unsigned short m_TotalElements;

	static unsigned short InvalidIndex() { return 0xffff; }

	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

	bool sub_102eb7f0(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
	bool sub_10194e40(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_101c02d0(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_102cefc0(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_1024c0e0(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_102ce550(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_102ec3b0(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	unsigned short sub_10194330(const void *search) const;	// "CUtlRBTree::Find"
	unsigned short sub_102cdd10(const void *search) const;	// "CUtlRBTree::Find" (another instance)
	unsigned short sub_1024b9e0();	// "CUtlRBTree::NewNode": takes the free list head or grows the node memory (first allocation 3 elements)
	unsigned short sub_10194780();	// same as sub_1024b9e0 (another instance)
	void sub_101945f0(const void *insert, unsigned short &parent, bool &leftchild);	// "CUtlRBTree::FindInsertionPoint": walks down from the root with the less function, remembering the last node and the side
	void sub_102ce640(const void *insert, unsigned short &parent, bool &leftchild);	// "CUtlRBTree::FindInsertionPoint" (another instance)
	void sub_1024b400(unsigned short *pOut, int pTable);	// searches for the element whose less-function key is {0xffff, 0xffff}: stores the table and this tree in two globals for the less function, writes the found index (or 0xffff) to *pOut; 0xffff when pTable is zero
};
