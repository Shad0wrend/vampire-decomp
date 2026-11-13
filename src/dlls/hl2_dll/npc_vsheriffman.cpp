// Matched functions only. Written by pcdecomp; change it through pcdecomp.
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
