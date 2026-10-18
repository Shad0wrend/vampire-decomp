// CUtlRBTreeFind16: a CUtlRBTree with 16-byte nodes (8 bytes of links, 8 bytes of data) and 16-bit indices.
#pragma once

struct RBTreeFind16Links
{
	unsigned short m_Left;
	unsigned short m_Right;
	unsigned short m_Parent;
	unsigned short m_Tag;
};

struct RBTreeFind16Node
{
	RBTreeFind16Links m_Links;
	char m_Data[8];
};

class CUtlRBTreeFind16
{
public:
	bool (__cdecl *m_LessFunc)(const void *, const void *);
	RBTreeFind16Node *m_pElements;
	int m_pad8;
	int m_padC;
	unsigned short m_Root;

	const RBTreeFind16Links &Links(unsigned short i) const
	{
		static RBTreeFind16Links s_Sentinel = { 0xffff, 0xffff, 0xffff, 1 };
		return (i != 0xffff) ? m_pElements[i].m_Links : s_Sentinel;
	}

	unsigned short sub_10046390(const void *search);	// Find: index of the node equal to search, or 0xffff
};
