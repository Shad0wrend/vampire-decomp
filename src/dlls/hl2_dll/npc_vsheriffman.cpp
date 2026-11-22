// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// named by the DLL's own strings
#include "vampire.h"

// FUNCTION: 0x103aebd0 size=0x79
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"
void CNPC_VSheriffMan::vfunc432(int arg)
{
	ScopeTrace trace("CNPC_VSheriffMan::RunAI", g_106b8540);
	if (!m_bTransformed)
		sub_103b1510();
	sub_10385a10(arg);
}
// END FUNCTION

// FUNCTION: 0x103aec70 size=0x8c6
#include "CNPC_VTzimisce.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "COutputEvent.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "CNPC_VSheriffMan.h"
#include "CStatDefault3List.h"
#include "UTIL_Trace.h"
#include "CTraceFilterWorldOnly.h"
#include <math.h>
inline float HullSqrt(float f) { return (float)sqrt(f); }

extern CStatDefault3List g_10738d10;
extern float g_104c6154;

struct CSheriffCalls : CNPC_VSheriffMan
{
	CNPC_VSheriffMan *sub_1032e7b0();
	void sub_102c41b0(const char *pszName, const Vector *pPos, int a, int b);
	int sub_10337860();
	void sub_10337230();
	void sub_1008eec0(const char *pszBone, int a, int b);
};

struct CSlot181View
{
	EVS(0) EVS(1) EVS(2) EVS(3) EVS(4) EVS(5) EVS(6) EVS(7) EVS(8) EVS(9)
	EVS10(1) EVS10(2) EVS10(3) EVS10(4) EVS10(5) EVS10(6) EVS10(7) EVS10(8) EVS10(9)
	EVS10(10) EVS10(11) EVS10(12) EVS10(13) EVS10(14) EVS10(15) EVS10(16) EVS10(17)
	EVS(180)
	virtual void slot181(const Vector *pV, int a, int b);
};

struct RayHull
{
	Vector m_Start;
	Vector m_Delta;
	Vector m_StartOffset;
	Vector m_Extents;
	bool m_IsRay;
	bool m_IsSwept;
	bool m_b32;
	bool m_b33;
	float m_n34;

	__forceinline void Init(const Vector &start, const Vector &end, const Vector &mins, const Vector &maxs, bool a, bool b)
	{
		VectorSubtract(end, start, m_Delta);
		m_IsSwept = (m_Delta.LengthSqr() != g_104454c4);
		VectorSubtract(maxs, mins, m_Extents);
		m_Extents *= 0.5f;
		m_IsRay = (m_Extents.LengthSqr() < 1e-6);
		m_StartOffset.x = mins.x + maxs.x; m_StartOffset.y = mins.y + maxs.y; m_StartOffset.z = ((const Vector &)maxs)[2] + mins.z;
		m_StartOffset *= 0.5f;
		VectorAdd(start, m_StartOffset, m_Start);
		m_StartOffset *= -1.0f;
		m_b32 = b;
		m_b33 = 0;
		m_n34 = 0.0f;
		if (a && !m_IsRay) {
			float fl = HullSqrt(m_Extents.x * m_Extents.x + m_Extents.y * m_Extents.y); m_n34 = fl;
			if (m_n34 > 1e-6)
				m_b33 = 1;
		}
	}
};

#define TASKFAIL(line) { m_pszFile1b44 = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp"; m_nLine1b48 = line; me->slot448(1); }

// TARGET: CNPC_VSheriffMan::vfunc442
void CNPC_VSheriffMan::vfunc442(int *pTask)
{
	ScopeTrace trace("CNPC_VSheriffMan::StartTask", g_106b8540, g_106b8540);
	CEntityVSlots *me = (CEntityVSlots *)this;
	CSheriffCalls *self = (CSheriffCalls *)this;
	switch (*pTask) {
	case 0x150: {
		m_b66e4 = 1;
		CNPC_VSheriffMan *pEnt = self->sub_1032e7b0();
		if (pEnt) {
			((CEntityVSlots *)pEnt)->slot66();
			pEnt->m_nFlags19c |= 0x20;
			{
				ScopeTrace t2("CBaseEntity::AddSolidFlags", pEnt->m_pszName26c ? pEnt->m_pszName26c : g_106b8540, g_106b8540);
				((CCollisionProperty *)((char *)pEnt + 0x270))->AddSolidFlags(4);
			}
			((CBaseEntity *)pEnt)->sub_100b3b00();
		}
		Vector pos = *me->slot217();
		self->sub_102c41b0("sheriff_teleport_emitter", &pos, 0, 0);
		me->slot66();
		m_nFlags19c |= 0x20;
		{
			ScopeTrace t2("CBaseEntity::AddSolidFlags", m_pszName26c ? m_pszName26c : g_106b8540, g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->AddSolidFlags(4);
		}
		((CBaseEntity *)this)->sub_100b3b00();
		break;
	}
	case 0x153: {
		if (m_pTarget) {
			me->slot216(m_pTarget->slot217());
			Vector vec = *me->slot220();
			((CSlot181View *)this)->slot181(&vec, 0, 0);
			me->slot62(&vec.x);
		}
		CNPC_VSheriffMan *pEnt = self->sub_1032e7b0();
		if (pEnt) {
			((CEntityVSlots *)pEnt)->slot67();
			pEnt->m_nFlags19c &= ~0x20;
			{
				ScopeTrace t2("CBaseEntity::RemoveSolidFlags", pEnt->m_pszName26c ? pEnt->m_pszName26c : g_106b8540, g_106b8540);
				((CCollisionProperty *)((char *)pEnt + 0x270))->RemoveSolidFlags(4);
			}
			((CBaseEntity *)pEnt)->sub_1009d1e0();
			((CBaseEntity *)pEnt)->sub_100b3b00();
		}
		me->slot67();
		m_nFlags19c &= ~0x20;
		{
			ScopeTrace t2("CBaseEntity::RemoveSolidFlags", m_pszName26c ? m_pszName26c : g_106b8540, g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->RemoveSolidFlags(4);
		}
		((CBaseEntity *)this)->sub_1009d1e0();
		((CBaseEntity *)this)->sub_100b3b00();
		self->sub_10337230();
		sub_103b0560();
		self->sub_1008eec0("bip01", 1, 1);
		m_b66e4 = 0;
		m_nFlags19c |= 0x10;
		sub_10014c22();
		Vector pos = *me->slot217();
		self->sub_102c41b0("sheriff_teleport_emitter", &pos, 0, 0);
		m_flAttackStartTime = gpGlobals->curtime;
		break;
	}
	case 0x151:
		m_pTarget = sub_103b0630();
		if (!m_pTarget)
			TASKFAIL(0x192);
		sub_10273e80(0);
		break;
	case 0x152:
		if (!m_pTarget) {
			m_pTarget = sub_103b0630();
			if (!m_pTarget)
				TASKFAIL(0x19c);
		}
		break;
	case 0x154:
		((COutputEvent *)m_Output66b8)->sub_100cd660(this, this, 0);
		break;
	case 0x155:
		m_pTarget = sub_103b0930();
		if (!m_pTarget)
			TASKFAIL(0x1ac);
		sub_10273e80(0);
		break;
	case 0x156:
		m_pTarget = sub_103b0ab0(0);
		if (!m_pTarget)
			TASKFAIL(0x1b4);
		sub_10273e80(0);
		break;
	case 0x157:
		m_pTarget = sub_103b0ab0(1);
		if (!m_pTarget)
			TASKFAIL(0x1bc);
		sub_10273e80(0);
		break;
	case 0x158: {
		CTraceFilterWorldOnly filter;
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		const Vector *mins = (const Vector *)pColl->vfunc1();
		const Vector *maxs = (const Vector *)pColl->vfunc2();
		const Vector *vecEnd = me->slot217();
		const Vector *vecStart = me->slot217();
		CGameTrace tr;
		{
			ScopeTrace t2("UTIL_TraceHull", g_106b8540, g_106b8540);
			RayHull ray;
			ray.Init(*vecStart, *vecEnd, *mins, *maxs, true, false);
			g_1070b254->vfunc4((Ray_t *)&ray, 0x202400b, (CTraceFilterNoCharacterCollide *)&filter, &tr);
			if (!g_10738964->vfunc1() && g_10738964->m_n2c)
				sub_10146570((const Vector *)&tr.m_startpos, (const Vector *)&tr.m_endpos, 0xff, 0xff, 0, 1, -1.0f);
		}
		if (tr.m_startsolid)
			TASKFAIL(0x1c8);
		sub_103b1300(m_pTarget);
		m_flAttackStartTime = gpGlobals->curtime;
		sub_10273e80(0);
		break;
	}
	case 0x13b: {
		Vector pos = *me->slot217();
		self->sub_102c41b0("sheriff_landblast_emitter", &pos, 0, 0);
		int iStat = self->sub_10337860();
		if (iStat >= 0) {
			float flDamage = *(float *)((char *)g_10738d10.sub_101d5e80(iStat) + 0xcc);
			sub_103c7230(&pos, g_104c6154, flDamage);
		}
		sub_103c5ac0(pTask);
		break;
	}
	default:
		sub_103c5ac0(pTask);
		break;
	}
}
// END FUNCTION

// FUNCTION: 0x103af780 size=0x6c
#include "CNPC_VSheriffMan.h"

struct ScopeTraceEntry {
    const char *m_pszName;
    const char *m_pszEntity;
    const char *m_pszExtra;
};
extern "C" __declspec(dllimport) ScopeTraceEntry g_ScopeTraceStack[];
extern "C" __declspec(dllimport) int g_ScopeTraceStackDepth;
extern const char g_106b8540[];

struct ScopeTrace {
    ScopeTrace(const char *name, const char *entity)
    {
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszName = name;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszEntity = entity;
        g_ScopeTraceStack[g_ScopeTraceStackDepth].m_pszExtra = g_106b8540;
        g_ScopeTraceStackDepth++;
    }
    ~ScopeTrace() { g_ScopeTraceStackDepth--; }
};

// TARGET: CNPC_VSheriffMan::vfunc444
void CNPC_VSheriffMan::vfunc444(int *pTask)
{
    ScopeTrace trace("CNPC_VSheriffMan::RunTask", g_106b8540);
    if (*pTask != 0x154)
        sub_103c5f40(pTask);
}
// END FUNCTION

// FUNCTION: 0x103af810 size=0x5
#include "CNPC_VSheriffMan.h"
bool CNPC_VSheriffMan::vfunc566(int a0)
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x103af830 size=0x72
#include "CNPC_VSheriffMan.h"

struct ScopeEntry { const char *a; const char *b; const char *c; };
extern ScopeEntry *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];
extern float g_104c6120;

void CNPC_VSheriffMan::vfunc431()
{
	g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::NPCThink";
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100052d6();
	*(float *)((char *)this + 0x17c) = g_104c6120 + gpGlobals->curtime;
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103af8d0 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_10651428[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc619
void CNPC_VSheriffMan::vfunc619(int arg)
{
	g_109f3620[*g_109f3680].a = g_10651428;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_1000c27a(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103af960 size=0x36a
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "vampire.h"
#include "CNPC_VSheriffMan.h"
#include "CAI_BaseNPCTroika.h"
#include "ScopeTrace.h"

#define FILE_ "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp"

int CNPC_VSheriffMan::vfunc604(int arg)
{
	ScopeTrace scope("CNPC_VSheriffMan::SelectScheduleMeleeCombat", g_106b8540);
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	if (m_b6078)
	{
		if (p->vfunc602())
		{
			p->vfunc601(p->vfunc167());
			if (p->vfunc308())
			{
				m_pszSourceFile = FILE_;
				m_nSourceLine = 0x22f;
				return 0xe9;
			}
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x235;
			return 0xe7;
		}
	}
	else
	{
		if (!p->vfunc599(p->vfunc167()))
		{
			if (p->vfunc308())
			{
				m_pszSourceFile = FILE_;
				m_nSourceLine = 0x244;
				return 0xe9;
			}
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x248;
			return 0x15a;
		}
	}
	if (p->sub_10269aa0(0x59))
	{
		p->vfunc601(p->vfunc167());
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x252;
		return 0x15a;
	}
	if (p->sub_10269aa0(0x51))
	{
		if (p->vfunc308())
		{
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x269;
			return 0xdc;
		}
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x26d;
		return 0xdd;
	}
	bool bRetry = false;
	if (m_fl626c > 64.0f)
	{
		if (m_fl6274 == -1.0f)
			m_fl6274 = enginerandom->vfunc1(3.0f, 4.0f) + gpGlobals->curtime;
		else if (gpGlobals->curtime >= m_fl6274)
			bRetry = true;
	}
	else
		m_fl6274 = -1.0f;
	if (p->vfunc308())
	{
		if (p->sub_10269aa0(9) || p->sub_10269aa0(0x1a) || bRetry)
		{
			p->vfunc601(p->vfunc167());
			m_pszSourceFile = FILE_;
			m_nSourceLine = 0x290;
			return 0xe9;
		}
	}
	if (!p->sub_10269aa0(9) && !p->sub_10269aa0(0x60) && !p->sub_10269aa0(0x48))
	{
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x2a3;
		return 0xc7;
	}
	if (p->vfunc308())
	{
		m_pszSourceFile = FILE_;
		m_nSourceLine = 0x29b;
		return 0xca;
	}
	m_pszSourceFile = FILE_;
	m_nSourceLine = 0x29f;
	return 0xcb;
}
// END FUNCTION

// FUNCTION: 0x103afdb0 size=0x3d8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CNPC_VSheriffMan.h"
#include "CAI_BaseNPCTroika.h"
#include "CBaseAnimating.h"

#define FILE_STAMP(line) (m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp", m_nSourceLine = (line))

// TARGET: CNPC_VSheriffMan::vfunc605
int CNPC_VSheriffMan::vfunc605(int unused)
{
	ScopeTrace trace("CNPC_VSheriffMan::SelectScheduleRangedCombat", g_106b8540);
	CAI_BaseNPCTroika *p = (CAI_BaseNPCTroika *)this;
	if (m_b6078) {
		FILE_STAMP(0x2b1);
		return 0xe3;
	}
	if (p->sub_10014df8(8) && p->vfunc307() && p->vfunc599((int)p->vfunc167())) {
		FILE_STAMP(0x2cb);
		return 0xe3;
	}
	if (p->sub_10014df8(0x3c)) {
		FILE_STAMP(0x2d0);
		return 0xb8;
	}
	int r = p->sub_102b8620();
	if (r) return r;
	r = p->sub_102b7370();
	if (r) return r;
	r = p->sub_102b7cf0();
	if (r) return r;
	if (!p->sub_10014df8(0x5f) && !p->sub_10014df8(8)) {
		if (!p->sub_10014df8(0x46) || p->sub_10014df8(0x48) || p->sub_10014df8(0x60))
			;
		else
			return 0;
		if (p->sub_10014df8(0x59)) {
			FILE_STAMP(0x314);
			return 0x15a;
		}
		FILE_STAMP(0x31a);
		return 0xe8;
	}
	if (!p->sub_10014df8(0x2f) && !p->sub_10014df8(0x63)) {
		if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !p->sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
			FILE_STAMP(0x2ed);
			return 0xef;
		}
		if (p->vfunc307() && enginerandom->vfunc2(0, 0x63) < 0x19 && p->vfunc599((int)p->vfunc167())) {
			FILE_STAMP(0x2f1);
			return 0xe8;
		}
		FILE_STAMP(0x2f5);
		return 0xf0;
	}
	if (((CBaseAnimating *)this)->sub_1008dc40(0x10, -1) && !p->sub_10014df8(0x2c) && enginerandom->vfunc2(0, 0x63) < 0x4b) {
		FILE_STAMP(0x2fc);
		return 0xb8;
	}
	if (p->vfunc307() && p->vfunc599((int)p->vfunc167())) {
		FILE_STAMP(0x300);
		return 0xe8;
	}
	FILE_STAMP(0x304);
	return 0xb9;
}
// END FUNCTION

// FUNCTION: 0x103b0290 size=0x64
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char* a; const void* b; const void* c; };
extern ScopeEnt* g_109f3620;
extern int* g_109f3680;
extern char g_106514b8[];
extern char g_106b8540[];

// TARGET: CNPC_VSheriffMan::vfunc448
void CNPC_VSheriffMan::vfunc448(int arg)
{
	g_109f3620[*g_109f3680].a = g_106514b8;
	g_109f3620[*g_109f3680].b = g_106b8540;
	g_109f3620[*g_109f3680].c = g_106b8540;
	(*g_109f3680)++;
	sub_100054bb(arg);
	(*g_109f3680)--;
}
// END FUNCTION

// FUNCTION: 0x103b0320 size=0x65
#include "CNPC_VSheriffMan.h"
struct ScopeEntry { const char *name; const void *a; const void *b; };
extern int *g_109f3680;
extern ScopeEntry *g_109f3620;
extern char g_106514d8[];
extern char g_106b8540[];

int CNPC_VSheriffMan::vfunc440(int a)
{
	g_109f3620[*g_109f3680].name = g_106514d8;
	g_109f3620[*g_109f3680].a = g_106b8540;
	g_109f3620[*g_109f3680].b = g_106b8540;
	(*g_109f3680)++;
	int r = sub_10005e20(a);
	(*g_109f3680)--;
	return r;
}
// END FUNCTION

// FUNCTION: 0x103b03b0 size=0x14d
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CGlobalEntityList.h"
#include "CBaseEntity.h"
#include "CEntityVSlots.h"
#include "CNPC_VSheriffMan.h"
extern const float g_104c6128;
extern const float g_104c612c;
extern const float g_104c6130;
extern const float g_104c6134;
extern const float g_104c6138;
extern const float g_104c613c;
extern const char g_10651504[];
CBaseEntity *sub_10136580(const char *classname);

// TARGET: CNPC_VSheriffMan::sub_103b03b0
void CNPC_VSheriffMan::sub_103b03b0()
{
	ScopeTrace trace("CNPC_VSheriffMan::SpawnTeleportBats", g_106b8540);
	CBaseEntity *pBats = m_hTeleportBats.Get();
	if (!pBats) {
		pBats = sub_10136580(g_10651504);
		if (!pBats)
			return;
	}
	m_hTeleportBats = pBats;
	((CEntityVSlots *)pBats)->slot216(((CEntityVSlots *)this)->slot217());
	pBats->vfunc103();
	if (m_pTarget) {
		pBats->sub_100b97b0();
		pBats->sub_100b9880((const float *)m_pTarget->slot220(), g_104c6128, g_104c612c, g_104c6130 + m_pTarget->slot220()->z, g_104c6134 + m_pTarget->slot220()->z, g_104c6138, g_104c613c);
	}
}
// END FUNCTION

// FUNCTION: 0x103b0560 size=0x9b
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"

void sub_101cd940(void *pEnt);

void CNPC_VSheriffMan::sub_103b0560()
{
	ScopeTrace trace("CNPC_VSheriffMan::KillTeleportBats", g_106b8540);
	CBaseEntity *pBats = m_hTeleportBats.Get();
	if (pBats)
		sub_101cd940(pBats);
	m_hTeleportBats = 0;
}
// END FUNCTION

// FUNCTION: 0x103b0630 size=0x25e
#include "CBaseEntity.h"
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "CUnknown1073dc28.h"
#include <math.h>
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"
#include "CAIHintSlots.h"
#include "ehandle.h"
#include "CUnknown100290c0.h"
#include "ScopeTrace.h"
#include "QAngle.h"
#include "Vector.h"
#include "globalvars.h"

float __cdecl sub_1013d580(float, float);
void __cdecl sub_10139970(const Vector &, QAngle &);
extern float g_104c6124;
extern float g_104c6144;

struct CHintNode
{
	char m_pad[0x5d8];
	CHintNode *m_pNext;
	int m_nType;
};

CEntityVSlots *CNPC_VSheriffMan::sub_103b0630()
{
	ScopeTrace trace("CNPC_VSheriffMan::SelectTeleportNode", g_106b8540);

	CBaseEntity *pStart = (CBaseEntity *)((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0((unsigned int *)&m_hHeightTarget);
	if (!pStart)
		return 0;

	CBaseEntity *pBest = 0;
	float flBest = 3.4028235e38f;

	for (CHintNode *pNode = (CHintNode *)g_10925450; pNode; pNode = pNode->m_pNext) {
		int type = pNode->m_nType;
		if (type == 17000 || type == 0x4653 || type == 0x4652) {
			Vector *pNodeOrg = ((CEntityVSlots *)pNode)->slot217();
			Vector *pStartOrg = ((CEntityVSlots *)pStart)->slot217();
			Vector vec = *pStartOrg - *pNodeOrg;
			vec.z *= 100.0f;
			float dist = vec.Length();
			if (dist >= g_104c6124) {
				if (sub_103b0c70(((CEntityVSlots *)pNode)->slot217(), g_104c6124)) {
					vec.z = 0;
					QAngle angles;
					sub_10139970(vec, angles);
					Vector *pStartAng = ((CEntityVSlots *)pStart)->slot219();
					float yaw = pStartAng->y;
					float angleDiff = sub_1013d580(yaw, angles.y);
					float a = (float)fabs(angleDiff) * 0.0055555557f;
					if (dist > g_104c6144)
						dist = g_104c6144;
					float score = a * 0.4f + dist / g_104c6144 * 0.6f;
					if (score < flBest) {
						flBest = score;
						pBest = (CBaseEntity *)pNode;
					}
				}
			}
		}
	}

	Vector *pOrg = ((CEntityVSlots *)pBest)->slot217();
	m_nSpawnOrigin[0] = *(int *)&pOrg->x;
	m_nSpawnOrigin[1] = *(int *)&pOrg->y;
	m_nSpawnOrigin[2] = *(int *)&pOrg->z;
	m_nSpawnTime = *(int *)&gpGlobals->curtime;
	return (CEntityVSlots *)pBest;
}
// END FUNCTION

// FUNCTION: 0x103b0930 size=0x12b
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "Vector.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "CNPC_VSheriffMan.h"

struct SheriffListNode : CEntityVSlots
{
	char pad[0x5d8 - 4];
	SheriffListNode *m_pNext;
	int m_nType;
};
extern SheriffListNode *g_10925450;

CEntityVSlots *CNPC_VSheriffMan::sub_103b0930()
{
	ScopeTrace trace("CNPC_VSheriffMan::SelectCenterNode", g_106b8540);
	CEntityVSlots *pRef = (CEntityVSlots *)EHandle_Get(m_hHeightTarget);
	if (!pRef)
		return 0;
	CEntityVSlots *pBest = 0;
	float flBest = 3.4028235e+38f;
	for (SheriffListNode *p = g_10925450; p; p = p->m_pNext)
	{
		if (p->m_nType == 0x4651)
		{
			float flDist = (*pRef->slot217() - *p->slot217()).Length();
			if (flDist < flBest)
			{
				flBest = flDist;
				pBest = p;
			}
		}
	}
	return pBest;
}
// END FUNCTION

// FUNCTION: 0x103b0ab0 size=0x152
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

struct LedgeHintView : CEntityVSlots
{
    char pad[0x5d8 - 4];
    LedgeHintView *m_pNext;
    int m_nHintType;
};
extern LedgeHintView *g_10925450;

// TARGET: CNPC_VSheriffMan::sub_103b0ab0
CEntityVSlots *CNPC_VSheriffMan::sub_103b0ab0(char bUseSelf)
{
    ScopeTrace trace("CNPC_VSheriffMan::SelectLedgeNode", g_106b8540);
    CGlobalEntityList_Ent *pEnt = EHandle_Get(m_hHeightTarget);
    if (!pEnt)
        return 0;
    LedgeHintView *pHint = g_10925450;
    LedgeHintView *pBest = 0;
    float flBest = 3.402823466e+38f;
    Vector vecOrigin;
    if (bUseSelf)
        vecOrigin = *((CEntityVSlots *)this)->slot217();
    else
        vecOrigin = *((CEntityVSlots *)pEnt)->slot217();
    while (pHint) { if (pHint->m_nHintType == 0x4653)
        {
            Vector vecDelta;
            VectorSubtract(vecOrigin, *pHint->slot217(), vecDelta);
            float t0 = (vecDelta.z * vecDelta.z) + (vecDelta.x * vecDelta.x); float flDist = FastSqrt(t0 + vecDelta.y * vecDelta.y);
            if (flDist < flBest)
            {
                flBest = flDist;
                pBest = pHint;
            }
        } pHint = pHint->m_pNext; }
    return pBest;
}
// END FUNCTION

// FUNCTION: 0x103b0c70 size=0x1a2
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

bool CNPC_VSheriffMan::sub_103b0c70(const Vector *pPos, float flMinDist)
{
	ScopeTrace trace("CNPC_VSheriffMan::PositionClearForTeleport", g_106b8540);
	if ((*((CEntityVSlots *)this)->slot217() - *pPos).Length() < flMinDist)
		return false;
	if ((*(Vector *)m_nSpawnOrigin - *pPos).Length() < 100.0f)
		return false;
	CEntityVSlots *pEnt = (CEntityVSlots *)EHandle_Get(m_hHeightTarget);
	if (pEnt) {
		if ((*pEnt->slot217() - *pPos).Length() < flMinDist)
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x103b0e90 size=0x1d7
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CNPC_VSheriffMan.h"
#include "ScopeTrace.h"
#include "CVDmg_t.h"
#include "CVStatList_t.h"

class SBossGlobalView
{
public:
	virtual void v0();
	virtual void vfunc1();
};
extern SBossGlobalView *g_10924a6c;

struct SDamageInfoView	// the 0x4c byte damage record
{
	CVDmg_t *m_pVDmg;	// 0x00
	char m_pad0004[0x30 - 4];
	float m_flDamage;	// 0x30
	char m_pad0034[0x4c - 0x34];
};

int CNPC_VSheriffMan::vfunc390(const void *pInfo)
{
	ScopeTrace trace("CNPC_VSheriffMan::OnTakeDamage_Alive", g_106b8540);
	SDamageInfoView info = *(const SDamageInfoView *)pInfo;
	float flDamage;
	if (info.m_pVDmg)
		flDamage = (float)info.m_pVDmg->sub_101faa70();
	else
		flDamage = info.m_flDamage;
	int nMax = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0x11);
	int nCur = CVStatListSet::Of(this)->Find(0)->sub_102012d0(0xf);
	if ((float)nCur + flDamage >= nMax) {
		*(int *)((char *)this + 0x1fc) = 0;
		g_10924a6c->vfunc1();
		sub_10269a20(0x79);
		m_b66e5 = 1;
	} else {
		if (!m_b66e4)
			goto skip;
	}
	info.m_flDamage = 0;
	if (info.m_pVDmg) {
		*(int *)((char *)info.m_pVDmg + 4) = 0;
		*(int *)((char *)info.m_pVDmg + 0xc) = 0;
	}
skip:
	return sub_10385a50(&info);
}
// END FUNCTION

// FUNCTION: 0x103b10f0 size=0x199
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "CLogicRelay.h"
#include "CBaseCombatCharacter.h"
#include "CCollisionProperty.h"
#include "CEntityVSlots.h"
#include "CGlobalEntityList.h"
#include "inputdata_t.h"
#include "ScopeTrace.h"

extern CGlobalEntityList g_106eb5d8;
void *sub_101cda50();
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long lVfDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_10538764[];	// CBaseEntity type descriptor
extern char g_1057930c[];	// CLogicRelay type descriptor
extern char g_106511cc[];	// CNPC_VSheriffMan type descriptor

void CNPC_VSheriffMan::sub_103b10f0()
{
	ScopeTrace trace("CNPC_VSheriffMan::KillSheriff", g_106b8540);
	CBaseEntity *pRelayEnt = g_106eb5d8.sub_100f7770(0, "logic_zap_player", 0, 0);
	CLogicRelay *pRelay = (CLogicRelay *)__RTDynamicCast(pRelayEnt, 0, g_10538764, g_1057930c, 0);
	CBaseEntity *pSheriffEnt = g_106eb5d8.sub_100f7770(0, "sheriff", 0, 0);
	CNPC_VSheriffMan *pSheriff = (CNPC_VSheriffMan *)__RTDynamicCast(pSheriffEnt, 0, g_10538764, g_106511cc, 0);
	if (pRelay && pSheriff) {
		inputdata_t data;
		data.value.iValue = 0;
		data.value.eVal = 0xffffffff;
		data.value.fieldType = 0;
		data.pActivator = sub_101cda50();
		pRelay->sub_101364e0(&data);
	}
	CBaseEntity *pWeapon = (CBaseEntity *)((CBaseCombatCharacter *)this)->sub_1032e7b0();
	if (pWeapon) {
		((CEntityVSlots *)pWeapon)->slot66();
		pWeapon->m_nEffectFlags |= 0x20;
		{
			ScopeTrace trace2("CBaseEntity::AddSolidFlags", pWeapon->m_name26c ? pWeapon->m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)pWeapon + 0x270))->AddSolidFlags(4);
		}
		pWeapon->sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x103b1300 size=0x11c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VAsianVampire.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

extern float g_104c614c;

struct SJumpView
{
	char m_pad0000[0x649c];
	Vector m_vecJumpStart;	// 0x649c
	Vector m_vecJumpEnd;	// 0x64a8
	float m_flJumpHeight;	// 0x64b4
};

struct CNPC_VAsianVampireUnit : CNPC_VAsianVampire
{
	void sub_103b1300(void *pHint);	// "CNPC_VSheriffMan::SetupJump"
	void sub_102c4e80();	// stub 0x10011a31, called directly
};

void CNPC_VAsianVampireUnit::sub_103b1300(void *pHint)
{
	ScopeTrace trace("CNPC_VSheriffMan::SetupJump", g_106b8540);
	if (pHint) {
		SJumpView *pView = (SJumpView *)this;
		CEntityVSlots *pThis = (CEntityVSlots *)this;
		pView->m_vecJumpStart = *pThis->slot217();
		pView->m_vecJumpEnd = *((CEntityVSlots *)m_pHint5ddc)->slot217();
		float flZ = ((CEntityVSlots *)m_pHint5ddc)->slot217()->z;
		if (pThis->slot217()->z > flZ)
			flZ = pThis->slot217()->z;
		float flDiff = flZ - pThis->slot217()->z;
		pView->m_flJumpHeight = g_104c614c + flDiff;
		sub_102c4e80();
	}
}
// END FUNCTION

// FUNCTION: 0x103b1470 size=0x7b
#include "CNPC_VSheriffMan.h"
extern char g_106b8540[];
struct ScopeTraceEntry { const char *a; const char *b; const char *c; };
struct S1070b228 { char pad[0xc]; int curtime; };
extern int *g_109f3680;
extern ScopeTraceEntry *g_109f3620;
extern S1070b228 *g_1070b228;
void CNPC_VSheriffMan::sub_103b1470(int unused)
{
    g_109f3620[*g_109f3680].a = "CNPC_VSheriffMan::StartAttacking";
    g_109f3620[*g_109f3680].b = g_106b8540;
    g_109f3620[*g_109f3680].c = g_106b8540;
    ++*g_109f3680;
    int t;
    sub_10013cf5(1, 1, 10); t = g_1070b228->curtime;
    *(int *)&m_flAttackStartTime = t;
    m_bAttacking = 1;
    *g_109f3680 -= 1;
}
// END FUNCTION

// FUNCTION: 0x103b1510 size=0x9c
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CNPC_VSheriffMan.h"
#include "CEntityVSlots.h"
#include "ScopeTrace.h"

void CNPC_VSheriffMan::sub_103b1510()
{
	ScopeTrace trace("CNPC_VSheriffMan::CacheFloorHeights", g_106b8540);
	CEntityVSlots *pEnt = sub_103b0930();
	if (pEnt) {
		*(int *)((char *)this + 0x66e8) = *(int *)&pEnt->slot217()->z;
		pEnt = sub_103b0ab0(0);
		if (pEnt) {
			int nHeight = *(int *)&pEnt->slot217()->z;
			*(char *)((char *)this + 0x66e7) = 1;
			*(int *)((char *)this + 0x66ec) = nHeight;
		}
	}
}
// END FUNCTION

// FUNCTION: 0x103b15e0 size=0x7a
#include "CNPC_VSheriffMan.h"
struct ScopeEnt { const char *name; const char *file; const char *file2; };
extern ScopeEnt *g_109f3620;
extern int *g_109f3680;
extern char g_106b8540[];

void CNPC_VSheriffMan::sub_103b15e0(int arg)
{
    g_109f3620[*g_109f3680].name = "CNPC_VSheriffMan::StartTransformation";
    g_109f3620[*g_109f3680].file = g_106b8540;
    g_109f3620[*g_109f3680].file2 = g_106b8540;
    ++*g_109f3680;
    m_pszSourceFile = "E:\\Vampire\\main\\dlls\\hl2_dll\\npc_vsheriffman.cpp";
    m_nSourceLine = 0x4c7;
    sub_102ae750(0x15b, 0);
    --*g_109f3680;
}
// END FUNCTION
