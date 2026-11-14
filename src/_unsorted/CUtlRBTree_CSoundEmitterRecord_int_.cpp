// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101b66e0 size=0x197
#include "CHumanoidRec.h"
#include "utlvector.h"
// TARGET: ?Insert@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEHABUCSoundEmitterRecord@@@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"

template <>
inline CSoundEmitterRecord &CUtlRBTree<CSoundEmitterRecord, int>::Element(int i)
{
	return m_Elements.m_pMemory[i].m_Data;
}

template <>
inline int CUtlRBTree<CSoundEmitterRecord, int>::NewNode()
{
	int newElem;

	// nothing in the free list; add
	if (m_FirstFree == InvalidIndex()) {
		if (m_Elements.NumAllocated() == m_TotalElements)
			m_Elements.Grow();
		newElem = m_TotalElements++;
	} else {
		newElem = m_FirstFree;
		m_FirstFree = RightChild(m_FirstFree);
	}

	Construct(&Element(newElem));

	return newElem;
}

template <>
inline void CUtlRBTree<CSoundEmitterRecord, int>::FindInsertionPosition(CSoundEmitterRecord const &insert, int &parent, bool &leftchild)
{
	// find where the node belongs
	int current = m_Root;
	parent = InvalidIndex();
	leftchild = false;
	while (current != InvalidIndex()) {
		parent = current;
		if (m_LessFunc(insert, Element(current))) {
			leftchild = true;
			current = LeftChild(current);
		} else {
			leftchild = false;
			current = RightChild(current);
		}
	}
}

template <>
inline int CUtlRBTree<CSoundEmitterRecord, int>::InsertAt(int parent, bool leftchild)
{
	int i = NewNode();
	LinkToParent(i, parent, leftchild);
	++m_NumElements;
	return i;
}

template <>
inline int CUtlRBTree<CSoundEmitterRecord, int>::Insert(CSoundEmitterRecord const &insert)
{
	// copy constructs the element in
	int parent;
	bool leftchild;
	FindInsertionPosition(insert, parent, leftchild);
	int newNode = InsertAt(parent, leftchild);
	CopyConstruct(&Element(newNode), insert);
	return newNode;
}

static int (CUtlRBTree<CSoundEmitterRecord, int>::*s_Insert)(const CSoundEmitterRecord &) = &CUtlRBTree<CSoundEmitterRecord, int>::Insert;
// END FUNCTION

// FUNCTION: 0x101b7450 size=0x3a5
#include "CSoundEmitterSystemBase.h"
// TARGET: ?LinkToParent@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXHH_N@Z
#include "utlrbtree.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_LinkToParent)(int, int, bool) = &CUtlRBTree<CSoundEmitterRecord, int>::LinkToParent;
// END FUNCTION

// FUNCTION: 0x101b7970 size=0x383
// TARGET: ?RemoveNode@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RemoveNode)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RemoveNode;
// END FUNCTION

// FUNCTION: 0x101b7f70 size=0x4da
#include "CSoundEmitterSystemBase.h"
// TARGET: ?InsertRebalance@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_InsertRebalance)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::InsertRebalance;
// END FUNCTION

// FUNCTION: 0x101b8590 size=0x8c5
// TARGET: ?RemoveRebalance@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RemoveRebalance)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RemoveRebalance;
// END FUNCTION

// FUNCTION: 0x101b9250 size=0x1f3
// TARGET: ?RotateLeft@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RotateLeft)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RotateLeft;
// END FUNCTION

// FUNCTION: 0x101b94d0 size=0x1f6
// TARGET: ?RotateLeft@?$CUtlRBTree@UCSoundEmitterRecord@@H@@QAEXH@Z
#include "utlrbtree.h"
#include "CSoundEmitterSystemBase.h"
static void (CUtlRBTree<CSoundEmitterRecord, int>::*s_RotateLeft)(int) = &CUtlRBTree<CSoundEmitterRecord, int>::RotateRight;
// END FUNCTION
