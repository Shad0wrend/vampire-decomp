// CLogicCase (RTTI .?AVCLogicCase@@, logic_case): compares the value of its InValue input with sixteen case values and
// fires the output of the matching one (OnDefault otherwise). Declared flat (the bases are not recovered), only the
// members the input handler needs.
#pragma once
#include "CLogicalEntity.h"

struct datamap_t;

#include "COutputEvent.h"
#include "inputdata_t.h"

class CLogicCase : public CLogicalEntity
{
public:
	const char *m_nCase[16];	// 0x450: the case values (Case01..Case16), null when unset
	COutputEvent m_OnCase[16];	// 0x490: one output per case
	COutputEvent m_OnDefault;	// 0x610: fired with the input's value when no case matches

	virtual CBaseEntity *vfunc5(unsigned int flags);	// the scalar deleting destructor: the outputs (OnDefault, then the cases from the last), the base, delete with bit 0 of flags
	void sub_1000cb8a();	// the base destructor body (stub 0x1000cb8a, function 0x1009df20)
	void sub_10134310(inputdata_t *pInput);	// "CLogicCase::InputInValue": the value as a string (the text of a string variant, "" when unset, else the variant converted to text) against the case values (case-insensitive); the first match fires its output (activator, this); no match fires OnDefault with the input's value
public:
	datamap_t * vfunc82();
	void vfunc103();
};
