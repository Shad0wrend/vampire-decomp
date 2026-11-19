// CTraceFilterNearestNode: trace filter used when looking for the nearest AI node (ITraceFilter at +0, two vtable slots).
#pragma once
#include "ITraceFilter.h"

class CTraceFilterNearestNode : public ITraceFilter
{
public:
	virtual bool vfunc0(void *pEntity, int contentsMask);	// ShouldHitEntity
	virtual int vfunc1();	// GetTraceType

	void *m_pPassEntity;	// +4: entity to ignore
	int m_collisionGroup;	// +8
	char m_bHitSolid;	// +0xc: set when an entity with a non-zero field at +0x9c was met
};
