// CBaseFilter: declared by pcdecomp transplant for 0x10108530 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct inputdata_t;

class CBaseFilter
{
public:
	CBaseFilter *vfunc5(unsigned int flags);
	void sub_10107860(inputdata_t *pInput);	// "InputTestActivator" input handler: slot 241 (PassesFilterImpl) of the input's activator, inverted by m_bNegated, fires m_OnPass or m_OnFail (activator = the input's activator, caller = this)

	char m_pad0000[0x450];
	char m_bNegated;	// 0x450
	char m_pad0451[3];
	char m_OnPass[0x18];	// 0x454: a COutputEvent
	char m_OnFail[0x18];	// 0x46c: a COutputEvent
public:
	datamap_t *vfunc82();
	bool vfunc241(int);
};
