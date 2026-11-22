// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 25 blocks
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

// FUNCTION: 0x10114e60 size=0xa
#include "SendTable.h"
SendTable g_1070a988;
// END FUNCTION

// FUNCTION: 0x10114ee0 size=0x5
int sub_10114f20(void);
int g_1070a984 = ((int (*)(int))sub_10114f20)(0);
// END FUNCTION

// FUNCTION: 0x10114f20 size=0x93
#include "SendTable.h"

SendProp sub_10246af0(const char *pVarName, int offset, int sizeofVar, int nBits, int flags, int extra, void *proxy);
SendProp sub_10246dc0(const char *pVarName, int offset, int pTable, void *proxy);
void sub_10009539();
extern int g_1055282c;
extern const char *g_1057057c;
extern SendTable g_1070a988;

int sub_10114f20()
{
	static SendProp s_Props[] = {
		sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
		sub_10246dc0("baseclass", 0, g_1055282c, (void *)sub_10009539),
		sub_10246af0("m_TargetIndex", 0x458, 4, 16, 1, 0, 0),
	};
	g_1070a988.sub_10247240(&s_Props[1], 2, g_1057057c);
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10115020 size=0x6
#include "datamap.h"
#include "CFuncMonitor.h"
namespace lifted {
extern char g_10570580;
}
datamap_t *CFuncMonitor::vfunc82()
{
    return (datamap_t *)&lifted::g_10570580;
}
// END FUNCTION

// FUNCTION: 0x10115040 size=0x5
int sub_10115080(void);
int g_1070a86c = ((int (*)(int))sub_10115080)(0);
// END FUNCTION

// FUNCTION: 0x10115080 size=0x1a
namespace lifted {
extern int g_10570580;
extern int g_10570584;
extern char g_105705c4;
}
int sub_10115080()
{
    lifted::g_10570584 = 1;
    lifted::g_10570580 = (int)&lifted::g_105705c4;
    return (int)&lifted::g_10570580;
}
// END FUNCTION

// FUNCTION: 0x101150b0 size=0x2a
#include "CBaseEntity.h"
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

// FUNCTION: 0x101150f0 size=0x66
#include "CFuncMonitor.h"
#include "CPointCamera.h"
#include "CGlobalEntityList.h"
#define SL5(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4();
#define SL10(p) SL5(p##a) SL5(p##b)
struct EngineIdx {
    SL10(e0) SL10(e1) SL10(e2) SL5(e3)
    virtual int v35(int edict);
};
extern CGlobalEntityList g_106eb5d8;
extern EngineIdx *g_1070b22c;
extern char g_10538764[];
extern char g_105706f0[];
extern "C" void *__cdecl __RTDynamicCast(void *inptr, long vfDelta, void *srcType, void *targetType, int isReference);

void CFuncMonitor::sub_101150f0(const char *szName)
{
    CPointCamera *pCamera = (CPointCamera *)__RTDynamicCast(g_106eb5d8.sub_100f7770(0, szName, 0, 0), 0, g_10538764, g_105706f0, 0);
    *(CPointCamera **)((char *)this + 0x45c) = pCamera;
    if (pCamera)
        *(int *)((char *)this + 0x458) = g_1070b22c->v35(pCamera->m_pEdict2e0);
    else
        *(int *)((char *)this + 0x458) = 0;
}
// END FUNCTION

// FUNCTION: 0x10115180 size=0x7
struct CUnknown10115180 { int sub_10115180(); };
int CUnknown10115180::sub_10115180()
{
    return *(int *)((char *)this + 0x45c);
}
// END FUNCTION

// FUNCTION: 0x101151a0 size=0xa
struct CUnknown101151a0 { char p[0x204]; unsigned int a; unsigned int sub_101151a0(); };
// TARGET: CUnknown101151a0::sub_101151a0
unsigned int CUnknown101151a0::sub_101151a0() { return a & 1; }
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

// FUNCTION: 0x101152b0 size=0x34
#include "CFuncMonitor.h"
#include "CEntityVSlots.h"
#include "CBasePlayer.h"
void CFuncMonitor::vfunc41(CBasePlayer *pPlayer)
{
	pPlayer->sub_10178590(((CEntityVSlots *)this)->slot192());
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

// FUNCTION: 0x10115350 size=0x39
#include "CBaseEntity.h"
#include "CFuncMonitor.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

// TARGET: CFuncMonitor::vfunc35
int CFuncMonitor::vfunc35(int unused)
{
	unsigned int h = *(unsigned int *)((char *)this + 0x8c);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13) && info->m_pEntity)
			return 0;
	}
	return 7;
}
// END FUNCTION

// FUNCTION: 0x101153a0 size=0x3a
#include "inputdata_t.h"
extern char g_106b8540[];
struct S {
	void sub_1000457a(const char *s);
	void sub_101153a0(inputdata_t *data);
};
static inline const char *String(variant_t *v)
{
	if (v->fieldType == 2)
		return v->iszValue ? v->iszValue : g_106b8540;
	return v->sub_10008805();
}
void S::sub_101153a0(inputdata_t *data)
{
	sub_1000457a(String(&data->value));
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

// FUNCTION: 0x10115570 size=0xa
#include "utlvector.h"
CUtlVector<int> g_1070a870;
// END FUNCTION

// FUNCTION: 0x10115660 size=0x109
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "CEHandleGet.h"
#include "utlvector.h"

struct SMonHandle {
    union {
        unsigned int m_Index;
        CGlobalEntityList_Ent *m_pEnt;
    };
    bool operator==(const SMonHandle &o) const { CGlobalEntityList_Ent *a = EHandle_Get(o.m_Index); CGlobalEntityList_Ent *b = EHandle_Get(m_Index); return b == a; }
};
extern CUtlVector<SMonHandle> g_1070a870;

void sub_10115660(SMonHandle h)
{
    if (h.m_pEnt)
        h.m_Index = *h.m_pEnt->v1();
    else
        h.m_Index = 0xffffffff;
    if (g_1070a870.Find(h) != -1)
        return;
    g_1070a870.AddToTail(h);
}
// END FUNCTION

// FUNCTION: 0x101157c0 size=0x15a
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseEntity.h"

struct CFuncMonitorEntList
{
	CBaseEntity *sub_100290c0(const CBaseHandle &h);
};

extern CUtlVector<EHANDLE> g_1070a870;

inline int FindMonitorOutOfLine(const EHANDLE &h)
{
	for (int i = 0; i < g_1070a870.Count(); i++)
	{
		const EHANDLE &e = g_1070a870[i];
		CBaseEntity *pTarget = ((CFuncMonitorEntList *)EHandleDetail::g_10566458)->sub_100290c0(h);
		if (e.Get() == pTarget)
			return i;
	}
	return -1;
}

void sub_101157c0(CBaseEntity *pEnt)
{
	EHANDLE h(pEnt);
	int i = FindMonitorOutOfLine(h);
	while (i != -1)
	{
		g_1070a870.Remove(i);
		i = g_1070a870.Find(h);
	}
}
// END FUNCTION

// FUNCTION: 0x10115980 size=0x117
// TARGET: ?sub_10115980@@YAXPAUSHandleOwner@@@Z
#include "CUnknown101151a0.h"
#include "CUnknown1018c4d0.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
extern unsigned int *g_1070a870;
extern int g_1070a87c;
extern "C" void *__cdecl memmove(void *, const void *, unsigned int);
char sub_101d1a90(int pArg, CUnknown101151a0 *pEntity);
struct SHandleOwner
{
	char m_pad0000[0x40];
	int m_pArg;	// 0x40
	char m_bHasArg;	// 0x44
};

namespace block_10115980 {
struct CUnknown101151a0Unit : CUnknown101151a0
{
	unsigned int sub_101151a0();
};
unsigned int CUnknown101151a0Unit::sub_101151a0()
{
	return *(unsigned int *)((char *)this + 0x204) & 1;
}
}
using namespace block_10115980;

inline CUnknown101151a0 *HandleGet(unsigned int h)
{
	if (h != 0xffffffff) {
		CGlobalEntityList_Slot *s = &g_10566458->m_Slots[h & 0x1fff];
		if (s->m_Serial == (int)(h >> 13))
			return (CUnknown101151a0 *)s->m_pEntity;
	}
	return 0;
}

void sub_10115980(SHandleOwner *pOwner)
{
	for (int i = 0; i < g_1070a87c; ) {
		unsigned int *pArr = g_1070a870;
		unsigned int *pHandle = &pArr[i];
		if (!HandleGet(pArr[i])) {
			int n = g_1070a87c - i - 1;
			if (n > 0)
				memmove(pHandle, &pArr[i + 1], n * 4);
			g_1070a87c--;
		} else {
			CUnknown101151a0 *pEnt = HandleGet(*pHandle);
			if ((char)((CUnknown101151a0Unit *)pEnt)->sub_101151a0() || (pEnt->vfunc241() && sub_101d1a90(pOwner->m_bHasArg ? pOwner->m_pArg : 0, pEnt))) {
				CUnknown101151a0 *pLinked = pEnt->sub_10115180();
				if (pLinked) {
					engine->vfunc101(pLinked->vfunc217());
					((CUnknown1018c4d0 *)pLinked)->sub_1018c4d0(1);
				}
			}
			i++;
		}
	}
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
