// CTraceFilterHintLOS (RTTI .?AVCTraceFilterHintLOS@@, vtable 0x1049ae1c, 2 slots): trace filter of the hint line-of-sight checks.
#pragma once
#include "ITraceFilter.h"

class CBaseEntity;

class CTraceFilterHintLOS : public ITraceFilter
{
public:
	virtual bool vfunc0(void *pEntity, int contentsMask);	// ShouldHitEntity: the entity must collide with the pass entity (slot 91), have no object at +0x9c and its collision group (+0x368) must collide per the game rules (slot 77)
	virtual int vfunc1();	// GetTraceType

	void *m_pPassEnt;	// +4
};
