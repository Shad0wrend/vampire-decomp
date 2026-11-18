// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10104290 size=0x6
#include "CParamsExplosion.h"
namespace lifted {
extern char g_1056ab10;
}
datamap_t * CParamsExplosion::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1056ab10);
}
// END FUNCTION

// FUNCTION: 0x10104370 size=0x1e
#include "CParamsExplosion.h"

void sub_100aa7b0(void *p);

// TARGET: CParamsExplosion::vfunc5
CBaseEntity *CParamsExplosion::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x101043a0 size=0x13
#include "CParamsExplosion.h"
void __fastcall sub_10001f28(CParamsExplosion *self);

// TARGET: CParamsExplosion::vfunc103
void CParamsExplosion::vfunc103()
{
	sub_10001f28(this);
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x101043d0 size=0xf1
#include "CBaseEntity.h"
#include "CParamsExplosion.h"
extern char g_106b8540[];
inline const char *STRINGR(const char *const &s) { return s ? s : g_106b8540; }
__declspec(dllimport) char *Q_strncpy(char *dest, const char *src, int n);
void sub_10014e93(const char *src, char *dest, int n);

void CParamsExplosion::vfunc104()
{
	char buf[260];
	sub_10014e93(STRINGR(m_pszModel454), buf, 260);
	Q_strncpy(m_szModel491, buf, 0x80);
	Q_strncpy(m_szSound511, STRINGR(m_pszSound458), 0x80);
	m_nFlags47c = 0;
	if (!m_b450)
		m_nFlags47c = 0x80;
	if (!m_b451)
		m_nFlags47c |= 0x2000;
	if (!m_b452)
		m_nFlags47c |= 0x20000000;
	m_n45c = *(int *)((char *)this + 0x204);
	if (m_szSound511[0])
		enginesound->vfunc0(m_szSound511, 1);
	if (m_szModel491[0])
		engine->vfunc17(m_szModel491, 1);
}
// END FUNCTION
