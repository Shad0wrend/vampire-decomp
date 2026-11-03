// CTracePassFilter (RTTI .?AVCTracePassFilter@@), primary vtable 0x10482fa0, 2 slots; base CTraceFilter/ITraceFilter.
#pragma once

class CTracePassFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// slot 0 ShouldHitEntity (0x101cd880)
	virtual int vfunc1();	// slot 1 GetTraceType
	void *m_pPassEnt;	// +4: the entity the trace passes (the object is 8 bytes: vtable + this pointer)
};
