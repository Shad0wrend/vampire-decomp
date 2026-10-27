// ehandle.h: Source's entity handles as the game compiled them (2004 public SDK basehandle.h / ehandle.h form), in
// the prelude: CHandle<T>::Get -> CBaseHandle::Get -> the entity list's LookupEntity, three nested inline functions,
// and CBaseHandle::Set through the entity's GetRefEHandle (slot 1). EHANDLE is CHandle<CBaseEntity>.
//
// Declare a handle member as `EHANDLE m_hTarget;` or `CHandle<CFoo> m_hFoo;` (4 bytes, the same layout as an
// `unsigned int m_hXxx`; its default constructor stores -1, as the game's constructors do) and write the Source
// expression: `m_hTarget.Get()`, `m_hTarget->vfunc12()`, `if (m_hTarget)`, `pOther == m_hTarget.Get()`,
// `m_hTarget = pEnt;` (the `p ? *p->vfunc1() : -1` store), `m_hTarget.IsValid()`.
// For a member still declared `unsigned int`, EHandle_Get(m_hXxx) in CEHandleGet.h is the same lookup.
//
// The entity list is declared inside a namespace on purpose: the judge resolves a symbol by its first name
// (g_10566458), and the namespace keeps this declaration apart from the differently typed `extern ... g_10566458`
// that matched sources declare for themselves.
#pragma once

#include "CBaseHandle.h"

class CBaseEntity;

struct EHandleEntInfo	// CEntInfo: one of the entity list's 0x2000 slots
{
	IHandleEntity *m_pEntity;
	int m_SerialNumber;
	int m_pad;
};

struct EHandleEntityList	// CBaseEntityList: the slots follow the vtable pointer
{
	void *m_vtable;
	EHandleEntInfo m_EntPtrArray[0x2000];

	// CBaseEntityList::LookupEntity: the entity in the handle's slot when the slot's serial number is the handle's
	IHandleEntity *LookupEntity(const CBaseHandle &handle) const
	{
		if (handle.m_Index == 0xffffffff)
			return 0;
		const EHandleEntInfo *pInfo = &m_EntPtrArray[handle.GetEntryIndex()];
		if (pInfo->m_SerialNumber == handle.GetSerialNumber())
			return pInfo->m_pEntity;
		else
			return 0;
	}
};

namespace EHandleDetail
{
	typedef EHandleEntInfo EntInfo;
	typedef EHandleEntityList EntityList;

	extern EntityList *g_10566458;	// g_pEntityList (the game's CGlobalEntityList)
}

inline IHandleEntity *CBaseHandle::Get() const
{
	return EHandleDetail::g_10566458->LookupEntity(*this);
}

inline const CBaseHandle &CBaseHandle::Set(const IHandleEntity *pEntity)
{
	if (pEntity)
		m_Index = *((IHandleEntity *)pEntity)->vfunc1();
	else
		m_Index = 0xffffffff;
	return *this;
}

template <class T>
class CHandle : public CBaseHandle
{
public:
	CHandle() {}
	CHandle(const CBaseHandle &handle) : CBaseHandle(handle) {}
	CHandle(T *pObj) { m_Index = 0xffffffff; Set(pObj); }

	T *Get() const { return (T *)CBaseHandle::Get(); }
	void Set(const T *pVal) { CBaseHandle::Set((const IHandleEntity *)pVal); }
	operator T *() { return Get(); }
	operator T *() const { return Get(); }
	bool operator!() const { return !Get(); }
	bool operator==(T *val) const { return Get() == val; }
	bool operator!=(T *val) const { return Get() != val; }
	const CBaseHandle &operator=(const T *val) { Set(val); return *this; }
	T *operator->() const { return Get(); }
};

typedef CHandle<CBaseEntity> EHANDLE;
