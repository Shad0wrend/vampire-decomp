// CUtlRBTree24: Source's CUtlRBTree with 24-byte nodes (int-indexed, 16-byte links, 8-byte element).
#pragma once

extern void *(*g_109f3638)(void *, int);
extern void *(*g_109f3634)(int);

class CUtlRBTree24
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
		char m_Data[8];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;	// 0x04 (the node memory)
	int m_nAllocationCount;	// 0x08
	int m_nGrowSize;	// 0x0c
	int m_Root;	// 0x10
	int m_unk14;
	int m_FirstFree;	// 0x18
	int m_NumElements;	// 0x1c

	static int InvalidIndex() { return -1; }

	Node_t &ElementAt(int i) const { return m_pElements[i]; }

	Links_t &Links(int i) { return *(Links_t *)&m_pElements[i]; }
	void SetParent(int i, int parent) { Links(i).m_Parent = parent; }
	void SetLeftChild(int i, int child) { Links(i).m_Left = child; }
	void SetRightChild(int i, int child) { Links(i).m_Right = child; }

	void GrowInl(int num)	// "CUtlMemory::Grow"
	{
		if (m_nGrowSize == -1)
			return;
		int nAllocationRequested = m_nAllocationCount + num;
		while (m_nAllocationCount < nAllocationRequested)
		{
			if (m_nAllocationCount != 0)
			{
				if (m_nGrowSize)
					m_nAllocationCount += m_nGrowSize;
				else
					m_nAllocationCount += m_nAllocationCount;
			}
			else
				m_nAllocationCount = (31 + sizeof(Node_t)) / sizeof(Node_t);
		}
		if (m_pElements)
			m_pElements = (Node_t *)g_109f3638(m_pElements, m_nAllocationCount * sizeof(Node_t));
		else
			m_pElements = (Node_t *)g_109f3634(m_nAllocationCount * sizeof(Node_t));
	}

	const Links_t &sub_10055520(int i) const;	// "CUtlRBTree::Links"
	// the SDK's accessors over the out-of-line Links above (tier1 utlrbtree.h)
	int Parent(int i) const { return sub_10055520(i).m_Parent; }
	int LeftChild(int i) const { return sub_10055520(i).m_Left; }
	int RightChild(int i) const { return sub_10055520(i).m_Right; }
	bool IsRoot(int i) const { return i == m_Root; }
	bool IsLeftChild(int i) const { return LeftChild(Parent(i)) == i; }
	bool IsRightChild(int i) const { return RightChild(Parent(i)) == i; }
	bool IsRed(int i) const { return sub_10055520(i).m_Tag == 0; }
	int Color(int i) const { return sub_10055520(i).m_Tag; }
	void SetColor(int i, int c) { Links(i).m_Tag = c; }
	int sub_10055050();	// "CUtlRBTree::NewNode": takes the first free node (or grows the node memory by one and uses the next unused one) and returns its index
	void sub_1007f250(const void *pInsert, int *pParent, bool *pLeftChild);	// "CUtlRBTree::FindInsertionPosition": walks down from the root with the less function, stores the last visited node in *pParent and whether the new element goes to its left in *pLeftChild
	void sub_10055170(int elem, int parent, bool isLeft);	// "CUtlRBTree::LinkToParent" with InsertRebalance inlined (Links stays the out-of-line sub_10055520, rotations the out-of-line sub_10055f50 / sub_100561a0)
	void sub_10055f50(int elem);	// "CUtlRBTree::RotateLeft"
	void sub_100561a0(int elem);	// "CUtlRBTree::RotateRight"
	const Links_t &sub_1007fc70(int i) const;	// "CUtlRBTree::Links" of another instance (sentinel 0x106c85b4, stub 0x10003bca)
	void sub_1007fd70(int elem);	// "CUtlRBTree::RotateLeft" of that instance
	void sub_1007ffc0(int elem);	// "CUtlRBTree::RotateRight" of that instance
};

// The game has one CUtlRBTree<T, I> per element type T; CUtlRBTree24 stands for every instance with 24-byte nodes.
// Each instance keeps its own sentinel node in a function-local static of Links() (with its own guard), so a function
// of one instance reads its links through CUtlRBTree24At<the address the game keeps that instance's sentinel at>, the
// static the judge places for it (one game variable, one static: link audit E):
//	const CUtlRBTree24At<0x...> *tree = (const CUtlRBTree24At<0x...> *)this;	... tree->Links(i) ...
template <unsigned long Sentinel>
class CUtlRBTree24At : public CUtlRBTree24
{
public:
	const Links_t &Links(int i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}
};
