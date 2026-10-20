// CTraceFilterSimple (RTTI .?AVCTraceFilterSimple@@): base CTraceFilter/ITraceFilter at +0 (2 vtable slots).
// Only what decompiled code needs.
#pragma once

class CTraceFilterSimple
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity
	virtual int vfunc1();	// GetTraceType

	CTraceFilterSimple(void *pPassEnt, int collisionGroup);	// 0x101d3190 (stub 0x1000bd7f)

	void *m_pPassEnt;	// +4
	int m_collisionGroup;	// +8
};
