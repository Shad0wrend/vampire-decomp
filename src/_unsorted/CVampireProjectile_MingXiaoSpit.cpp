// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103f14b0 size=0x6
#include "CVampireProjectile_MingXiaoSpit.h"
namespace lifted {
extern char g_109430b8;
}
int CVampireProjectile_MingXiaoSpit::vfunc80()
{
    return (int)&lifted::g_109430b8;
}
// END FUNCTION

// FUNCTION: 0x103f14d0 size=0x3
#include "CVampireProjectile_MingXiaoSpit.h"
int CVampireProjectile_MingXiaoSpit::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x103f1740 size=0x6
#include "datamap.h"
#include "CVampireProjectile_MingXiaoSpit.h"
namespace lifted {
extern char g_1067e1c8;
}
datamap_t * CVampireProjectile_MingXiaoSpit::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1067e1c8);
}
// END FUNCTION

// FUNCTION: 0x103f1810 size=0x1e
#include "CVampireProjectile_MingXiaoSpit.h"

void sub_100aa7b0(void *p);

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc5
CVampireProjectile_MingXiaoSpit *CVampireProjectile_MingXiaoSpit::vfunc5(unsigned int flags)
{
	sub_1000a21d();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103f1840 size=0x5d
#include "CVampireProjectile_MingXiaoSpit.h"
#include "CBaseCombatCharacter.h"
#include "CEHandleGet.h"

struct CVSpitEnt
{
	char m_pad[0x9c];
	CBaseCombatCharacter *m_pChar;
};

// TARGET: CVampireProjectile_MingXiaoSpit::~CVampireProjectile_MingXiaoSpit
CVampireProjectile_MingXiaoSpit::~CVampireProjectile_MingXiaoSpit()
{
	CVSpitEnt *pEnt = (CVSpitEnt *)EHandle_Get(m_hTarget);
	if (pEnt && pEnt->m_pChar)
	{
		pEnt->m_pChar->sub_103327f0(500.0f);
		m_hTarget = -1;
	}
}
// END FUNCTION

// FUNCTION: 0x103f18c0 size=0x5
#include "CVampireProjectile_MingXiaoSpit.h"
#include "CVampireProjectile.h"

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc104
// the game's 0x103f18c0: a tail call (jmp) of CVampireProjectile::vfunc104
void CVampireProjectile_MingXiaoSpit::vfunc104()
{
	CVampireProjectile::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103f18e0 size=0x19
#include "CVampireProjectile_MingXiaoSpit.h"
namespace lifted {
int sub_10007581();
}
void CVampireProjectile_MingXiaoSpit::vfunc103()
{
    *(int *)((char *)this + 0x8c0) = 0x7f7fffff;
    *(int *)((char *)this + 0x8bc) = -1;
    lifted::sub_10007581();
}
// END FUNCTION

// FUNCTION: 0x103f1910 size=0x5
#include "CVampireProjectile_MingXiaoSpit.h"
#include "CVampireProjectile.h"

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc265
// the game's 0x103f1910: a tail call (jmp) of CVampireProjectile::vfunc265
bool CVampireProjectile_MingXiaoSpit::vfunc265()
{
	return CVampireProjectile::vfunc265();
}
// END FUNCTION

// FUNCTION: 0x103f1930 size=0x5
#include "CVampireProjectile_MingXiaoSpit.h"
#include "CVampireProjectile.h"

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc113
// the game's 0x103f1930: a tail call (jmp) of CVampireProjectile::vfunc113
void CVampireProjectile_MingXiaoSpit::vfunc113()
{
	CVampireProjectile::vfunc113();
}
// END FUNCTION

// FUNCTION: 0x103f1950 size=0x163
#include "CVampireProjectile_MingXiaoSpit.h"
#include "CBaseCombatCharacter.h"
#include "CGlobalEntityList.h"
#include "Vector.h"

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
struct SChar {
	virtual void v0();
	virtual unsigned int *vfunc1();
	virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	S10(a1) S10(a2) S10(a3) S10(a4) S10(a5) S10(a6) S10(a7) S10(a8) S10(a9)
	S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5) S10(b6) S10(b7) S10(b8)
	virtual void s0(); virtual void s1();
	virtual Vector vfunc192();
};


extern CGlobalEntityList *g_10566458;
extern Vector g_1070d9d0;
extern const float g_104e37a4;
void sub_101d26b0(Vector origin, const char *name, CBaseEntity *pEnt, int a, int b, int c);
void sub_101d2780(Vector origin, const char *name, CBaseEntity *pEnt, int a, int b, int c);
void sub_101d2560(Vector origin, const char *name, Vector *pAngles, Vector *pOther, int a);

// TARGET: CVampireProjectile_MingXiaoSpit::vfunc266
void CVampireProjectile_MingXiaoSpit::vfunc266(CBaseEntity *pOther)
{
	unsigned int h = m_hTarget;
	CGlobalEntityList_Slot *pSlot;
	if (h == (unsigned int)-1
		|| (pSlot = &g_10566458->m_Slots[h & 0x1fff], pSlot->m_Serial != (int)(h >> 13))
		|| pSlot->m_pEntity == 0) {
		CBaseCombatCharacter *pChar = *(CBaseCombatCharacter **)((char *)pOther + 0x9c);
		if (pChar) {
			float t = gpGlobals->curtime;
			m_flExpireTime = t + g_104e37a4;
			m_hTarget = *((SChar *)pChar)->vfunc1();
			pChar->sub_103326b0(500.0f);
			sub_101d26b0(((SChar *)pChar)->vfunc192(), "Ming_xiao_vomit_player_emitter", (CBaseEntity *)pChar, 1, -1, 0);
			CBaseEntity *pHud = *(CBaseEntity **)((char *)pChar + 0xa8);
			if (pHud) {
				sub_101d2780(((SChar *)pChar)->vfunc192(), "Ming_xiao_hud_vomit_emitter", pHud, 0xe, 0, 0);
			}
			m_bImpactDone = 1;
		}
	}
	if (!m_bImpactDone) {
		Vector v = ((SChar *)this)->vfunc192();
		sub_101d2560(v, "Ming_xiao_vomit_impact_emitter", &v, &g_1070d9d0, 0);
		m_bImpactDone = 1;
	}
	CVampireProjectile::vfunc266(pOther);
}
// END FUNCTION

// FUNCTION: 0x103f1b60 size=0xec
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CVampireProjectile_MingXiaoSpit.h"


struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

void sub_101cd940(CBaseEntity *pEnt);

static inline CBaseEntity *ResolveHandle(volatile unsigned int *pHandle)
{
	unsigned int h = *pHandle;
	EntInfo *e;
	return (h != 0xffffffff && (e = &g_10566458->m_entries[h & 0x1fff], e->m_serial == (int)(h >> 13))) ? e->m_pEntity : 0;
}

void CVampireProjectile_MingXiaoSpit::vfunc134()
{
	if (gpGlobals->curtime >= m_flExpireTime) {
		*(volatile float *)&m_flExpireTime = 3.4028235e38f;
		CBaseEntity *pEnt = ResolveHandle(&m_hTarget);
		if (pEnt && *(CBaseCombatCharacter **)((char *)pEnt + 0x9c)) {
			(*(CBaseCombatCharacter **)((char *)pEnt + 0x9c))->sub_103327f0(500.0f);
			m_hTarget = 0xffffffff;
		}
		sub_101cd940(this);
	}
	ScopeTrace trace("CBaseEntity::Think", m_name26c ? m_name26c : g_106b8540);
	if (m_pfnThink)
		(this->*m_pfnThink)();
}
// END FUNCTION

// FUNCTION: 0x103f1c90 size=0xd
#include "CVampireProjectile_MingXiaoSpit.h"

// TARGET: vfunc272
void CVampireProjectile_MingXiaoSpit::vfunc272(const Vector *a1, const Vector *a2, CBaseEntity *a3, int a4, float a5, const char *a6, const char *a7)
{
    int t = *(int *)&a5;
    *(int *)&a5 = t;
    ((CVampireProjectile *)this)->CVampireProjectile::vfunc272(a1, a2, a3, a4, a5, a6, a7);
}
// END FUNCTION
