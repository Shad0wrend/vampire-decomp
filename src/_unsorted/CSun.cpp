// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101c2100 size=0x6
#include "CSun.h"
namespace lifted {
extern char g_1072c7fc;
}
int CSun::vfunc80()
{
    return (int)&lifted::g_1072c7fc;
}
// END FUNCTION

// FUNCTION: 0x101c2120 size=0x3
#include "CSun.h"
int CSun::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x101c2420 size=0x6
#include "CSun.h"
namespace lifted {
extern char g_1059c5b0;
}
datamap_t * CSun::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1059c5b0);
}
// END FUNCTION

// FUNCTION: 0x101c24b0 size=0x57
#include "CSun.h"
#include "CUnknown101466e0.h"

CSun::CSun() : CBaseEntity(0)
{
	m_vecDir.Init(0.0f, 0.0f, 1.0f);
	CUnknown101466e0 *p = (CUnknown101466e0 *)((char *)this + 0x1b0);
	p->sub_101466e0(1);
	*(int *)((char *)this + 0x468) = 1;
	*(unsigned int *)((char *)this + 0x268) |= 0x80;
}
// END FUNCTION

// FUNCTION: 0x101c2530 size=0x1e
#include "CSun.h"

void sub_100aa7b0(void *p);

// TARGET: CSun::vfunc5
CBaseEntity *CSun::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101c2560 size=0x7e
#include "CGlobalEntityList.h"
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
