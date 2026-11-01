// CBaseFilter (RTTI CBaseFilter : CLogicalEntity : CBaseEntity), vtable 0x1045b1c4, size 0x484.
// Constructor: CBaseEntity(0), CLogicalEntity vftable, the two outputs, CBaseFilter vftable.
#pragma once

#include "CLogicalEntity.h"
#include "COutputEvent.h"

struct inputdata_t;

class CBaseFilter : public CLogicalEntity
{
public:
	CBaseFilter() {}
	CBaseFilter *vfunc5(unsigned int flags);
	void sub_10107860(inputdata_t *pInput);	// "InputTestActivator" input handler: slot 241 (PassesFilterImpl) of the input's activator, inverted by m_bNegated, fires m_OnPass or m_OnFail (activator = the input's activator, caller = this)

	char m_bNegated;	// 0x450
	char m_pad0451[3];
	COutputEvent m_OnPass[1];	// 0x454 (an array of one so that the old (COutputEvent *)m_OnPass casts still compile)
	COutputEvent m_OnFail[1];	// 0x46c
public:
	virtual datamap_t *vfunc82();
	virtual bool vfunc241(CBaseEntity *pEntity);
};
