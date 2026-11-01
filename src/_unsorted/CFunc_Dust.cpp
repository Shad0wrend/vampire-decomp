// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10113680 size=0x6
#include "CFunc_Dust.h"
namespace lifted {
extern char g_10709dc8;
}
int CFunc_Dust::vfunc80()
{
    return (int)&lifted::g_10709dc8;
}
// END FUNCTION

// FUNCTION: 0x101136a0 size=0x3
#include "CFunc_Dust.h"
int CFunc_Dust::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x10113aa0 size=0x6
#include "CFunc_Dust.h"
namespace lifted {
extern char g_1056fac0;
}
CFunc_Dust::Datamap82 CFunc_Dust::vfunc82()
{
    return (CFunc_Dust::Datamap82)&lifted::g_1056fac0;
}
// END FUNCTION

// FUNCTION: 0x10113c10 size=0x8
#include "CFunc_Dust.h"
// TARGET: CFunc_Dust::vfunc117
char CFunc_Dust::vfunc117() { char c = ((CBaseEntity *)this)->CBaseEntity::vfunc117(); return c & (char)0xfd; }
// END FUNCTION

// FUNCTION: 0x10113cc0 size=0x1e
#include "CFunc_Dust.h"

void sub_100aa7b0(void *p);

// TARGET: CFunc_Dust::vfunc5
CFunc_Dust *CFunc_Dust::vfunc5(unsigned int flags)
{
	sub_10004fca();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10113d10 size=0xf5
#include "CFunc_Dust.h"
#include "CUnknown101466e0.h"
#include "ScopeTrace.h"
#include <string.h>

struct CFuncDustFields
{
	char m_pad0000[0x1b0];
	CUnknown101466e0 m_b1b0;
	char m_b1b1;
	char m_pad01b2[0x26c - 0x1b2];
	const char *m_name26c;
	char m_pad0270[0x470 - 0x270];
	const char *m_isz470;
};

// TARGET: CFunc_Dust::vfunc103
void CFunc_Dust::vfunc103()
{
	CBaseEntity *pEnt = (CBaseEntity *)this;
	CFuncDustFields *pFields = (CFuncDustFields *)this;
	int local;
	const char *model = *pEnt->vfunc9(&local);
	pEnt->vfunc105(model ? model : g_106b8540);
	const char *isz = pFields->m_isz470 ? pFields->m_isz470 : g_106b8540;
	if (strlen(isz) == 0)
		pFields->m_isz470 = ("materials/particle/sparkles.vmt")[0] ? "materials/particle/sparkles.vmt" : 0;
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", pFields->m_name26c ? pFields->m_name26c : g_106b8540);
		CCollisionProperty *pCol = (CCollisionProperty *)((char *)this + 0x270);
		pCol->sub_100dc580(pCol->m_usSolidFlags | 0x20);
	}
	pFields->m_b1b0.sub_101466e0(1);
	pFields->m_b1b1 = 1;
	pEnt->CBaseEntity::vfunc103();
}
// END FUNCTION

// FUNCTION: 0x10113e70 size=0xca
#include "CFunc_Dust.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" int __cdecl atoi(const char *);

bool CFunc_Dust::vfunc110(const char *szKeyName, const char *szValue)
{
	unsigned int *pFlags = (unsigned int *)((char *)this + 0x474);
	if (_strcmpi(szKeyName, "StartDisabled") == 0) {
		if (*szValue == '1')
			*pFlags &= ~1u;
		else
			*pFlags |= 1;
		return true;
	}
	if (_strcmpi(szKeyName, "Alpha") == 0) {
		*((unsigned char *)this + 0x453) = (unsigned char)atoi(szValue);
		return true;
	}
	if (_strcmpi(szKeyName, "Frozen") == 0) {
		if (*szValue == '1')
			*pFlags |= 4;
		else
			*pFlags &= ~4u;
		return true;
	}
	return sub_1009e430(szKeyName, szValue);
}
// END FUNCTION
