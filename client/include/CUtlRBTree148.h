// CUtlRBTree148: Source's CUtlRBTree with 0x94-byte nodes (8-byte links first), element array pointer at +4.
#pragma once

class CUtlRBTree148
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
		char m_Data[0x94 - 8];
	};

	int m_unk0;
	Node_t *m_pElements;

	static unsigned short InvalidIndex() { return 0xffff; }

	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

	bool sub_100cf230(unsigned short i) const;	// "CUtlRBTree::IsLeftChild"
};
