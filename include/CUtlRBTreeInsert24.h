// CUtlRBTreeInsert24: a CUtlRBTree with 24-byte nodes (int indices, 16-byte links, 8-byte element) and a less function.
#pragma once

#include "CUtlRBTree24.h"	// CUtlRBTree24At: the links of each instance

class CUtlRBTreeInsert24
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

	bool (__cdecl *m_LessFunc)(const void *, const void *);
	Node_t *m_pElements;
	int m_unk8;
	int m_unkC;
	int m_Root;

	static int InvalidIndex() { return -1; }

	void sub_10054ad0(const void *insert, int *parent, bool *leftchild);	// \"CUtlRBTree::FindInsertionPosition\"
};
