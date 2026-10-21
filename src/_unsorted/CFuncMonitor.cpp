// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101151c0 size=0x7f
#include "CFuncMonitor.h"
struct Sub { void *pEnt; unsigned int serial; };
struct EntInfo { int pad; Sub s; };
extern EntInfo *g_10566458;
static inline void *HGet(const CFuncMonitorHandle *h)
{
    if (h->m_Index != 0xffffffff) {
        Sub *e = &g_10566458[h->m_Index & 0x1fff].s;
        if (e->serial == (h->m_Index >> 13))
            return e->pEnt;
    }
    return 0;
}
bool CFuncMonitor::vfunc32(void *pEntity)
{
    if (pEntity == HGet(&m_hCamera))
        return true;
    return HGet(&m_hCamera) == 0;
}
// END FUNCTION

// FUNCTION: 0x101153f0 size=0x84
#include "CFuncMonitor.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

inline CGlobalEntityList_Ent *LookupEntity(unsigned int h)
{
	if (h == 0xffffffff)
		return 0;
	CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
	if (pSlot->m_Serial != (int)(h >> 13))
		return 0;
	return pSlot->m_pEntity;
}

// TARGET: CFuncMonitor::vfunc77
void CFuncMonitor::vfunc77()
{
	if (!sub_10014da8() && LookupEntity(m_hCamera.m_Index))
	{
		unsigned int h = *(volatile unsigned int *)&m_hCamera.m_Index;
		CGlobalEntityList_Slot *pSlot;
		CGlobalEntityList_Ent *pCamera = (h != 0xffffffff && (pSlot = &g_10566458->m_Slots[h & 0x1fff])->m_Serial == (int)(h >> 13)) ? pSlot->m_pEntity : 0;
		((CEntityVSlots *)this)->slot42((CEntityVSlots *)pCamera);
		m_hCamera.m_Index = 0xffffffff;
	}
	sub_100011cc();
}
// END FUNCTION

// FUNCTION: 0x10115af0 size=0x1e
#include "CFuncMonitor.h"

void sub_100aa7b0(void *p);

// TARGET: CFuncMonitor::vfunc5
CFuncMonitor *CFuncMonitor::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
