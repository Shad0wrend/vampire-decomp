// CUtlRBTree36: Source's CUtlRBTree with 36-byte nodes (8-byte links, 28-byte element), a less-func pointer first.
#pragma once

class CUtlRBTree36
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
		char m_Data[28];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;	// allocation count of the node memory
	int m_unkC;	// grow size of the node memory (-1 = external)
	unsigned short m_Root;
	unsigned short m_NumElements;
	unsigned short m_FirstFree;	// 0x14
	unsigned short m_TotalElements;	// 0x16

	static unsigned short InvalidIndex() { return 0xffff; }

	unsigned short sub_10046930(const void *search) const;	// "CUtlRBTree::Find"
	unsigned short sub_10045de0(const int *pKey);	// "CUtlRBTree::Find" for a key whose first dword is copied into a 28-byte stack key; also publishes the dword at +0x18 (when set) in the global at 0x109f0b74 first
	void sub_100498c0(unsigned short i, unsigned short parent, bool isLeft);	// "CUtlRBTree::LinkToParent" (with InsertRebalance inlined)
	bool sub_1004c4c0(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
	void sub_1004c5b0(unsigned short elem);	// "CUtlRBTree::RotateLeft"
	unsigned short sub_10049780();	// "CUtlRBTree::NewNode": takes the first free node (or grows the node memory by one and uses the next unused one) and returns its index

	const Links_t &sub_10009b51(unsigned short i) const;	// out-of-line Links()
	bool sub_10009999(unsigned short i) const;	// IsLeftChild
	void sub_10004e26(unsigned short i);	// RotateRight
	void sub_10013836(unsigned short i);	// RotateLeft

	Links_t &LinksW(unsigned short i) { return m_pElements[i].m_Links; }
	unsigned short Parent(unsigned short i) const { return sub_10009b51(i).m_Parent; }
	bool IsLeftChildInl(unsigned short i) const { return sub_10009b51(Parent(i)).m_Left == i; }
	bool IsRightChildInl(unsigned short i) const { return sub_10009b51(Parent(i)).m_Right == i; }
};

// The game has one CUtlRBTree<T, I> per element type T; CUtlRBTree36 stands for every instance with 36-byte nodes.
// Each instance keeps its own sentinel node in a function-local static of Links() (with its own guard), so a function
// of one instance reads its links through CUtlRBTree36At<the address the game keeps that instance's sentinel at>, the
// static the judge places for it (one game variable, one static: link audit E):
//	const CUtlRBTree36At<0x...> *tree = (const CUtlRBTree36At<0x...> *)this;	... tree->Links(i) ...
template <unsigned long Sentinel>
class CUtlRBTree36At : public CUtlRBTree36
{
public:
	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}
};
