// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1023cff0 size=0x6
#include "CWorldEvents.h"
namespace lifted {
extern char g_105c2a50;
}
datamap_t * CWorldEvents::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105c2a50);
}
// END FUNCTION

// FUNCTION: 0x1023d930 size=0x196
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CWorldEvents.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern "C" __declspec(dllimport) void __cdecl Error(const char *pszFormat, ...);
extern CWorldEvents *g_107532ec;

CWorldEvents::CWorldEvents() : CBaseEntity(0)
{
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	vfunc93(0, 0);
	if (g_107532ec)
		Error("More than one worldevents entity on the map!");
	g_107532ec = this;
}
// END FUNCTION

// FUNCTION: 0x1023db40 size=0x1e
#include "CWorldEvents.h"

void sub_100aa7b0(void *p);

// TARGET: CWorldEvents::vfunc5
CWorldEvents *CWorldEvents::vfunc5(unsigned int flags)
{
	sub_10014c09();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1023dcf0 size=0xab
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CWorldEvents.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CWorldEvents::vfunc113()
{
	CBaseEntity::vfunc113();
	vfunc78();
	{
		ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(0);
	}
	vfunc93(0, 0);
	sub_100b3580(0x40000);
	*(unsigned int *)((char *)this + 0x19c) = 0xe0;
}
// END FUNCTION
