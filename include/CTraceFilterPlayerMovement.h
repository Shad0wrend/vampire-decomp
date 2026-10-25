// CTraceFilterPlayerMovement (RTTI .?AVCTraceFilterPlayerMovement@@): a CTraceFilterSimple whose pass entity's owner (+0xa8) is kept at +0xc.
#pragma once
#include "CTraceFilterSimple.h"

class CTraceFilterPlayerMovement : public CTraceFilterSimple
{
public:
	CTraceFilterPlayerMovement(void *pPassEnt, int collisionGroup);	// 0x101ccec0: the CTraceFilterSimple constructor, the vftable, then the pass entity's +0xa8 (0 for a null pass entity)
	virtual bool vfunc0(void *pHandleEntity, int contentsMask);	// slot 0 (0x10004e0d)

	void *m_pOwner;	// +0x0c
};
