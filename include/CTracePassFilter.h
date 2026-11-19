// CTracePassFilter (RTTI .?AVCTracePassFilter@@), primary vtable 0x10482fa0, 2 slots; base CTraceFilter/ITraceFilter.
#pragma once
#include "ITraceFilter.h"

class CTracePassFilter : public CTraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// slot 0 ShouldHitEntity (0x101cd880)
	CTracePassFilter(void *pPassEnt) : m_pPassEnt(pPassEnt) {}
	void *m_pPassEnt;	// +4: the entity the trace passes (the object is 8 bytes: vtable + this pointer)
};
