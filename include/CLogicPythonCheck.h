// CLogicPythonCheck: logic_pythoncheck (RTTI CLogicPythonCheck : CLogicalEntity), vtable 0x104691e4, size 0x484.
// Constructor: CLogicalEntity (CBaseEntity(0), vtable 0x104475c4), the two COutputEvent constructors, own vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct datamap_t;

class CLogicPythonCheck : public CLogicalEntity
{
public:
	CLogicPythonCheck *vfunc5(unsigned int flags);
	bool sub_10135290();	// runs the Python snippet at +0x450 in __main__ (logging it when the developer cvar is set) and returns whether the result is a non-zero int
	virtual datamap_t * vfunc82();

	const char *m_pszCode;	// 0x450
	COutputEvent m_Out454;	// 0x454 (names unknown: the check's two outputs)
	COutputEvent m_Out46c;	// 0x46c
};
