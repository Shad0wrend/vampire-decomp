// CUtlRBTree16: Source's CUtlRBTree with 16-byte nodes (8-byte links, 8-byte element), a less-func pointer first.
#pragma once

class CUtlRBTree16
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
		char m_Data[8];
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

	unsigned short Parent(unsigned short i) const { return Links(i).m_Parent; }

	bool sub_10047840(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
	bool sub_1004a2a0(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_1004ae60(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_1024a980(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_10314000(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_10314b30(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_100483f0(unsigned short i) const;	// "CUtlRBTree::IsRightChild"
	bool sub_1004ba20(unsigned short i) const;	// same as sub_100483f0 (another instance)
	bool sub_1004bf70(unsigned short i) const;	// same as sub_100483f0 (another instance)
	bool sub_10315080(unsigned short i) const;	// same as sub_100483f0 (another instance)
	unsigned short sub_1024a310();	// "CUtlRBTree::NewNode": takes the free list head or grows the node memory (first allocation 2 elements)
	unsigned short sub_103134b0();	// same as sub_1024a310 (another instance)
};
