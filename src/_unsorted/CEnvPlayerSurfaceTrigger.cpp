// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100fd620 size=0x6
#include "CEnvPlayerSurfaceTrigger.h"

extern int g_10567a68[];

// TARGET: CEnvPlayerSurfaceTrigger::vfunc82
datamap_t *CEnvPlayerSurfaceTrigger::vfunc82()
{
	return (datamap_t *)g_10567a68;
}
// END FUNCTION

// FUNCTION: 0x100fd850 size=0x9f
#include "CBaseEntity.h"
#include "CEnvPlayerSurfaceTrigger.h"
#include "CUtlVector4.h"
extern CGlobalEntityList *g_10566458;
extern CUtlVector4 g_1070906c;
extern void *vt_10457acc[];	// ??_7CEnvPlayerSurfaceTrigger@@6B@
// TARGET: CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger
CEnvPlayerSurfaceTrigger::~CEnvPlayerSurfaceTrigger()
{
	unsigned int hThis = 0xffffffff;
	hThis = *((unsigned int *(__fastcall *)(CEnvPlayerSurfaceTrigger *))vt_10457acc[1])(this);	// slot 1 (GetRefEHandle) of this class's vtable: the game calls it through the slot
	for (int i = 0; i < g_1070906c.m_size; i++) {
		unsigned int *pElem = (unsigned int *)&g_1070906c.m_pMemory[i];
		CBaseEntity *pThis = g_10566458->sub_100290c0(&hThis);
		if (g_10566458->sub_100290c0(pElem) == pThis) {
			if (i != -1) {
				g_1070906c.sub_100fdd00(i, 1);
				g_1070906c.m_size--;
			}
			break;
		}
	}
	m_OnSurfaceLeave.sub_100cd2d0();
	m_OnSurfaceEnter.sub_100cd2d0();
	sub_1009df20();
}
// END FUNCTION

// FUNCTION: 0x100fd920 size=0x1e
#include "CEnvPlayerSurfaceTrigger.h"

void sub_100aa7b0(void *p);

// TARGET: CEnvPlayerSurfaceTrigger::vfunc5
CBaseEntity *CEnvPlayerSurfaceTrigger::vfunc5(unsigned int flags)
{
	sub_100108ed();
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x100fd950 size=0x111
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CEnvPlayerSurfaceTrigger.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
#include "utlvector.h"
#include "ehandle.h"
struct CEnvPlayerSurfaceTrigger_Entry { EHANDLE m_h; };
extern CUtlVector<CEnvPlayerSurfaceTrigger_Entry> g_1070906c;

void CEnvPlayerSurfaceTrigger::vfunc103()
{
    CBaseEntity *e = (CBaseEntity *)this;
    {
        ScopeTrace trace("CBaseEntity::SetSolid", e ? (e->m_name26c ? e->m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    e->vfunc93(0, 0);
    m_nMaterial = 0;
    m_bDisabled = 0;
    CEnvPlayerSurfaceTrigger_Entry h;
    h.m_h = e;
    g_1070906c.AddToTail(h);
}
// END FUNCTION

// FUNCTION: 0x100fdac0 size=0x89
#include "CBaseEntity.h"
#include "utlvector.h"
#include "CEnvPlayerSurfaceTrigger.h"
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);

struct UtlMem7 {
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
	void sub_100fdd50(int num);

	void GrowVector(int num)
	{
		if (m_size + num > m_allocationCount)
			sub_100fdd50(m_size + num - m_allocationCount);
		m_size += num;
		m_pElements = m_pMemory;
	}
	void ShiftElementsRight(int elem, int num)
	{
		int numToMove = m_size - elem - num;
		if (numToMove > 0 && num > 0)
			memmove(&m_pMemory[elem + num], &m_pMemory[elem], numToMove * 4);
	}
	void InsertBefore(int elem, int value)
	{
		GrowVector(1);
		ShiftElementsRight(elem, 1);
		int *p = &m_pMemory[elem];
		if (p)
			*p = value;
	}
};
extern UtlMem7 g_1070906c;

void CEnvPlayerSurfaceTrigger::vfunc130(int a)
{
	CBaseEntity *pThis = (CBaseEntity *)this;
	pThis->CBaseEntity::vfunc130(a);
	int handle = pThis ? *pThis->vfunc1() : -1;
	g_1070906c.InsertBefore(g_1070906c.m_size, handle);
}
// END FUNCTION
