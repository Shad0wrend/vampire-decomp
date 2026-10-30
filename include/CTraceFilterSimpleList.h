// CTraceFilterSimpleList (RTTI .?AVCTraceFilterSimpleList@@): CTraceFilterSimple with five more dwords
// (the list's fields, zeroed by its constructor 0x101d33a0).
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterSimpleList : public CTraceFilterSimple
{
public:
	CTraceFilterSimpleList(int collisionGroup);	// 0x101d33a0
	int m_i0c;
	int m_i10;
	int m_i14;
	int m_i18;
	int m_i1c;
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// ShouldHitEntity: its own (0x101d33e0)
};
