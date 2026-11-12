// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102ce150 size=0x321
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
// TARGET: ?InsertAt@?$CUtlRBTree@UCRBTree12Entry_102cfaf0@@G@@QAEGG_N@Z
#include "utlrbtree.h"
struct CRBTree12Entry_102cfaf0 { int m_n; };
typedef CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short> CTree_102ce150;

struct CTreeView_102ce150 : CTree_102ce150
{
	typedef unsigned short I;
	const Links_t &sub_10004dfe(I i) const;	// Links (out of line, sentinel)
	bool sub_1000d10c(I i) const;	// IsLeftChild
	bool sub_100133d1(I i) const;	// IsRightChild
	void sub_10014321(I i);	// RotateLeft
	void sub_100100cd(I i);	// RotateRight

	I ParentX(I i) const { return sub_10004dfe(i).m_Parent; }
	I LeftChildX(I i) const { return sub_10004dfe(i).m_Left; }
	I RightChildX(I i) const { return sub_10004dfe(i).m_Right; }
	bool IsRedX(I i) const { return (sub_10004dfe(i).m_Tag == RED); }
	NodeColor_t ColorX(I i) const { return (NodeColor_t)sub_10004dfe(i).m_Tag; }

	I NewNodeX()
	{
		I newElem;
		if (m_FirstFree == InvalidIndex()) {
			if (m_Elements.NumAllocated() == m_TotalElements)
				m_Elements.Grow();
			newElem = m_TotalElements++;
		} else {
			newElem = m_FirstFree;
			m_FirstFree = RightChildX(m_FirstFree);
		}
		return newElem;
	}
	void InsertRebalanceX(I elem)
	{
		while ( !IsRoot(elem) && (ColorX(ParentX(elem)) == RED) )
		{
			I parent = ParentX(elem);
			I grandparent = ParentX(parent);
			if (sub_1000d10c(parent))
			{
				I uncle = RightChildX(grandparent);
				if (IsRedX(uncle))
				{
					SetColor(parent, BLACK);
					SetColor(uncle, BLACK);
					SetColor(grandparent, RED);
					elem = grandparent;
				}
				else
				{
					if (sub_100133d1(elem))
					{
						elem = parent;
						sub_10014321(elem);
						parent = ParentX(elem);
						grandparent = ParentX(parent);
					}
					SetColor(parent, BLACK);
					SetColor(grandparent, RED);
					sub_100100cd(grandparent);
				}
			}
			else
			{
				I uncle = LeftChildX(grandparent);
				if (IsRedX(uncle))
				{
					SetColor(parent, BLACK);
					SetColor(uncle, BLACK);
					SetColor(grandparent, RED);
					elem = grandparent;
				}
				else
				{
					if (sub_1000d10c(elem))
					{
						elem = parent;
						sub_100100cd(parent);
						parent = ParentX(elem);
						grandparent = ParentX(parent);
					}
					SetColor(parent, BLACK);
					SetColor(grandparent, RED);
					sub_10014321(grandparent);
				}
			}
		}
		SetColor( m_Root, BLACK );
	}
	void LinkToParentX( I i, I parent, bool isLeft )
	{
		Links_t &elem = Links(i);
		elem.m_Parent = parent;
		elem.m_Left = elem.m_Right = InvalidIndex();
		elem.m_Tag = RED;
		if (parent != InvalidIndex())
		{
			if (isLeft)
				Links(parent).m_Left = i;
			else
				Links(parent).m_Right = i;
		}
		else
		{
			m_Root = i;
		}
		InsertRebalanceX(i);
	}
};

template<>
unsigned short CTree_102ce150::InsertAt( unsigned short parent, bool leftchild )
{
	CTreeView_102ce150 *v = (CTreeView_102ce150 *)this;
	unsigned short i = v->NewNodeX();
	v->LinkToParentX( i, parent, leftchild );
	++m_NumElements;
	return i;
}
// END FUNCTION

// FUNCTION: 0x102cea60 size=0x58
#include "CUtlRBTree12.h"
#include "CUtlRBTree16.h"
#include "CUtlRBTree232.h"
#include "CUtlRBTree24.h"
#include "CUtlRBTree36.h"
#include "CUtlRBTreeBig.h"
#include "CUtlRBTreeFind232.h"
#include "CUtlRBTreeInsert24.h"
#include "utlrbtree.h"

struct CRBTree12Entry_102cfaf0
{
	int m_n;
};

typedef CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short> RBTree12_102cfaf0;
typedef const RBTree12_102cfaf0::Links_t &(RBTree12_102cfaf0::*LinksPtr_t)(unsigned short) const;

// TARGET: CUtlRBTree<CRBTree12Entry_102cfaf0,unsigned short>::Links
LinksPtr_t g_linksForce = &RBTree12_102cfaf0::Links;
// END FUNCTION

// FUNCTION: 0x102ceae0 size=0x36c
#include "utlrbtree.h"

struct CRBTree12Entry_102cfaf0
{
	int m_n;
};

// TARGET: CUtlRBTree<CRBTree12Entry_102cfaf0,unsigned short>::RemoveNode
static void (CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::*s_RemoveNode)(unsigned short) = &CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::RemoveNode;
// END FUNCTION

// FUNCTION: 0x102cf0b0 size=0x829
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCRBTree12Entry_102cfaf0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_102cfaf0 { int m_n; };
static void (CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::*s_RemoveRebalance)(unsigned short) = &CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::RemoveRebalance;
// END FUNCTION

// FUNCTION: 0x102cfaf0 size=0x1bc
// TARGET: ?RotateLeft@?$CUtlRBTree@UCRBTree12Entry_102cfaf0@@G@@QAEXG@Z
#include "utlrbtree.h"
struct CRBTree12Entry_102cfaf0 { char data[4]; };
// one member, not `template class`: that emits every member (and the sentinel) in this object
static void (CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::*s_RotateLeft)(unsigned short) = &CUtlRBTree<CRBTree12Entry_102cfaf0, unsigned short>::RotateLeft;
// END FUNCTION
