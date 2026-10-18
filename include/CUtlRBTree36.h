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

	unsigned short sub_10046930(const void *search) const;	// "CUtlRBTree::Find"
	void sub_100498c0(unsigned short i, unsigned short parent, bool isLeft);	// "CUtlRBTree::LinkToParent" (with InsertRebalance inlined)

	const Links_t &sub_10009b51(unsigned short i) const;	// out-of-line Links()
	bool sub_10009999(unsigned short i) const;	// IsLeftChild
	void sub_10004e26(unsigned short i);	// RotateRight
	void sub_10013836(unsigned short i);	// RotateLeft

	unsigned short Parent(unsigned short i) const { return sub_10009b51(i).m_Parent; }
	bool IsLeftChildInl(unsigned short i) const { return sub_10009b51(Parent(i)).m_Left == i; }
	bool IsRightChildInl(unsigned short i) const { return sub_10009b51(Parent(i)).m_Right == i; }
};
