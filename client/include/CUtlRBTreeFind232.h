// CUtlRBTreeFind232: a CUtlRBTree with 232-byte nodes (int indices, 16-byte links, 216-byte element) and a less function.
#pragma once

#include "CUtlRBTree232.h"	// CUtlRBTree232At: the links of each instance

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

	int sub_10130df0(const void *search);	// "CUtlRBTree::Find"
};
