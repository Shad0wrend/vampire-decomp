// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x103f1b60 size=0xec
#include "ScopeTrace.h"
#include "CBaseCombatCharacter.h"
#include "CVampireProjectile_MingXiaoSpit.h"

struct S_1070b228 { char pad[0xc]; float curtime; };
extern S_1070b228 *g_1070b228;

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
	if (g_1070b228->curtime >= m_flExpireTime) {
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
