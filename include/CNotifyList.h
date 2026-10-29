// CNotifyList (RTTI .?AVCNotifyList@@): bases INotify at +0x0 and IEntityListener at +0x4; keeps (listener, entity) pairs
// (8 bytes each) of the entities that asked to be notified.
#pragma once

#include "CUnknown100f97b0.h"

class CBaseEntity;

class CNotifyList
{
public:
	virtual void *vfunc0(CBaseEntity *pNotify, CBaseEntity *pWatched);	// "AddEntity": flags pWatched (bit 6 of +0x268), appends the (pNotify, pWatched) pair and returns it
	virtual void vfunc1();
	virtual void vfunc2(CBaseEntity *pEntity, const char *pszEvent);	// "ReportNamedEvent": for every pair registered for pEntity (only when bit 6 of its flags at +0x268 is set) calls the listener's AcceptInput(pszEvent, pEntity, pEntity, an empty variant, 0)
	virtual void vfunc3();
	virtual void vfunc4(CBaseEntity *pEntity);	// "RemoveEntity": removes every pair that names pEntity (by copying the last pair over it)

	void *m_pEntityListenerVtbl;	// 0x04
	CUnknown100f97b0 m_pairs;	// 0x08: memory of the pairs
	int m_nAlloc;	// 0x0c
	int m_nGrow;	// 0x10
	int m_nPairs;	// 0x14
};
