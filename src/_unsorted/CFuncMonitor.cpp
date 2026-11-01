// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10114e20 size=0x6
#include "CFuncMonitor.h"
namespace lifted {
extern char g_1070a854;
}
int CFuncMonitor::vfunc80()
{
    return (int)&lifted::g_1070a854;
}
// END FUNCTION

// FUNCTION: 0x10114e40 size=0x3
#include "CFuncMonitor.h"
int CFuncMonitor::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10115020 size=0x6
#include "CFuncMonitor.h"
namespace lifted {
extern char g_10570580;
}
datamap_t *CFuncMonitor::vfunc82()
{
    return (datamap_t *)&lifted::g_10570580;
}
// END FUNCTION

// FUNCTION: 0x101150b0 size=0x2a
#include "CFuncMonitor.h"

extern char g_106b8540[];
void sub_10115660(CFuncMonitor *p);

// TARGET: CFuncMonitor::vfunc113
void CFuncMonitor::vfunc113()
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc113();
    const char *szName = *(const char **)((char *)this + 0x20c);
    if (!szName)
        szName = g_106b8540;
    sub_101150f0(szName);
    sub_10115660(this);
}
// END FUNCTION

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

// FUNCTION: 0x10115260 size=0x3f
#include "CFuncMonitor.h"

extern char g_10570710[];
void *sub_10070470(const char *pszName, int a, void *p1, void *p2, void *p3);

struct CFuncMonitorBaseView
{
	void sub_10015262(void *pEntity);	// CBaseEntity::vfunc39 (stub 0x10015262), called directly
};

struct CFuncMonitorArgView
{
	void sub_1017cef0(void *pPlayer);	// CBasePlayer::sub_1017cef0 (stub 0x100015cd), called directly
	void sub_1015ef40();	// stub 0x10011f68, called directly
};

struct CFuncMonitorFoundView
{
	char m_pad0000[0x5e8];
	char m_b05e8;	// +0x5e8
};

// TARGET: CFuncMonitor::vfunc39
void CFuncMonitor::vfunc39(void *pArg)
{
	((CFuncMonitorBaseView *)this)->sub_10015262(pArg);
	void *pFound = sub_10070470(g_10570710, 0, this, this, this);
	if (pFound) {
		((CFuncMonitorFoundView *)pFound)->m_b05e8 = 0;
		((CFuncMonitorArgView *)pArg)->sub_1017cef0(pFound);
		((CFuncMonitorArgView *)pArg)->sub_1015ef40();
	}
}
// END FUNCTION

// FUNCTION: 0x10115300 size=0x31
#include "CFuncMonitor.h"
#include "CBasePlayer.h"
#include "CAI_BaseNPCTroika.h"
// TARGET: CFuncMonitor::vfunc42
void CFuncMonitor::vfunc42(void *pCamera)
{
	((CBaseEntity *)this)->vfunc42(pCamera);
	((CBasePlayer *)pCamera)->sub_1017cef0(0);
	((CFuncMonitor *)pCamera)->sub_1015ef60();
	((CAI_BaseNPCTroika *)pCamera)->sub_101815b0(1);
	((CAI_BaseNPCTroika *)pCamera)->sub_101815b0(8);
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

// FUNCTION: 0x101154b0 size=0x84
#include "CFuncMonitor.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
void sub_101157c0(CFuncMonitor *pMonitor);
#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct CFuncMonitorView
{
	V10(a) V10(b) V10(c) V10(d)
	virtual void v40(); virtual void v41();
	virtual void vfunc42(CGlobalEntityList_Ent *pCamera);
};
void CFuncMonitor::vfunc180()
{
	sub_101157c0(this);
	if (EHandle_Get(m_hCamera.m_Index)) {
		((CFuncMonitorView *)this)->vfunc42(EHandle_Get(m_hCamera.m_Index));
		m_hCamera.m_Index = 0xffffffff;
	}
	sub_1000cb94();
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
