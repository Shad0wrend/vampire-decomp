// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102172e0 size=0x6
#include "CBaseTerminal.h"
namespace lifted {
extern char g_1074f380;
}
int CBaseTerminal::vfunc80()
{
    return (int)&lifted::g_1074f380;
}
// END FUNCTION

// FUNCTION: 0x10217300 size=0x3
#include "CBaseTerminal.h"
int CBaseTerminal::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102175f0 size=0x6
#include "datamap.h"
#include "CBaseTerminal.h"
namespace lifted {
extern char g_105af268;
}
datamap_t *CBaseTerminal::vfunc82()
{
    return (datamap_t *)&lifted::g_105af268;
}
// END FUNCTION

// FUNCTION: 0x10217680 size=0x18b
#include "CBaseTerminal.h"

extern "C" int __cdecl sub_1043e780(const char*, const char*);
extern char g_106b8540[];

struct str_10217680
{
	const char* p;
	const char* ToCStr() const { return p ? p : g_106b8540; }
};

struct TermSeqEntry_10217680
{
	int id;
	str_10217680 name;
};

struct TermRegistry_10217680
{
	char pad[0x14];
	int count;
	TermSeqEntry_10217680** items;

	int sub_10009331(void* ent, const char* name, int flags);

	int Lookup(const char* name)
	{
		for (int i = 0; i < count; i++)
		{
			if (sub_1043e780(items[i]->name.ToCStr(), name) == 0)
				return items[i]->id;
		}
		return -1;
	}
};

extern TermRegistry_10217680 g_1074b330;
extern int g_1074f754;
extern int g_1074f758;
extern int g_1074f75c;
extern int g_1074f760;

void CBaseTerminal::vfunc71()
{
	*(int*)((char*)this + 0xbc) = 0;
	*(int*)((char*)this + 0xb4) = g_1074b330.sub_10009331(this, ((str_10217680*)((char*)this + 0xc0))->ToCStr(), 0);
	g_1074f754 = g_1074b330.Lookup("accept");
	g_1074f758 = g_1074b330.Lookup("access");
	g_1074f75c = g_1074b330.Lookup("error");
	g_1074f760 = g_1074b330.Lookup("typing");
}
// END FUNCTION

// FUNCTION: 0x10217880 size=0x1af
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseTerminal.h"
#include "CBaseVampireSkillEntity.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CBaseTerminal::vfunc103
void CBaseTerminal::vfunc103()
{
	((CBaseVampireSkillEntity *)this)->CBaseVampireSkillEntity::vfunc103();
	CBaseEntity *pEnt = (CBaseEntity *)this;
	CCollisionProperty *pColl;
	{
		ScopeTrace t("CBaseEntity::SetSolid", this ? pEnt->m_name26c ? pEnt->m_name26c : g_106b8540 : g_105387dc);
		pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc480(2);
	}
	pEnt->sub_100adf10((const float *)((char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xb4), (const float *)((char *)((CBaseAnimating *)this)->sub_100952d0(-1) + 0xc0));
	{
		ScopeTrace t("CBaseEntity::RemoveSolidFlags", this ? pEnt->m_name26c ? pEnt->m_name26c : g_106b8540 : g_105387dc);
		pColl->sub_100dc580(pColl->m_usSolidFlags & ~0xc);
	}
	pEnt->vfunc93(0, 0);
	pEnt->sub_100b3b00();
	int w = m_nScreenW810;
	if (w > 0x24) w = 0x24; else if (w < 4) w = 4;
	m_nScreenW810 = w;
	int h = m_nScreenH814;
	if (h > 0x18) h = 0x18; else if (h < 2) h = 2;
	m_nScreenH814 = h;
	m_n081c = 0;
	m_n0820 = 0;
	m_b0824 = 0;
	pEnt->vfunc71();
}
// END FUNCTION

// FUNCTION: 0x10217aa0 size=0x3
#include "CBaseTerminal.h"
void CBaseTerminal::vfunc273(int a0, int a1)
{
}
// END FUNCTION

// FUNCTION: 0x10217b10 size=0x6
#include "CBaseTerminal.h"
namespace lifted {
extern char g_106b8540;
}
int CBaseTerminal::vfunc274()
{
    return (int)&lifted::g_106b8540;
}
// END FUNCTION

// FUNCTION: 0x10217f20 size=0x11
#include "CBaseTerminal.h"
namespace lifted {
int sub_10013f98(int, int);
}
int CBaseTerminal::vfunc278(int a0)
{
    return lifted::sub_10013f98((int)this, a0);
}
// END FUNCTION

// FUNCTION: 0x10218020 size=0x1
#include "CBaseTerminal.h"
void CBaseTerminal::vfunc275()
{
}
// END FUNCTION

// FUNCTION: 0x10218040 size=0x1
#include "CBaseTerminal.h"
void CBaseTerminal::vfunc276()
{
}
// END FUNCTION

// FUNCTION: 0x10218060 size=0x1
#include "CBaseTerminal.h"
void CBaseTerminal::vfunc277()
{
}
// END FUNCTION

// FUNCTION: 0x102180c0 size=0xa1
#include "CBaseEntity.h"
#include "CBaseTerminal.h"

inline bool IsUsable(CBaseEntity *p) { return p && *(int *)((char *)p + 0xa8); }

struct CBaseTerminalView : CBaseTerminal
{
	EHANDLE &User() { return *(EHANDLE *)&m_hUser; }
	char sub_102180c0(CBaseEntity *pOther);
	bool sub_10218710(CBaseEntity *pOther);
};

char CBaseTerminalView::sub_102180c0(CBaseEntity *pOther)
{
	if (!m_b080c)
		return false;
	if (!IsUsable(pOther))
		return false;
	if (User().Get() && User().Get() != pOther)
		return false;
	return sub_10218710(pOther) != 0;
}
// END FUNCTION

// FUNCTION: 0x102181a0 size=0x5a
#include <string.h>
#include "CBaseTerminal.h"
#include "CBaseVampireSkillEntity.h"
#include "CBaseEntity.h"
#include "CUnknown1073dc00.h"
#include "CAI_BaseNPCTroika.h"

extern CBaseEntity *g_1074f758;
extern CUnknown1073dc00 g_1074b330;
void __fastcall sub_1015ef40(void *p);

// TARGET: CBaseTerminal::vfunc39
void CBaseTerminal::vfunc39(void *pPlayer)
{
	((CBaseVampireSkillEntity *)this)->vfunc39(pPlayer);
	g_1074b330.sub_101f5950((CBaseEntity *)this, (int)g_1074f758, 2, 1.0f, 1.25f);
	sub_1015ef40(pPlayer);
	((CAI_BaseNPCTroika *)pPlayer)->sub_10181580(1);
	m_b080d = 1;
	memset(m_n082c, 0, sizeof(m_n082c));
}
// END FUNCTION

// FUNCTION: 0x10218220 size=0x69
#include "CBaseTerminal.h"
#include "CAI_BaseNPCTroika.h"
void __fastcall sub_1015ef60(char *p);
#define PV_V(n) virtual void v##n();
struct CNotifierX {
    PV_V(0) PV_V(1) PV_V(2) PV_V(3) PV_V(4)
    virtual void vfunc5(int a, int b);
};
extern CNotifierX *g_1070b248;
#define PV_V10(p) PV_V(p##0) PV_V(p##1) PV_V(p##2) PV_V(p##3) PV_V(p##4) PV_V(p##5) PV_V(p##6) PV_V(p##7) PV_V(p##8) PV_V(p##9)
struct CEngineX {
    PV_V10(0) PV_V10(1) PV_V10(2)
    PV_V(30) PV_V(31) PV_V(32) PV_V(33) PV_V(34)
    virtual int vfunc35(int edict);
};
extern CEngineX *g_1070b22c;
struct CTerminalHelperX {
    void sub_10218820(int a, int b);
    void sub_1020adc0(void *pPlayer);
};

// TARGET: CBaseTerminal::vfunc42
void CBaseTerminal::vfunc42(void *pPlayer)
{
    ((CTerminalHelperX *)this)->sub_10218820(2, 0);
    sub_1015ef60((char *)pPlayer);
    ((CAI_BaseNPCTroika *)pPlayer)->sub_101815b0(1);
    ((CAI_BaseNPCTroika *)pPlayer)->sub_101815b0(8);
    int edict = *(int *)((char *)this + 0x2e0);
    *((char *)this + 0x80d) = 0;
    g_1070b248->vfunc5(g_1070b22c->vfunc35(edict), 0);
    ((CTerminalHelperX *)this)->sub_1020adc0(pPlayer);
}
// END FUNCTION

// FUNCTION: 0x102182b0 size=0x4b
#include "CBaseTerminal.h"
#include "CBasePlayer.h"
#include "CEntityVSlots.h"

// TARGET: CBaseTerminal::vfunc41
void CBaseTerminal::vfunc41(void *pArg)
{
	((CBasePlayer *)pArg)->sub_10178590(((CEntityVSlots *)this)->slot192());
	if (m_b082c)
		sub_10217d60();
}
// END FUNCTION

// FUNCTION: 0x10218320 size=0x284
#include "CBaseTerminal.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CCollisionProperty.h"
#include "UTIL_Trace.h"

extern "C" double __cdecl sqrt(double);
#pragma intrinsic(sqrt)

inline float HullSqrt(float f)
{
	return (float)sqrt(f);
}

struct CHullRay
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	char m_b32;
	char m_b33;
	float m_flExtent2D;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != 0);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = ((m_Extents.x * m_Extents.x + (m_Extents.y * m_Extents.y + m_Extents.z * m_Extents.z)) < 1e-6);
		VectorAdd(mins, maxs, m_StartOffset);
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = 0;
		m_b33 = 0;
		m_flExtent2D = 0;
		if (!m_IsRay)
		{
			float fl = HullSqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y);
			m_flExtent2D = fl;
			if (m_flExtent2D > 1e-6)
				m_b33 = 1;
		}
	}
};

inline void TraceHull(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, void *pIgnore, CGameTrace *ptr)
{
	CHullRay ray;
	ray.Init(start, end, mins, maxs);
	CTraceFilterSimple filter(pIgnore, 3);
	g_1070b254->vfunc4((Ray_t *)&ray, 0x201400b, (CTraceFilterNoCharacterCollide *)&filter, ptr);
}

void CBaseTerminal::vfunc43(void *pOther)
{
	if (pOther)
	{
		Vector vecOther;
		vecOther = *((CEntityVSlots *)pOther)->slot217();
		Vector end = *((CEntityVSlots *)this)->slot217();
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)pOther + 0x270);
		const Vector &mins = *(Vector *)pColl->vfunc1();
		const Vector &maxs = *(Vector *)pColl->vfunc2();
		end.z = vecOther.z;
		CGameTrace tr;
		TraceHull(vecOther, end, mins, maxs, pOther, &tr);
		if (!g_10738964->vfunc1() && g_10738964->m_n2c)
			sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
		((CEntityVSlots *)pOther)->slot216((Vector *)&tr.m_endpos);
		((CBaseEntity *)pOther)->sub_100b3b00();
	}
	if (m_b082c)
		sub_10217d60();
}
// END FUNCTION

// FUNCTION: 0x10218660 size=0x14
#include "CBaseTerminal.h"

int CBaseTerminal::vfunc35(int a)
{
	char c = sub_10218710(a);
	return c ? 2 : 0;
}
// END FUNCTION

// FUNCTION: 0x10218690 size=0x55
#include "CBaseTerminal.h"
#include "CEHandleGet.h"

// TARGET: CBaseTerminal::vfunc34
int CBaseTerminal::vfunc34(int a)
{
	if (m_b080c) {
		if (EHandle_Get(m_hUser))
			return 0;
		if ((char)sub_10218710(a))
			return 1;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10219f10 size=0x6d
#include "CBaseTerminal.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBaseTerminal *CBaseTerminal::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
