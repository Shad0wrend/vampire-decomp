// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034ab50 size=0x6
#include "CNPCMaker.h"
namespace lifted {
extern char g_10624718;
}
datamap_t * CNPCMaker::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10624718);
}
// END FUNCTION

// FUNCTION: 0x1034adf0 size=0x14
#include "CNPCMaker.h"

// TARGET: CNPCMaker::vfunc370
int CNPCMaker::vfunc370(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker::*pm)(int);
	} u;
	u.p = vt[368];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034ae20 size=0x14
#include "CNPCMaker.h"

// TARGET: CNPCMaker::vfunc371
int CNPCMaker::vfunc371(int a)
{
	void **vt = *(void ***)this;
	union {
		void *p;
		void (CNPCMaker::*pm)(int);
	} u;
	u.p = vt[369];
	(this->*u.pm)(a);
	return a;
}
// END FUNCTION

// FUNCTION: 0x1034ae50 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc363(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034ae70 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc362(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034ae90 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc365(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034aeb0 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc364(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034aed0 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc587(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034aef0 size=0x5
#include "CNPCMaker.h"
bool CNPCMaker::vfunc72(int a0)
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1034af10 size=0x5
#include "CNPCMaker.h"

// TARGET: CNPCMaker::vfunc86
bool CNPCMaker::vfunc86(int a, void *pEdict, int c, int d, int e)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x1034af30 size=0x3
#include "CNPCMaker.h"
void CNPCMaker::vfunc619(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034af50 size=0x3
#include "CNPCMaker.h"
void CNPCMaker::vfunc620(int a0)
{
}
// END FUNCTION

// FUNCTION: 0x1034afe0 size=0x105
#include "CNPCMaker.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"
void sub_1000696a();
void sub_1000572c();

// TARGET: CNPCMaker::vfunc103
void CNPCMaker::vfunc103()
{
    {
        ScopeTrace trace("CBaseEntity::SetSolid", this ? (m_name26c ? m_name26c : g_106b8540) : g_105387dc);
        ((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
    }
    m_n66b0 = 0;
    vfunc104();
    if (m_b66c3)
        m_b66c2 = 1;
    if (!m_b66c0) {
        sub_100ac4e0((int)sub_1000696a, 0, 0);
        *(float *)((char *)this + 0x17c) = m_flSpawnDelay + gpGlobals->curtime;
        sub_100b3b00();
        m_n66b8 = 0;
    } else {
        sub_100ac4e0((int)sub_1000572c, 0, 0);
        sub_100b3b00();
        m_n66b8 = 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1034b140 size=0x1
#include "CNPCMaker.h"
void CNPCMaker::vfunc113()
{
}
// END FUNCTION

// FUNCTION: 0x1034b3c0 size=0x4c
#include "CNPCMaker.h"
#include "CUnknown10136ec0.h"
// TARGET: CNPCMaker::vfunc107
void CNPCMaker::vfunc107(CEntityMapData *pMapData)
{
	const char *pSrc = (const char *)((CUnknown10136ec0 *)pMapData)->sub_10136ec0();
	char *pDst = m_szMapData;
	char c = *pSrc;
	while (c != 0 && c != '}') {
		pSrc++;
		*pDst++ = c;
		c = *pSrc;
	}
	*pDst = '}';
	m_pMapData = m_szMapData[0] ? m_szMapData : 0;
	CBaseEntity::vfunc107(pMapData);
}
// END FUNCTION

// FUNCTION: 0x1034b580 size=0x1c0
#include "CNPCMaker.h"
#include "CEntityVSlots.h"
#include "Vector.h"

extern char g_106c8a41;
CBaseEntity *sub_1000ab23();
char sub_10015960(CBaseEntity *a, CNPCMaker *b);
int sub_10003f35(CBaseEntity **list, int max, const Vector &mins, const Vector &maxs, int flags, int a);

inline Vector Widen(const Vector &v, float d)
{
	Vector res;
	res.x = v.x - d;
	res.y = v.y - d;
	res.z = v.z;
	return res;
}

inline Vector Widen2(const Vector &v, float d)
{
	Vector res;
	res.x = v.x + d;
	res.y = v.y + d;
	res.z = v.z;
	return res;
}

// TARGET: CNPCMaker::vfunc618
char CNPCMaker::vfunc618(char bForce)
{
	if (bForce)
		return 1;
	if (m_n66b4 > 0 && m_n66b0 >= m_n66b4)
		return 0;
	if (g_106c8a41)
		return 0;
	CBaseEntity *pPlayer = sub_1000ab23();
	if (pPlayer) {
		if (m_b66c1 && sub_10015960(pPlayer, this))
			return 0;
		if (m_b66c5 && ((CEntityVSlots *)pPlayer)->slot363(this))
			return 0;
		if (m_n66c8 > 0) {
			Vector *a = ((CEntityVSlots *)pPlayer)->slot217();
			Vector *b = ((CEntityVSlots *)this)->slot217();
			if ((int)(*b - *a).Length() < m_n66c8)
				return 0;
		}
	}
	CEntityVSlots *me = (CEntityVSlots *)this;
	Vector mins = Widen(*me->slot217(), 34.0f);
	Vector maxs = Widen2(*me->slot217(), 34.0f);
	maxs.z = me->slot217()->z;
	CBaseEntity *list[2];
	return sub_10003f35(list, 2, mins, maxs, 0x2080, 0) == 0;
}
// END FUNCTION

// FUNCTION: 0x1034bc90 size=0x74
#include "CNPCMaker.h"
#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)
struct CMakerChildView {
    S100(a0) S10(b0) S10(b1) S10(b2) S10(b3) S10(b4)
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual char vfunc158();
    char m_pad[0x44c - 4];
    char m_bCounted;
};
struct CMakerList {
    void sub_10010794(CBaseEntity *pChild, CNPCMaker *pMaker, int a);
};

void CNPCMaker::vfunc139(CBaseEntity *pEnt)
{
    CMakerChildView *pChild = (CMakerChildView *)pEnt;
    if (!pChild->m_bCounted) {
        pChild->m_bCounted = 1;
        if (pChild->vfunc158())
            ++*(int *)((char *)this + 0x6660);
        else
            ((CMakerList *)((char *)this + 0x6680))->sub_10010794(pEnt, this, 0);
        if (sub_1034b430())
            ((CMakerList *)((char *)this + 0x6698))->sub_10010794(pEnt, this, 0);
        m_n66b0 = (m_n66b0 - 1 >= 0) ? m_n66b0 - 1 : 0;
    }
}
// END FUNCTION

// FUNCTION: 0x1034bd30 size=0x1
#include "CNPCMaker.h"
void CNPCMaker::vfunc123()
{
}
// END FUNCTION
