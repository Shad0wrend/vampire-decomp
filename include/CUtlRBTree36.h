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
		Links_t()
		{
			m_Tag = 1;
			m_Left = 0xffff;
			m_Right = 0xffff;
			m_Parent = 0xffff;
		}
	};
	struct Node_t : Links_t
	{
		char m_Data[28];
	};

	bool (*m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;
	int m_unkC;
	unsigned short m_Root;
	unsigned short m_NumElements;

	const Links_t &Links(unsigned short i) const
	{
		static Links_t s_Sentinel;
		const Links_t &node = m_pElements[i];
		return i != 0xffff ? node : s_Sentinel;
	}

	unsigned short sub_10046930(const void *search) const;	// "CUtlRBTree::Find"
};
