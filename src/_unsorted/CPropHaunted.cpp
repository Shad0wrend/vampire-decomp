// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10213040 size=0x6
#include "datamap.h"
#include "CPropHaunted.h"
namespace lifted {
extern char g_105abb0c;
}
datamap_t * CPropHaunted::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105abb0c);
}
// END FUNCTION

// FUNCTION: 0x10213a60 size=0x57
#include "CPropHaunted.h"
#include "COutputEvent.h"

void sub_100aa7b0(void *);

CBaseEntity *CPropHaunted::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x804))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x7ec))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x7d4))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x748))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x730))->sub_100cd2d0();
	sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10213ae0 size=0x4e
#include "CPropHaunted.h"

struct CPropHauntedPhysObj
{
	virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
	virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
	virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14();
	virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
	virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
	virtual void vfunc24(int a);
};

// TARGET: CPropHaunted::vfunc103
void CPropHaunted::vfunc103()
{
	sub_1018f340();
	vfunc225();
	vfunc93(0, 0);
	CPropHauntedPhysObj *pObj = (CPropHauntedPhysObj *)sub_100a5ea0(6, 0, 1, 0);
	if (pObj)
		pObj->vfunc24(0);
	m_hGhost7d0 = 0xffffffff;
	sub_100b3b00();
}
// END FUNCTION

// FUNCTION: 0x10213b50 size=0x1
#include "CPropHaunted.h"
void CPropHaunted::vfunc265()
{
}
// END FUNCTION

// FUNCTION: 0x10213b70 size=0xb3
#include "CPropHaunted.h"
#include "CGlobalEntityList.h"

#define PV(n) virtual void v##n();
#define PV10(p) PV(p##0) PV(p##1) PV(p##2) PV(p##3) PV(p##4) PV(p##5) PV(p##6) PV(p##7) PV(p##8) PV(p##9)
#define PV100(p) PV10(p##0) PV10(p##1) PV10(p##2) PV10(p##3) PV10(p##4) PV10(p##5) PV10(p##6) PV10(p##7) PV10(p##8) PV10(p##9)

struct CGhostSlotsX
{
	PV(0) PV(1) PV(2) PV(3) PV(4) PV(5) PV(6) PV(7) PV(8) PV(9)
	PV10(1) PV10(2) PV10(3) PV10(4) PV10(5) PV10(6) PV10(7) PV10(8) PV10(9)
	PV100(1)
	PV10(20) PV10(21) PV10(22) PV10(23)
	PV(240) PV(241)
	virtual void vfunc242();

	void sub_100fbaf0(float flDelay);
};

extern CGlobalEntityList *g_10566458;

struct CEHandleX
{
	unsigned int m_Index;

	CGlobalEntityList_Ent *Valid() const
	{
		if (m_Index == 0xffffffff)
			return 0;
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
		int nSerial = pSlot->m_Serial;
		if (nSerial != (int)(m_Index >> 13))
			return 0;
		return pSlot->m_pEntity;
	}

	CGhostSlotsX *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return (CGhostSlotsX *)pSlot->m_pEntity;
		}
		return 0;
	}
};

struct CPropHauntedFields
{
	char m_pad0000[0x7d0];
	CEHandleX m_hGhost;
};

// TARGET: CPropHaunted::vfunc180
void CPropHaunted::vfunc180()
{
	CBaseEntity::vfunc180();
	CPropHauntedFields *p = (CPropHauntedFields *)this;
	if (p->m_hGhost.Valid()) {
		p->m_hGhost.Get()->vfunc242();
		p->m_hGhost.Get()->sub_100fbaf0(5.0f);
	}
}
// END FUNCTION

// FUNCTION: 0x10213c60 size=0xeb
#include "CPropHaunted.h"
struct CPrecacheSounds { virtual void vfunc0(const char *name, int preload); };
extern CPrecacheSounds *g_1070b248;
extern char g_106b8540[];
void sub_10014e93(const char *src, char *dst, int size);
void CPropHaunted::vfunc104()
{
	char buf[260];
	sub_1000978c();
	const char *p = *(const char **)((char *)this + 0x7bc);
	if (!p) p = g_106b8540;
	if (*p) {
		sub_10014e93(p, buf, 260);
		engine->vfunc17((const char *)buf, 1);
	}
	p = *(const char **)((char *)this + 0x7c0);
	if (!p) p = g_106b8540;
	if (*p) {
		sub_10014e93(p, buf, 260);
		engine->vfunc17((const char *)buf, 1);
	}
	p = *(const char **)((char *)this + 0x7c4);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
	p = *(const char **)((char *)this + 0x7c8);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
	p = *(const char **)((char *)this + 0x7cc);
	if (!p) p = g_106b8540;
	if (*p) g_1070b248->vfunc0(p, 1);
}
// END FUNCTION

// FUNCTION: 0x10213d90 size=0x28
#include "CPropHaunted.h"

// TARGET: CPropHaunted::vfunc174
void CPropHaunted::vfunc174(CBaseEntity *pOther)
{
    sub_10213ef0(0, 0, pOther);
    if (*(int *)((char *)this + 0x200) != 2)
        CBaseEntity::vfunc174(pOther);
}
// END FUNCTION

// FUNCTION: 0x10213dd0 size=0x61
#include "CPropHaunted.h"
struct CServerUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct CEdictView { char pad[0x40]; CServerUnknownView *m_pUnk; };
// TARGET: CPropHaunted::vfunc228
void CPropHaunted::vfunc228(int index, int pEvent)
{
#define pEvent ((void *)pEvent)
	CBaseEntity *pOther = ((CBaseEntity **)pEvent)[0x68 / 4 + (index == 0)];
	if (!pOther) {
		CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
		if (pEdict && pEdict->m_pUnk)
			pOther = pEdict->m_pUnk->GetBaseEntity();
		else
			pOther = 0;
	}
	sub_10213ef0(index, pEvent, pOther);
	if (*(int *)((char *)this + 0x200) != 2)
		sub_100a65a0(index, pEvent);
#undef pEvent
}
// END FUNCTION

// FUNCTION: 0x10213e60 size=0x61
#include "CPropHaunted.h"
struct CServerUnknownView { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual CBaseEntity *GetBaseEntity(); };
struct CEdictView { char pad[0x40]; CServerUnknownView *m_pUnk; };
// TARGET: CPropHaunted::vfunc230
void CPropHaunted::vfunc230(int index, void *pEvent)
{
	CBaseEntity *pOther = ((CBaseEntity **)pEvent)[0x68 / 4 + (index == 0)];
	if (!pOther) {
		CEdictView *pEdict = (CEdictView *)engine->vfunc38(0);
		if (pEdict && pEdict->m_pUnk)
			pOther = pEdict->m_pUnk->GetBaseEntity();
		else
			pOther = 0;
	}
	sub_10213ef0(index, pEvent, pOther);
	if (*(int *)((char *)this + 0x200) != 2)
		sub_1018fe80(index, pEvent);
}
// END FUNCTION

// FUNCTION: 0x10213fe0 size=0x13
#include "CPropHaunted.h"

char CPropHaunted::vfunc68(int a)
{
	if (m_field200 == 2)
		return 1;
	return sub_1008bfe0(a);
}
// END FUNCTION

// FUNCTION: 0x10214010 size=0x44
#include "CPropHaunted.h"
void CPropHaunted::vfunc266(CBaseEntity *pOther)
{
	if (m_iHealth > 0) {
		sub_100ac4e0(0, 0, 0);
		sub_10214200((const char *)m_iszSound7cc);
		sub_10214080(*(int *)((char *)this + 0x7c8));
		sub_1018fb90(pOther);
	}
}
// END FUNCTION
