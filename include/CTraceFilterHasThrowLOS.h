// CTraceFilterHasThrowLOS: trace filter used for throw line-of-sight checks (CTraceFilterSimple -> CTraceFilter).
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterHasThrowLOS : public CTraceFilterSimple
{
public:
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// "CTraceFilterHasThrowLOS::ShouldHitEntity": scope trace; false for an entity with any of the bits 0x83e set in its dword at +0x4c, else CTraceFilterSimple::ShouldHitEntity

	CTraceFilterHasThrowLOS *sub_103be530(int a, int b);	// constructor body: base constructor, vtable, the two fields; returns this

	int m_0c;	// 0x0c: second constructor argument
	int m_10;	// 0x10: first constructor argument
};
