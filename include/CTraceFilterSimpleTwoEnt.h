// CTraceFilterSimpleTwoEnt: trace filter that ignores up to two pass entities (ITraceFilter at +0, two vtable slots).
#pragma once

class CTraceFilterSimpleTwoEnt
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity
	virtual int vfunc1();	// GetTraceType

	int m_collisionGroup;	// +4
	void *m_pPassEnt;	// +8
	void *m_pPassEnt2;	// +0xc
};
