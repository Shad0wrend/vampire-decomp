// CTraceFilterAgainstEntityList (RTTI .?AVCTraceFilterAgainstEntityList@@): the ITraceFilter whose ShouldHitEntity
// answers false for the entities in its list (a data pointer at +4, the element count at +0x10). Only what decompiled
// code needs; the base ITraceFilter is not modelled yet (its vptr is at +0).
#pragma once
#include "ITraceFilter.h"

class CTraceFilterAgainstEntityList : public ITraceFilter
{
public:
	virtual bool vfunc0(void *pEntity, int contentsMask);	// ShouldHitEntity: true when pEntity is one of the list's entries (searched from the last one back), false otherwise
	virtual int vfunc1();

	int *m_pEntities;	// 0x04
	char m_pad0008[0x10 - 0x08];
	int m_nEntities;	// 0x10
};
