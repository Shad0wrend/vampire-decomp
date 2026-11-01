// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10191920 size=0x86
#include "CBreakModelsPrecached.h"
#include "utlrbtree.h"
struct CRBTree12Entry_10194f30 { char data[4]; };	// the tree of its sentinel (one T per game instance)

void CBreakModelsPrecached::vfunc5()
{
	CUtlRBTree12 *tree = (CUtlRBTree12 *)&m_Tree;
	unsigned short prev = CUtlRBTree12::InvalidIndex();
	for (int i = (int)tree->m_TotalElements; --i >= 0; ) {
		unsigned short idx = (unsigned short)i;
		((const CUtlRBTree<CRBTree12Entry_10194f30, unsigned short> *)tree)->Links(idx);
		tree->m_pElements[idx].m_Links.m_Right = prev;
		tree->m_pElements[idx].m_Links.m_Left = idx;
		prev = idx;
	}
	tree->m_FirstFree = tree->m_TotalElements ? 0 : CUtlRBTree12::InvalidIndex();
	tree->m_Root = CUtlRBTree12::InvalidIndex();
	tree->m_NumElements = 0;
}
// END FUNCTION

// FUNCTION: 0x101919e0 size=0x45
#include "CBreakModelsPrecached.h"
#include "utlmemory.h"
struct CBaseGameSystemView { void sub_1042c2c0(); };
void *CBreakModelsPrecached::vfunc8(unsigned int flags)
{
	if (m_Tree.m_unkC != -1) {
		if (m_Tree.m_pElements) {
			Plat_Free(m_Tree.m_pElements);
			m_Tree.m_pElements = 0;
		}
		m_Tree.m_unk8 = 0;
	}
	((CBaseGameSystemView *)this)->sub_1042c2c0();
	if (flags & 1)
		delete this;
	return this;
}
// END FUNCTION
