// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103da540 size=0x7e
#include "CTriggerWWZone.h"
#include "ScopeTrace.h"
void CTriggerWWZone::vfunc113()
{
	ScopeTrace trace("CTriggerWWZone::Activate", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	sub_100113a6();
	sub_1000dfd0();
}
// END FUNCTION

// FUNCTION: 0x103da660 size=0x9b
#include "ScopeTrace.h"
#include "CBaseTrigger.h"
#include "CTriggerWWZone.h"

struct CGlobalVarsX { char pad[0xc]; float curtime; };
extern CGlobalVarsX *g_1070b228;
void sub_10015b68();

// TARGET: CTriggerWWZone::vfunc119
void CTriggerWWZone::vfunc119()
{
	ScopeTrace trace("CTriggerWWZone::Kill", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
	((CBaseTrigger *)this)->sub_101c4dd0();
	sub_100ac4e0((int)sub_10015b68, 0, 0);
	*(float *)((char *)this + 0x17c) = g_1070b228->curtime + 1.0f;
}
// END FUNCTION

// FUNCTION: 0x103dbf50 size=0xb2
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
