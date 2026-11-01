// CLogicBranch: logic_branch (RTTI CLogicBranch : CLogicalEntity), vtable 0x10468d54, size 0x484.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the two COutputEvent constructors, own vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CLogicBranch : public CLogicalEntity
{
public:
	CLogicBranch *vfunc5(unsigned int flags);
	virtual datamap_t * vfunc82();

	char m_pad0450[4];	// CLogicalEntity.h ends at 0x450 but the outputs start at 0x454
	COutputEvent m_Out454;	// 0x454 (names unknown: the branch's two outputs, e.g. OnTrue / OnFalse)
	COutputEvent m_Out46c;	// 0x46c
};
