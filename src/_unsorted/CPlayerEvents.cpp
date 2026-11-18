// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102266a0 size=0x6
#include "datamap.h"
#include "CPlayerEvents.h"
namespace lifted {
extern char g_105b28c0;
}
datamap_t * CPlayerEvents::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105b28c0);
}
// END FUNCTION

// FUNCTION: 0x102270b0 size=0x30
#include "CPlayerEvents.h"
CPlayerEvents::CPlayerEvents() : CBaseEntity(0)
{
}
// END FUNCTION

// FUNCTION: 0x102270f0 size=0x3c
#include "CPlayerEvents.h"

void sub_100aa7b0(void *p);

CBaseEntity *CPlayerEvents::vfunc5(unsigned int flags)
{
	COutputEvent *p = m_Outputs + 23;
	int n = 23;
	do {
		p--;
		p->sub_100cd2d0();
	} while (--n);
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10227140 size=0x23
#include "CPlayerEvents.h"
#include "CUnknown10750cb4.h"

extern CUnknown10750cb4 g_10750cb4;

// TARGET: CPlayerEvents::vfunc106
void CPlayerEvents::vfunc106(const char *pszName)
{
	CBaseEntity::vfunc106(pszName);
	m_bFiring450 = 1;
	g_10750cb4.sub_102277a0(this);
}
// END FUNCTION

// FUNCTION: 0x10227180 size=0x16
#include "CPlayerEvents.h"
#include "CUnknown10227910.h"

extern CUnknown10227910 g_10750cb4;

void CPlayerEvents::vfunc180()
{
	g_10750cb4.sub_10227910(this);
	CBaseEntity::vfunc180();
}
// END FUNCTION
