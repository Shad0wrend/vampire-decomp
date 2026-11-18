// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018d3d0 size=0x6
#include "datamap.h"
#include "CPointHurt.h"
namespace lifted {
extern char g_1058c6f0;
}
datamap_t * CPointHurt::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1058c6f0);
}
// END FUNCTION

// FUNCTION: 0x1018d4e0 size=0xbd
#include "CPointHurt.h"
void sub_100058c6();

void CPointHurt::vfunc103()
{
	sub_100ac4e0(0, 0, 0);
	*(int *)((char *)this + 0x1f0) = 0;
	m_hActivator = (CBaseEntity *)0;
	if (m_flags204 & 1) {
		sub_100ac4e0((int)sub_100058c6, 0, 0);
		*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
	}
	*(float *)((char *)this + 0x17c) = gpGlobals->curtime + 0.1f;
	if (m_flRadius <= 0.0f)
		m_flRadius = 128.0f;
	if (m_nDamage <= 0)
		m_nDamage = 2;
	if (m_flDelay <= 0.0f)
		m_flDelay = 0.1f;
	vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1018d5d0 size=0x1
#include "CPointHurt.h"
void CPointHurt::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1018d910 size=0x1e
#include "CPointHurt.h"

void sub_100aa7b0(void *p);

// TARGET: CPointHurt::vfunc5
CBaseEntity *CPointHurt::vfunc5(unsigned int flags)
{
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
