// CTraceFilterFVisible (RTTI .?AVCTraceFilterFVisible@@): CTraceFilterSimple -> CTraceFilter -> ITraceFilter.
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterFVisible : public CTraceFilterSimple
{
public:
	CTraceFilterFVisible(void *pPassEnt, int collisionGroup);  // 0x101075e0
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: false when the entity's sub_100a91f0 says so, else CTraceFilterSimple's
};
