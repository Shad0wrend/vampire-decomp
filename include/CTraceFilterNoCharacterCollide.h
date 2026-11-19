// CTraceFilterNoCharacterCollide (RTTI .?AVCTraceFilterNoCharacterCollide@@, primary vtable 0x104d28d4, 2 slots):
// a bare trace filter (just the vtable pointer) that only hits entities whose dword at +0x9c is zero (slot 0).
#pragma once
#include "ITraceFilter.h"

class CTraceFilterNoCharacterCollide : public CTraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity (sub_103e1930)
	virtual int vfunc1();	// GetTraceType: 0x10107610 is matched under this name; CTraceFilter::vfunc1 names it too
};
