// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101d3190 size=0x19
#include "CTraceFilterSimple.h"

// TARGET: CTraceFilterSimple::CTraceFilterSimple
CTraceFilterSimple::CTraceFilterSimple(void *pPassEnt, int collisionGroup)
{
	m_pPassEnt = pPassEnt;
	m_collisionGroup = collisionGroup;
}
// END FUNCTION

// FUNCTION: 0x101d31c0 size=0x173
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CTraceFilterSimple.h"

#define TF_V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct TraceEntX {
	TF_V10(a0) TF_V10(a1) TF_V10(a2) TF_V10(a3) TF_V10(a4) TF_V10(a5)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
	virtual bool vfunc68(TraceEntX *pOther);
	TF_V10(c0) TF_V10(c1)
	virtual void d0(); virtual void d1();
	virtual bool vfunc91(int group, int mask);
	char pad04[0x9c - 4];
	CBaseEntity *m_pOwner;	// 0x9c
	char pad0a0[0x368 - 0xa0];
	int m_nCollisionGroup;	// 0x368
};
struct RulesX {
	TF_V10(a0) TF_V10(a1) TF_V10(a2) TF_V10(a3) TF_V10(a4) TF_V10(a5) TF_V10(a6)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6();
	virtual bool vfunc77(int groupA, int groupB);
};
extern RulesX *g_1070ba0c;
bool __cdecl sub_101d3080(void *pEnt, int mask);
bool __cdecl sub_101d2fc0(void *pEnt, void *pPassEnt);

bool CTraceFilterSimple::vfunc0(void *pHandleEntity, int contentsMask)
{
	ScopeTrace trace("CTraceFilterSimple::ShouldHitEntity", g_106b8540);
	TraceEntX *pEnt = (TraceEntX *)pHandleEntity;
	if (!sub_101d3080(pEnt, contentsMask))
		return false;
	if (m_pPassEnt) {
		if (!sub_101d2fc0(pEnt, m_pPassEnt))
			return false;
	}
	if (!pEnt->vfunc91(m_collisionGroup, contentsMask))
		return false;
	if (pEnt->m_pOwner && (!*((char *)pEnt->m_pOwner + 0x1480) || pEnt->m_pOwner->sub_100b5190()))
		return false;
	if (!g_1070ba0c->vfunc77(m_collisionGroup, pEnt->m_nCollisionGroup))
		return false;
	if (contentsMask != 0x46004003 && m_pPassEnt) {
		TraceEntX *pPass = (TraceEntX *)m_pPassEnt;
		if (pEnt->vfunc68(pPass) || pPass->vfunc68(pEnt))
			return false;
	}
	return true;
}
// END FUNCTION
