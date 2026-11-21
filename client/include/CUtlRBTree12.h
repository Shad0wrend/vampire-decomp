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

		// "CUtlRBTree::IsLeftChild"
	bool sub_10138770(unsigned short i) const;	// same as sub_102eb7f0 (another instance)
	bool sub_1013ddc0(unsigned short i) const;
		// same as sub_102eb7f0 (another instance)
		// same as sub_102eb7f0 (another instance)
		// same as sub_102eb7f0 (another instance)
		// same as sub_102eb7f0 (another instance)
		// same as sub_102eb7f0 (another instance)
		// "CUtlRBTree::Find"
		// "CUtlRBTree::Find" (another instance)
		// "CUtlRBTree::NewNode": takes the free list head or grows the node memory (first allocation 3 elements)
		// same as sub_1024b9e0 (another instance)
		// "CUtlRBTree::FindInsertionPoint": walks down from the root with the less function, remembering the last node and the side
		// "CUtlRBTree::FindInsertionPoint" (another instance)
		// "CUtlRBTree::FreeNode"-like: the node's left link takes its own index, its right link the old free list head, which becomes elem
	void sub_1013d3a0(unsigned short *pOut, int pTable);	// searches for the element whose less-function key is {0xffff, 0xffff}: stores the table and this tree in two globals for the less function, writes the found index (or 0xffff) to *pOut; 0xffff when pTable is zero
	int sub_10137dd0(int key);	// "CUtlMap::Find"-like: Find(key) inlined, then the 4 byte element of a valid node, or 0
};

// The game has one CUtlRBTree<T, I> per element type T; CUtlRBTree12 stands for every instance with 12-byte nodes.
// Each instance keeps its own sentinel node in a function-local static of Links() (with its own guard), so a function
// of one instance reads its links through CUtlRBTree12At<the address the game keeps that instance's sentinel at>, the
// static the judge places for it (one game variable, one static: link audit E):
//	const CUtlRBTree12At<0x...> *tree = (const CUtlRBTree12At<0x...> *)this;	... tree->Links(i) ...
template <unsigned long Sentinel>
class CUtlRBTree12At : public CUtlRBTree12
{
public:
	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}
};
