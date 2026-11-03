// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103da3e0 size=0x6
#include "datamap.h"
#include "CTriggerWWZone.h"
namespace lifted {
extern char g_1065f7ac;
}
datamap_t * CTriggerWWZone::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065f7ac);
}
// END FUNCTION

// FUNCTION: 0x103da540 size=0x7e
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CTriggerWWZone.h"
#include "ScopeTrace.h"
void CTriggerWWZone::vfunc113()
{
	ScopeTrace trace("CTriggerWWZone::Activate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100113a6();
	sub_1000dfd0();
}
// END FUNCTION

// FUNCTION: 0x103da5e0 size=0x5a
#include "CTriggerWWZone.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
void CTriggerWWZone::vfunc251()
{
	if (!m_n5ac) {
		sub_103da730();
		sub_103daa30();
	}
	const char *pszName = m_pszName5b0;
	if (!pszName)
		pszName = g_106b8540;
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pEnt)
		m_h5b4 = *(unsigned int *)pEnt->vfunc1();
	else
		m_h5b4 = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x103da660 size=0x9b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseTrigger.h"
#include "CTriggerWWZone.h"

void sub_10015b68();

// TARGET: CTriggerWWZone::vfunc119
void CTriggerWWZone::vfunc119()
{
	ScopeTrace trace("CTriggerWWZone::Kill", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseTrigger *)this)->sub_101c4dd0();
	sub_100ac4e0((int)sub_10015b68, 0, 0);
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x103dbf50 size=0xb2
#include "utlmemory.h"
#include "utlrbtree.h"
#include "utlvector.h"
#include "CTriggerWWZone.h"
#include "CDoorEventList.h"

extern "C" __declspec(dllimport) void __cdecl Plat_Free(void *);
void sub_100aa7b0(void *pEnt);

struct CUtlMemoryView
{
	int *m_pMemory;
	int m_nAlloc;
	int m_nGrow;

	void Purge()
	{
		if (m_nGrow != -1) {
			if (m_pMemory) {
				Plat_Free(m_pMemory);
				m_pMemory = 0;
			}
			m_nAlloc = 0;
		}
	}
	~CUtlMemoryView() { Purge(); }
};

struct CUtlVectorView
{
	CUtlMemoryView m_Memory;
	int m_Size;
	int *m_pElements;

	void Purge()
	{
		m_Size = 0;
		m_Memory.Purge();
		m_pElements = m_Memory.m_pMemory;
	}
	~CUtlVectorView() { Purge(); }
};

CTriggerWWZone *CTriggerWWZone::vfunc5(unsigned char flags)
{
	((CUtlVectorView *)&m_pHandles)->~CUtlVectorView();
	((CDoorEventList *)((char *)this + 0x580))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x568))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x4bc))->sub_100cd2d0();
	((CDoorEventList *)((char *)this + 0x4a4))->sub_100cd2d0();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
