// CTraceFilterSimple (RTTI .?AVCTraceFilterSimple@@): base CTraceFilter/ITraceFilter at +0 (2 vtable slots).
// Only what decompiled code needs.
#pragma once

class CTraceFilterSimple
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity
	virtual int vfunc1();	// GetTraceType

	CTraceFilterSimple(void *pPassEnt, int collisionGroup);	// 0x101d3190 (stub 0x1000bd7f)
	bool sub_101d31c0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity called directly (stub 0x100149a7)

	void *m_pPassEnt;	// +4
	int m_collisionGroup;	// +8
};

class CDisciplineProjectileTraceFilter : public CTraceFilterSimple
{
public:
	void *m_pIgnore;	// +0xc
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: the base's answer for the ignored entity, false for any other
};
