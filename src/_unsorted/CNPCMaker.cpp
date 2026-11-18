// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1034ab50 size=0x6
#include "datamap.h"
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

// FUNCTION: 0x1034af70 size=0x41
#include "CNPCMaker.h"
#include "COutputEvent.h"

struct CGargoyleBaseUnit { void sub_100123af(); };
void sub_100aa7b0(void *p);

CBaseEntity *CNPCMaker::vfunc5(unsigned int flags)
{
	((COutputEvent *)((char *)this + 0x6698))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6680))->sub_100cd2d0();
	((COutputEvent *)((char *)this + 0x6668))->sub_100cd2d0();
	((CGargoyleBaseUnit *)this)->sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1034afe0 size=0x105
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x1034b160 size=0x1d4
#include "CNPCMaker.h"
#include "CCollisionProperty.h"
#include "CAI_BaseNPC.h"
#include "engineserver.h"

class CMakerGlobInner
{
public:
	virtual void i0();
	virtual bool i1();
	char m_pad0004[0x28];
	int m_n2c;
};

class CMakerGlob
{
public:
	char m_pad0000[4];
	CMakerGlobInner *m_pInner;
};

extern CMakerGlob *g_1070af4c;

extern void (*g_109f362c)(const char *fmt, ...);

void sub_101cd940(void *p);
void sub_101cf390(void *pEnt, const float *pMins, const float *pMaxs);
void sub_101d0ec0(const char *p);
void *sub_101d3730(const char *fmt, const char *name);
void *sub_1020a0a0(const char *a, const char *b, const char *c);

#define CVT1(n) virtual void cvt##n();
#define CVT10(p) CVT1(p##0) CVT1(p##1) CVT1(p##2) CVT1(p##3) CVT1(p##4) CVT1(p##5) CVT1(p##6) CVT1(p##7) CVT1(p##8) CVT1(p##9)

class CEntityVt
{
public:
	CVT10(0) CVT10(1) CVT10(2) CVT10(3) CVT10(4) CVT10(5) CVT10(6) CVT10(7) CVT10(8) CVT10(9)
	CVT10(10) CVT10(11) CVT10(12) CVT10(13) CVT10(14) CVT10(15) CVT10(16) CVT10(17) CVT10(18)
	CVT10(19) CVT10(20)
	CVT1(210) CVT1(211) CVT1(212) CVT1(213) CVT1(214) CVT1(215) CVT1(216) CVT1(217) CVT1(218)
	virtual void *vfunc219();
	virtual float *vfunc220();
};

void CNPCMaker::vfunc104()
{
	int nDummy;
	const char **pp = vfunc9(&nDummy);
	const char *pszModel = *pp;
	if ( !pszModel )
		pszModel = "";

	if ( *pszModel != 0 )
	{
		EngineGlobals::g_1070b22c->vfunc13(pszModel, 0);
		((CAI_BaseNPC *)this)->CAI_BaseNPC::vfunc104();

		const char *pszClass = m_pszNPCClassname665c;
		if ( !pszClass )
			pszClass = "";
		if ( *pszClass != 0 )
		{
			sub_101d0ec0(pszClass);
			return;
		}

		g_109f362c("%s at %.0f %.0f %0.f missing NPCClassname\n", sub_1000b5cd(),
			(double)((CEntityVt *)this)->vfunc220()[0],
			(double)((CEntityVt *)this)->vfunc220()[1],
			(double)((CEntityVt *)this)->vfunc220()[2]);
		sub_101cd940(this);

		CMakerGlob *pGlob = g_1070af4c;
		if ( !pGlob->m_pInner->i1() && pGlob->m_pInner->m_n2c > 0 )
		{
			void *pDBG = sub_1020a0a0((const char *)sub_101d3730("%s: BAD NPC Classname", sub_1000b5cd()),
				(const char *)((CEntityVt *)this)->vfunc220(),
				(const char *)((CEntityVt *)this)->vfunc219());
			sub_101cf390(pDBG,
				((CCollisionProperty *)((char *)this + 0x270))->vfunc1(),
				((CCollisionProperty *)((char *)this + 0x270))->vfunc2());
		}
	}
	else
	{
		g_109f362c("%s at %.0f %.0f %0.f missing modelname\n", sub_1000b5cd(),
			(double)((CEntityVt *)this)->vfunc220()[0],
			(double)((CEntityVt *)this)->vfunc220()[1],
			(double)((CEntityVt *)this)->vfunc220()[2]);
		sub_101cd940(this);

		CMakerGlob *pGlob = g_1070af4c;
		if ( !pGlob->m_pInner->i1() && pGlob->m_pInner->m_n2c > 0 )
		{
			void *pDBG = sub_1020a0a0((const char *)sub_101d3730("%s: BAD MODEL NAME", sub_1000b5cd()),
				(const char *)((CEntityVt *)this)->vfunc220(),
				(const char *)((CEntityVt *)this)->vfunc219());
			sub_101cf390(pDBG,
				((CCollisionProperty *)((char *)this + 0x270))->vfunc1(),
				((CCollisionProperty *)((char *)this + 0x270))->vfunc2());
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1034b3c0 size=0x4c
#include "CEntityMapData.h"
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

// FUNCTION: 0x1034b7b0 size=0x352
#include <string.h>
#include "CNPCMaker.h"
#include "CEntityVSlots.h"
#include "UTIL_Trace.h"
#include "COutputEvent.h"

extern char g_106b8540[];
CBaseEntity *sub_10136580(const char *pszClass);
void sub_101d1280(void *pEnt);
__declspec(dllimport) void Warning(const char *pMsg, ...);

inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }

struct CMakerEntityMapData
{
	char *m_pEntData;
	char *m_pCurrentKey;
	CMakerEntityMapData(char *pText) { m_pEntData = pText; m_pCurrentKey = pText; }
};

struct StrT { const char *p; };
struct CMakerNPCView
{
	char pad0000[0x204];
	int m_spawnflags204;
	char pad0208[0x1584 - 0x208];
	int m_n1584;
	char pad1588[0x63b0 - 0x1588];
	int m_n63b0;
	int m_n63b4;
	int m_n63b8;
	int m_n63bc;
	char pad63c0[0x63d9 - 0x63c0];
	char m_b63d9;
	char pad63da[0x6420 - 0x63da];
	int m_n6420;
	int m_n6424;
	int m_n6428;
	int m_n642c;
	int m_n6430;
	char m_b6434;
	char m_b6435;
	char m_b6436;
	char pad6437[0x65f4 - 0x6437];
	char m_b65f4;

	char sub_1029f2e0();
	void sub_1029f300(char b);
	void sub_1028fb70();
	void sub_1028fc90();
	void SetS0(StrT s) { *(StrT *)&m_n63b0 = s; }
	void SetS4(StrT s) { *(StrT *)&m_n63b4 = s; }
	void SetSc(StrT s) { *(StrT *)&m_n63bc = s; }
	void Set63b0(int v) { m_n63b0 = v; }
	void Set63b4(int v) { m_n63b4 = v; }
	void Set63bc(int v) { m_n63bc = v; }
	void Set2(int a, int b) { m_n63b4 = b; m_n63b0 = a; }
	void Set2r(int b, int a) { m_n63b0 = a; m_n63b4 = b; }
	void Set3(int a, int b, int c) { m_n63b0 = a; m_n63b4 = b; m_n63bc = c; }
	void SetRef(const int &v) { m_n63b0 = v; }
};

#pragma auto_inline(off)
namespace block_1034b7b0
{
	struct CNPCMakerUnit : CNPCMaker
	{
		char sub_1034b430();
	};
	char CNPCMakerUnit::sub_1034b430()
	{
		if (!m_b66c3 && m_n6660 <= 0)
			return 1;
		return 0;
	}
}
using namespace block_1034b7b0;
#pragma auto_inline(on)

struct NameV { void sub_100a0420(StrT n); };
inline bool operator!=(const StrT &a, int) { return a.p != 0; }
// TARGET: ?vfunc617@CNPCMaker@@UAEPAVCBaseEntity@@H@Z
CBaseEntity *CNPCMaker::vfunc617(int bForce)
{
	if (m_flGroundZ66b8 == 0)
	{
		CGameTrace tr;
		UTIL_TraceLine_Calls(*((CEntityVSlots *)this)->slot217(), *((CEntityVSlots *)this)->slot217() - Vector(0, 0, 2048), 0x2400b, this, 0, &tr);
		m_flGroundZ66b8 = tr.m_endpos[2];
		((CEntityVSlots *)this)->slot217();
		((CEntityVSlots *)this)->slot217();
		((CEntityVSlots *)this)->slot217();
	}

	if (!vfunc618_slot(bForce))
		return 0;

	CBaseEntity *pEnt = sub_10136580(STRINGR(m_pszNPCClassname665c));
	if (!pEnt)
	{
		Warning("NULL Ent in NPCMaker!\n");
		return 0;
	}
	CMakerNPCView *pNPC = (CMakerNPCView *)pEnt->m_pNPC98;
	if (!pNPC)
	{
		Warning("Non Troika Ent in NPCMaker!\n");
		return 0;
	}

	const char *pSrc = STRINGR(m_pMapData);
	strcpy(m_szMapData, pSrc);
	CMakerEntityMapData entData(m_szMapData);
	((CEntityVSlots *)pNPC)->slot107((const float *)&entData);
	((CEntityVSlots *)pNPC)->slot111();
	((CEntityVSlots *)pNPC)->slot122(STRINGR(m_pszNPCClassname665c));

	CMakerNPCView *pThis = (CMakerNPCView *)this;
	pNPC->m_n1584 = pThis->m_n1584;
	((COutputEvent *)m_Output6668)->sub_100cd660(this, this, 0);
	pNPC->m_spawnflags204 = 4;
	if (m_b66c2)
		pNPC->m_spawnflags204 = 0x204;
	pNPC->sub_1029f300(pThis->sub_1029f2e0());
	pNPC->SetS0(*(StrT *)&pThis->m_n63b0);
	pNPC->m_n63b4 = pThis->m_n63b4;
	pNPC->m_n63bc = pThis->m_n63bc;
	pThis->sub_1028fb70();
	pThis->sub_1028fc90();
	pNPC->m_b63d9 = pThis->m_b63d9;
	pNPC->m_n6420 = pThis->m_n6420;
	pNPC->m_n6424 = pThis->m_n6424;
	pNPC->m_n6428 = pThis->m_n6428;
	pNPC->m_n642c = pThis->m_n642c;
	pNPC->m_n6430 = pThis->m_n6430;
	pNPC->m_b6434 = pThis->m_b6434;
	pNPC->m_b6435 = pThis->m_b6435;
	pNPC->m_b6436 = pThis->m_b6436;
	vfunc619((int)pNPC);

	sub_101d1280(pNPC);
	((CEntityVSlots *)pNPC)->slot202((CEntityVSlots *)this);
	if (m_pszTargetName66bc)
		((NameV *)pNPC)->sub_100a0420(*(StrT *)&m_pszTargetName66bc);
	vfunc620((int)pNPC);

	m_n66b0++;
	if (!m_b66c3)
	{
		m_n6660--;
		if (((CNPCMakerUnit *)this)->sub_1034b430())
		{
			sub_100ac4e0(0, 0, 0);
			m_pfnUse = 0;
		}
	}
	pNPC->m_b65f4 = 1;
	return (CBaseEntity *)pNPC;
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
