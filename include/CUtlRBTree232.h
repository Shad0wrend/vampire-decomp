// CUtlRBTree232: Source's CUtlRBTree with 232-byte nodes (int-indexed, 16-byte links, 216-byte element), a less-func pointer first.
#pragma once

class CUtlRBTree232
{
public:
	struct Links_t
	{
		int m_Left;
		int m_Right;
		int m_Parent;
		int m_Tag;
	};
	struct Node_t
	{
		Links_t m_Links;
		char m_Data[216];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;	// 0x04
	int m_nAllocationCount;	// 0x08
	int m_nGrowSize;	// 0x0c
	int m_Root;	// 0x10
	int m_NumElements;	// 0x14
	int m_FirstFree;	// 0x18
	int m_TotalElements;	// 0x1c

	static int InvalidIndex() { return -1; }

	Node_t &ElementAt(int i) const { return m_pElements[i]; }

	const Links_t &LinksInl(int i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? ElementAt(i).m_Links : s_Sentinel;
	}

	void sub_101b6d60(const void *pInsert, int *pParent, bool *pLeftChild);	// "CUtlRBTree::FindInsertionPosition": walks down from the root with the less function, stores the last visited node in *pParent and whether the new element goes to its left in *pLeftChild
};
