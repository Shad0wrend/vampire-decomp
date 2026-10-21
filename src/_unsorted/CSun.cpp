// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c2530 size=0x1e
#include "CSun.h"

void sub_100aa7b0(void *p);

// TARGET: CSun::vfunc5
CSun *CSun::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2560 size=0x7e
#include "CSun.h"
struct CSunView {
	char m_pad0[0x1b1];
	char m_bFlag1b1;
	char m_pad1[0x20c - 0x1b2];
	const char *m_pszTarget;
};
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];

typedef Vector *(__fastcall *GetOriginFn)(void *);
#define GETORIGIN(p) ((*(GetOriginFn **)(p))[220](p))

// TARGET: CSun::vfunc113
void CSun::vfunc113()
{
	CSunView *pView = (CSunView *)this;
	const char *pszName = pView->m_pszTarget;
	if (!pszName)
		pszName = g_106b8540;
	CBaseEntity *pTarget = g_106eb5d8.sub_100f7770(0, pszName, 0, 0);
	if (pTarget) {
		m_vecDir = *GETORIGIN(this) - *GETORIGIN(pTarget);
		VectorNormalize(m_vecDir);
	}
	pView->m_bFlag1b1 = 1;
}
// END FUNCTION
