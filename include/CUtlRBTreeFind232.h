// CUtlRBTreeFind232: a CUtlRBTree with 232-byte nodes (int indices, 16-byte links, 216-byte element) and a less function.
#pragma once

class CUtlRBTreeFind232
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

	bool (__cdecl *m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;
	int m_unkC;
	int m_Root;

	static int InvalidIndex() { return -1; }

	const Links_t &LinksInl(int i) const
	{
		static Links_t s_Sentinel = { InvalidIndex(), InvalidIndex(), InvalidIndex(), 1 };
		return i != InvalidIndex() ? m_pElements[i].m_Links : s_Sentinel;
	}

	int sub_101b68f0(const void *search);	// "CUtlRBTree::Find"
};
