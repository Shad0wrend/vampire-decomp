// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10191920 size=0x86
#include "CBreakModelsPrecached.h"
#include "utlrbtree.h"

void CBreakModelsPrecached::vfunc5()
{
	CUtlRBTree12 *tree = (CUtlRBTree12 *)&m_Tree;
	unsigned short prev = CUtlRBTree12::InvalidIndex();
	for (int i = (int)tree->m_TotalElements; --i >= 0; ) {
		unsigned short idx = (unsigned short)i;
		((const CUtlRBTree<int, unsigned short> *)tree)->Links(idx);
		tree->m_pElements[idx].m_Links.m_Right = prev;
		tree->m_pElements[idx].m_Links.m_Left = idx;
		prev = idx;
	}
	tree->m_FirstFree = tree->m_TotalElements ? 0 : CUtlRBTree12::InvalidIndex();
	tree->m_Root = CUtlRBTree12::InvalidIndex();
	tree->m_NumElements = 0;
}
// END FUNCTION
