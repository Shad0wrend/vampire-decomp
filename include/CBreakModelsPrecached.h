// CBreakModelsPrecached (RTTI .?AVCBreakModelsPrecached@@): base CAutoGameSystem (GameSystemRoot.h) and the rb-tree of
// precached break model names at +0x8 (Source's CUtlRBTree<char *, unsigned short>; CUtlRBTree12.h is the view the
// matched vfunc5 walks it through).
#pragma once

#include "GameSystemRoot.h"
#include "utlrbtree.h"
#include "CUtlRBTree12.h"

bool sub_101918e0(char **a, char **b);	// the tree's less function (stub-less, matched)

class CBreakModelsPrecached : public CAutoGameSystem
{
public:
	CBreakModelsPrecached() { m_modelList.SetLessFunc((CUtlRBTree<char *, unsigned short>::LessFunc_t)sub_101918e0); }

	virtual void vfunc5();	// 0x10191920: resets the tree: chains every element into the free list
	void *vfunc8(unsigned int flags);	// slot 8 (0x101919e0) written out: the scalar deleting destructor

	CUtlRBTree<char *, unsigned short> m_modelList;	// 0x08
};
