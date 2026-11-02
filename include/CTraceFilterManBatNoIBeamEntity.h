// CTraceFilterManBatNoIBeamEntity (RTTI .?AVCTraceFilterManBatNoIBeamEntity@@): trace filter that ignores the "lbeam*" entities.
// Bases: CTraceFilterEntity -> CTraceFilterSimple; 2 vtable slots. The game builds it as the CTraceFilterEntity
// constructor (0x101ccf50, stub 0x10008e13) followed by the vftable store 0x104bc6b0 (0x1038fb20).
#pragma once

#include "CTraceFilterEntity.h"

class CTraceFilterManBatNoIBeamEntity : public CTraceFilterEntity
{
public:
	CTraceFilterManBatNoIBeamEntity(void *pPassEnt, int collisionGroup) : CTraceFilterEntity(pPassEnt, collisionGroup) {}
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: false for entities named "lbeam*" (case-insensitive wildcard), else CTraceFilterSimple's answer
};
