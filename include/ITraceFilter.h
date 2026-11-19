// ITraceFilter / CTraceFilter: Source's trace filter interface and its common base (public/engine/IEngineTrace.h).
// ITraceFilter (RTTI .?AVITraceFilter@@) and CTraceFilter (.?AVCTraceFilter@@) have no vtable of their own in the
// game: VC6 drops their vptr stores, which the derived class's store overwrites at once.
#pragma once

class ITraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask) = 0;	// slot 0: ShouldHitEntity
	virtual int vfunc1() = 0;	// slot 1: GetTraceType
};

class CTraceFilter : public ITraceFilter
{
public:
	virtual int vfunc1();	// slot 1: GetTraceType, TRACE_EVERYTHING: 0x10107610, every CTraceFilter's slot 1 (its matched
	//                          block defines it as CTraceFilterNoCharacterCollide::vfunc1; the symbol map has both names)
};
