// CBreakModelsPrecached (RTTI .?AVCBreakModelsPrecached@@): an auto game system (vptr at +0x0) holding an
// rb-tree of precached break models at +0x8. Bases are not modelled; vtable slots are placeholders.
#pragma once

#include "CUtlRBTree12.h"

class CBreakModelsPrecached
{
public:
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5();	// resets the rb-tree: chains every element into the free list
	virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8();

	int m_pad0004;
	CUtlRBTree12 m_Tree;	// 0x0008
};
