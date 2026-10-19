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

	static unsigned short InvalidIndex() { return 0xffff; }

	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

	unsigned short Parent(unsigned short i) const { return Links(i).m_Parent; }

	bool sub_10047840(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
	bool sub_1004ae60(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_10314000(unsigned short i) const;	// same as sub_10047840 (another instance)
	bool sub_10314b30(unsigned short i) const;	// same as sub_10047840 (another instance)
};
