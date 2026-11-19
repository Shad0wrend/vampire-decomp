// CTraceFilterSimpleTwoEnt: trace filter that ignores up to two pass entities (ITraceFilter at +0, two vtable slots).
#pragma once
#include "ITraceFilter.h"

class CTraceFilterSimpleTwoEnt : public CTraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity

	CTraceFilterSimpleTwoEnt(const void *pPassEnt, const void *pPassEnt2, int collisionGroup);	// out of line (0x101ccd70)

	int m_collisionGroup;	// +4
	void *m_pPassEnt;	// +8
	void *m_pPassEnt2;	// +0xc
};
