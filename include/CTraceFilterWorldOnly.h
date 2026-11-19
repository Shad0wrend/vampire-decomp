// CTraceFilterWorldOnly (RTTI .?AVCTraceFilterWorldOnly@@, primary vtable 0x10450a58, 2 slots):
// a bare trace filter (just the vtable pointer, 4 bytes) that only hits the world.
// Built on the stack by CBaseEntity::vfunc227 (VPhysicsTakeDamage) right before the trace_t (ctor 0x1003ff80).
#pragma once
#include "ITraceFilter.h"

class CTraceFilterWorldOnly : public ITraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// 0x1000fbeb: ShouldHitEntity
	virtual int vfunc1();	// 0x10012a21: GetTraceType
};
