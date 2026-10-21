// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
#include "CUnknown1070b22c.h"
extern CUnknown1070b22c *g_1070b22c;
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
		g_1070b22c->vfunc17((int)buf, 1);
	}
	p = *(const char **)((char *)this + 0x7c0);
	if (!p) p = g_106b8540;
	if (*p) {
		sub_10014e93(p, buf, 260);
		g_1070b22c->vfunc17((int)buf, 1);
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
