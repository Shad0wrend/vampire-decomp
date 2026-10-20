// CNotifyList (RTTI .?AVCNotifyList@@): bases INotify at +0x0 and IEntityListener at +0x4; keeps (listener, entity) pairs
// (8 bytes each) of the entities that asked to be notified.
#pragma once

#include "CUnknown100f97b0.h"

class CBaseEntity;

class CNotifyList
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CBaseEntity *pEntity, int a);	// "ReportNamedEvent"-like: for every pair registered for pEntity (only when bit 6 of its flags at +0x268 is set) hands the event to the listener's slot 118
	virtual void vfunc3();
	virtual void vfunc4();

	void *m_pEntityListenerVtbl;	// 0x04
	CUnknown100f97b0 m_pairs;	// 0x08: memory of the pairs
	int m_nAlloc;	// 0x0c
	int m_nGrow;	// 0x10
	int m_nPairs;	// 0x14
};
