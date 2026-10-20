// CTraceFilterEntityIgnoreOther (RTTI .?AVCTraceFilterEntityIgnoreOther@@, vftable 0x10482f90): a CTraceFilterEntity
// that also ignores one more entity. Only what decompiled code needs.
#pragma once

#include "CTraceFilterEntity.h"

class CTraceFilterEntityIgnoreOther : public CTraceFilterEntity
{
public:
	void *m_pIgnore;	// +0x10

	CTraceFilterEntityIgnoreOther(void *pPassEnt, void *pIgnore, int collisionGroup) : CTraceFilterEntity(pPassEnt, collisionGroup)
	{
		m_pIgnore = pIgnore;
	}
};
