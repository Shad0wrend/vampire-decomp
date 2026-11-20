// CNotifyList (RTTI .?AVCNotifyList@@): bases INotify at +0x0 and IEntityListener at +0x4; keeps (listener, entity) pairs
// (8 bytes each) of the entities that asked to be notified.
#pragma once
#ifdef PCD_INITIALIZERS
#include "utlvector.h"	// the initializer units: the vector member is Source's CUtlVector
#endif

#include "CUnknown100f97b0.h"

class CBaseEntity;

#ifdef PCD_INITIALIZERS	// the initializer units: Source's bases (INotify's five slots, IEntityListener at +4)
class INotify
{
public:
	virtual void *vfunc0(CBaseEntity *pNotify, CBaseEntity *pWatched);
	virtual void vfunc1(CBaseEntity *pNotify, CBaseEntity *pWatched);
	virtual void vfunc2(CBaseEntity *pEntity, const char *pszEvent);
	virtual void vfunc3(CBaseEntity *pEntity, int a, int b);
	virtual void vfunc4(CBaseEntity *pEntity);
};

class IEntityListener
{
public:
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// vtable 0x10455ea0 in CNotifyList
};
#endif

class CNotifyList
#ifdef PCD_INITIALIZERS
	: public INotify, public IEntityListener
#endif
{
public:
	virtual void *vfunc0(CBaseEntity *pNotify, CBaseEntity *pWatched);	// "AddEntity": flags pWatched (bit 6 of +0x268), appends the (pNotify, pWatched) pair and returns it
	virtual void vfunc1(CBaseEntity *pNotify, CBaseEntity *pWatched);	// "RemoveListener": removes every pair equal to (pNotify, pWatched) by copying the last pair over it
	virtual void vfunc2(CBaseEntity *pEntity, const char *pszEvent);	// "ReportNamedEvent": for every pair registered for pEntity (only when bit 6 of its flags at +0x268 is set) calls the listener's AcceptInput(pszEvent, pEntity, pEntity, an empty variant, 0)
	virtual void vfunc3(CBaseEntity *pEntity, int a, int b);	// for every pair registered for pEntity (only when bit 6 of its flags at +0x268 is set) calls slot 183 of the listener with (pEntity, a, b)
	virtual void vfunc4(CBaseEntity *pEntity);	// "RemoveEntity": removes every pair that names pEntity (by copying the last pair over it)

#ifdef PCD_INITIALIZERS
	virtual void OnEntityCreated(CBaseEntity *pEntity);	// IEntityListener's slot: the game's word 0x100f8a20 is matched as the free sub_100f8a20
#endif
#ifdef PCD_INITIALIZERS	// the pairs
	CUtlVector<int> m_notifyList;	// 0x08 (SDK: CUtlVector<notifylist_t>, 8-byte pairs)
#else
	void *m_pEntityListenerVtbl;	// 0x04
	CUnknown100f97b0 m_pairs;	// 0x08: memory of the pairs
	int m_nAlloc;	// 0x0c
	int m_nGrow;	// 0x10
	int m_nPairs;	// 0x14
#endif
};
