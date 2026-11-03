// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101ccd70 size=0x20
#include "CTraceFilterSimpleTwoEnt.h"

CTraceFilterSimpleTwoEnt::CTraceFilterSimpleTwoEnt(const void *pPassEnt, const void *pPassEnt2, int collisionGroup)
{
	m_pPassEnt = (void *)pPassEnt;
	m_pPassEnt2 = (void *)pPassEnt2;
	m_collisionGroup = collisionGroup;
}
// END FUNCTION

// FUNCTION: 0x101ccda0 size=0xdf
#include "CTraceFilterSimpleTwoEnt.h"

struct CEntQ;
char sub_101d2fc0(CEntQ *pHandleEntity, CEntQ *pPassEnt);

#define SL10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();

struct StaticPropMgrSlots
{
	virtual void a0(); virtual void a1(); virtual void a2();
	virtual bool IsStaticProp(void *pHandleEntity);	// slot 3
};

struct RulesSlots
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5) SL10(a6)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3(); virtual void b4(); virtual void b5(); virtual void b6();
	virtual bool ShouldCollide(int group0, int group1);	// slot 77
};

struct TraceEntity
{
	SL10(a0) SL10(a1) SL10(a2) SL10(a3) SL10(a4) SL10(a5)
	virtual void b0(); virtual void b1(); virtual void b2(); virtual void b3();
	virtual void b4(); virtual void b5(); virtual void b6(); virtual void b7();
	virtual bool CollisionRulesIgnore(TraceEntity *pOther);	// slot 68
	SL10(c0) SL10(c1)
	virtual void d0(); virtual void d1();
	virtual bool ShouldCollide(int collisionGroup, int contentsMask);	// slot 91
	char m_pad0004[0x364];
	int m_nCollisionGroup;	// 0x368
};

struct HandleEntitySlots
{
	virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3();
	virtual TraceEntity *GetBaseEntity();	// slot 4
};

extern StaticPropMgrSlots *g_1070b240;
extern RulesSlots *g_1070ba0c;

bool CTraceFilterSimpleTwoEnt::vfunc0(void *pHandleEntity, int contentsMask)
{
	if (m_pPassEnt && !sub_101d2fc0((CEntQ *)pHandleEntity, (CEntQ *)m_pPassEnt))
		return false;
	if (m_pPassEnt2 && !sub_101d2fc0((CEntQ *)pHandleEntity, (CEntQ *)m_pPassEnt2))
		return false;
	TraceEntity *pEntity;
	if (g_1070b240->IsStaticProp(pHandleEntity)) {
		pEntity = 0;
	} else {
		pEntity = ((HandleEntitySlots *)pHandleEntity)->GetBaseEntity();
		if (pEntity) {
			if (!pEntity->ShouldCollide(m_collisionGroup, contentsMask))
				return false;
			if (!g_1070ba0c->ShouldCollide(m_collisionGroup, pEntity->m_nCollisionGroup))
				return false;
		}
	}
	TraceEntity *pPass;
	if (contentsMask != 0x46004003 && (pPass = (TraceEntity *)m_pPassEnt, pEntity != 0) && pPass != 0) {
		if (pEntity->CollisionRulesIgnore(pPass) || pPass->CollisionRulesIgnore(pEntity))
			return false;
	}
	return true;
}
// END FUNCTION
