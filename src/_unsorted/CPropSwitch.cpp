// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020d6f0 size=0x13
#include "CPropSwitch.h"
#include "CBaseEntitySlots.h"

void CPropSwitch::vfunc104()
{
	((CBaseEntitySlots *)this)->slot71();
	sub_1018e0d0();
}
// END FUNCTION

// FUNCTION: 0x1020d9c0 size=0xf5
#include "ScopeTrace.h"
#include "CBaseEntity.h"
#include "CGlobalEntityList.h"
#include "CPropSwitch.h"

extern CGlobalEntityList g_106eb5d8;
extern "C" int __cdecl _strcmpi(const char *, const char *);
extern "C" void *__cdecl __RTDynamicCast(void *pObject, long lDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_10538764[];	// RTTI type descriptor of CBaseEntity
extern char g_105a6404[];	// RTTI type descriptor of CPropSwitch

void CPropSwitch::vfunc113()
{
	CBaseEntity::vfunc113();
	const char *pszName = *(const char **)((char *)this + 0x730);
	CBaseEntity *pEnt = g_106eb5d8.sub_100f7770(0, pszName ? pszName : g_106b8540, 0, 0);
	if (pEnt) {
		const char *pszClass = pEnt->m_classname11c;
		if (!_strcmpi(pszClass ? pszClass : g_106b8540, "prop_switch")) {
			CPropSwitch *pSwitch = (CPropSwitch *)__RTDynamicCast(pEnt, 0, g_10538764, g_105a6404, 0);
			if (pSwitch)
				*(unsigned int *)((char *)this + 0x740) = *pSwitch->vfunc1();
			else
				*(unsigned int *)((char *)this + 0x740) = 0xffffffff;
		}
	}
	*(int *)((char *)this + 0x7a8) = sub_1008f7b0("activate");
	*(int *)((char *)this + 0x7ac) = sub_1008f7b0("deactivate");
	*(int *)((char *)this + 0x7b0) = sub_1008f7b0("idle_on");
	*(int *)((char *)this + 0x7b4) = sub_1008f7b0("idle_off");
	if (*((char *)this + 0x7a5))
		sub_1020df00(*(int *)((char *)this + 0x7b0));
	else
		sub_1020df00(*(int *)((char *)this + 0x7b4));
}
// END FUNCTION
