// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1007ef00 size=0x29d
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
// TARGET: ?InsertAt@?$CUtlRBTree@UCRBEntry24@@H@@QAEHH_N@Z
#include "utlrbtree.h"
#include "CUtlRBTree24.h"

struct CRBEntry24 {
    int a;
    int b;
};

template<>
int CUtlRBTree<CRBEntry24, int>::InsertAt(int parent, bool leftchild)
{
	CUtlRBTree24 *t = (CUtlRBTree24 *)this;
	int i;
	if (m_FirstFree == -1) {
		if (m_Elements.NumAllocated() == m_TotalElements)
			m_Elements.Grow();
		i = m_TotalElements++;
	} else {
		i = m_FirstFree;
		m_FirstFree = t->RightChildB(m_FirstFree);
	}

	Links_t &node = Links(i);
	node.m_Parent = parent;
	node.m_Left = node.m_Right = -1;
	node.m_Tag = 0;
	if (parent != -1) {
		if (leftchild)
			Links(parent).m_Left = i;
		else
			Links(parent).m_Right = i;
	} else {
		m_Root = i;
	}

	int elem = i;
	while (!IsRoot(elem) && t->ColorB(t->ParentB(elem)) == 0) {
		int par = t->ParentB(elem);
		int grandparent = t->ParentB(par);
		if (t->IsLeftChildB(par)) {
			int uncle = t->RightChildB(grandparent);
			if (t->IsRedB(uncle)) {
				SetColor(par, BLACK);
				SetColor(uncle, BLACK);
				SetColor(grandparent, RED);
				elem = grandparent;
			} else {
				if (t->IsRightChildB(elem)) {
					elem = par;
					t->sub_1007fd70(elem);
					par = t->ParentB(elem);
					grandparent = t->ParentB(par);
				}
				SetColor(par, BLACK);
				SetColor(grandparent, RED);
				t->sub_1007ffc0(grandparent);
			}
		} else {
			int uncle = t->LeftChildB(grandparent);
			if (t->IsRedB(uncle)) {
				SetColor(par, BLACK);
				SetColor(uncle, BLACK);
				SetColor(grandparent, RED);
				elem = grandparent;
			} else {
				if (t->IsLeftChildB(elem)) {
					elem = par;
					t->sub_1007ffc0(elem);
					par = t->ParentB(elem);
					grandparent = t->ParentB(par);
				}
				SetColor(par, BLACK);
				SetColor(grandparent, RED);
				t->sub_1007fd70(grandparent);
			}
		}
	}
	SetColor(m_Root, BLACK);
	++m_NumElements;
	return i;
}
// END FUNCTION

// FUNCTION: 0x1007f7a0 size=0xdb
#include "utlrbtree.h"
struct CRBEntry24 { int a; int b; };
// TARGET: ?NewNode@?$CUtlRBTree@UCRBEntry24@@H@@QAEHXZ
// one member, not `template class`: that emits every member (and the sentinel) in this object
static int (CUtlRBTree<CRBEntry24, int>::*s_NewNode)() = &CUtlRBTree<CRBEntry24, int>::NewNode;
// END FUNCTION
