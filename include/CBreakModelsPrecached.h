// CBreakModelsPrecached (RTTI .?AVCBreakModelsPrecached@@): an auto game system (vptr at +0x0) holding an
// rb-tree of precached break models at +0x8. Bases are not modelled; vtable slots are placeholders.
#pragma once

#include "CUtlRBTree12.h"

#ifdef PCD_INITIALIZERS	// the initializer units: Source's CAutoGameSystem base and the CUtlRBTree of model names
#include "GameSystemRoot.h"
#include "utlrbtree.h"

bool sub_101918e0(char **a, char **b);	// the tree's less function (stub-less, matched)

class CBreakModelsPrecached : public CAutoGameSystem
{
public:
	virtual void vfunc5();	// 0x10191920: resets the tree

	CBreakModelsPrecached() { m_modelList.SetLessFunc((CUtlRBTree<char *, unsigned short>::LessFunc_t)sub_101918e0); }

	CUtlRBTree<char *, unsigned short> m_modelList;	// 0x08
};
#else
class CBreakModelsPrecached
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5();	// resets the rb-tree: chains every element into the free list
	virtual void vfunc6(); virtual void vfunc7(); virtual void *vfunc8(unsigned int flags);	// scalar deleting destructor

	int m_pad0004;
	CUtlRBTree12 m_Tree;	// 0x0008
};
#endif
