// CTraceFilterEntity (RTTI .?AVCTraceFilterEntity@@): trace filter derived from CTraceFilterSimple that also
// ignores the root move parent of the pass entity. Only what decompiled code needs.
#pragma once

#include "CTraceFilterSimple.h"

class CTraceFilterEntity : public CTraceFilterSimple
{
public:
	void *m_pRootParent;	// +0xc

	CTraceFilterEntity(void *pPassEnt, int collisionGroup);
	void *sub_101cd070(void *pEnt);	// follows the parent handles (+0x25c) of pEnt up to the root entity
};
