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

	void *m_unk0;
	Node_t *m_pElements;	// 0x04 (the node memory)
	int m_nAllocationCount;	// 0x08
	int m_nGrowSize;	// 0x0c
	int m_unk10;
	int m_unk14;
	int m_FirstFree;	// 0x18
	int m_NumElements;	// 0x1c

	static int InvalidIndex() { return -1; }

	const Links_t &LinksInl(int i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

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
	int sub_10055050();	// "CUtlRBTree::NewNode": takes the first free node (or grows the node memory by one and uses the next unused one) and returns its index
};
