// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101aa9c0 size=0x165
#include "CBaseEntity.h"
#include "CPayphone.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

struct CGlobalVarsView { char pad[0xc]; float curtime; };
extern CGlobalVarsView *g_1070b228;

// TARGET: CPayphone::vfunc103
void CPayphone::vfunc103()
{
    CCollisionProperty *coll;
    sub_10298d30();
    *(float *)((char *)this + 0x17c) = g_1070b228->curtime + 0.1f;
    vfunc93(0, 0);
    {
        ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
        coll = (CCollisionProperty *)((char *)this + 0x270);
        coll->sub_100dc480(2);
    }
    m_iHealth = 80000;
    m_nTakeDamage = 0;
    sub_100b3580(0x10000);
    *(int *)((char *)this + 0x6f0) = 0;
    sub_10090950();
    *(int *)((char *)this + 0x6f8) = 0;
    {
        ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
        coll->sub_100dc580(coll->m_usSolidFlags | 4);
    }
    sub_100b3900(4);
    sub_100b3840(0x10);
}
// END FUNCTION

// FUNCTION: 0x101aaee0 size=0x77
#include "CPayphone.h"

inline bool BitSet(unsigned int v, int n)
{
	return ((v >> n) & 1) != 0;
}

bool CPayphone::vfunc295(void *pOther)
{
	if (!pOther)
		return false;
	if (!*(int *)((char *)this + 0x128))
		return false;
	if (sub_10014da8())
		return false;
	if (!*((char *)this + 0x1088))
		return false;
	if (BitSet(*(unsigned int *)((char *)this + 0x5b64), 2))
		return false;
	if (*(unsigned int *)((char *)this + 0x14b8) & 0x80000)
		return false;
	return sub_1000b005() ? false : true;
}
// END FUNCTION

// FUNCTION: 0x101ab1b0 size=0x1e
#include "CPayphone.h"

void sub_100aa7b0(void *p);

// TARGET: CPayphone::vfunc5
CPayphone *CPayphone::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
