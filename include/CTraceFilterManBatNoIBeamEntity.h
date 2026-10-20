// CTraceFilterManBatNoIBeamEntity (RTTI .?AVCTraceFilterManBatNoIBeamEntity@@): trace filter that ignores the "lbeam*" entities.
// Bases: CTraceFilterEntity -> CTraceFilterSimple (modelled here as CTraceFilterSimple); 2 vtable slots.
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterManBatNoIBeamEntity : public CTraceFilterSimple
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: false for entities named "lbeam*" (case-insensitive wildcard), else CTraceFilterSimple's answer
};
