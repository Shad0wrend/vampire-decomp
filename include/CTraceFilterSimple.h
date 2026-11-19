// CTraceFilterSimple (RTTI .?AVCTraceFilterSimple@@): base CTraceFilter/ITraceFilter at +0 (2 vtable slots).
// Only what decompiled code needs.
#pragma once
#include "ITraceFilter.h"

class CTraceFilterSimple : public CTraceFilter
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity

	CTraceFilterSimple(void *pPassEnt, int collisionGroup);	// 0x101d3190 (stub 0x1000bd7f)
	bool sub_101d31c0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity called directly (stub 0x100149a7)

	void *m_pPassEnt;	// +4
	int m_collisionGroup;	// +8
};

class CDisciplineProjectileTraceFilter : public CTraceFilterSimple
{
public:
	void *m_pIgnore;	// +0xc
	void *m_pProjectile;	// +0x10: the pass entity dynamic_cast to CDisciplineProjectile
	CDisciplineProjectileTraceFilter(void *pPassEnt, int collisionGroup, void *pIgnore);	// inline in the game (0x101da2f0): base ctor, m_pIgnore, __RTDynamicCast
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: the base's answer for the ignored entity, false for any other
	virtual int vfunc1();	// slot 1: GetTraceType, TRACE_ENTITIES_ONLY (2): 0x101da760
	virtual ~CDisciplineProjectileTraceFilter() {}	// slot 2 (its body is vfunc2 below)
	void *vfunc2(char flags);	// slot 2: the scalar deleting destructor (vftable store, operator delete when bit 0, returns this)
};

class CTraceFilterNoOwnerTest : public CTraceFilterSimple
{
public:
	void *m_pOwner;	// +0xc
	CTraceFilterNoOwnerTest(void *pOwner) : CTraceFilterSimple(0, 0), m_pOwner(pOwner) {}
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: false for the owner, else the base's answer
};
