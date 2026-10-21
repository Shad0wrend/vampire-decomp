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

// FUNCTION: 0x1020d850 size=0x11f
#include "CPropSwitch.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

void CPropSwitch::vfunc103()
{
	sub_1018df70();
	*(int *)((char *)this + 0x19c) = 0xa0;
	if (!(m_flags204 & 0x8000)) {
		char *pHdr = (char *)sub_100952d0(-1);
		if (pHdr) {
			CCollisionProperty *pCollision;
			{
				ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
				pCollision = (CCollisionProperty *)((char *)this + 0x270);
				pCollision->sub_100dc480(3);
			}
			sub_100adf10((const float *)(pHdr + 0xb4), (const float *)(pHdr + 0xc0));
			sub_100aaa40(1);
			pCollision->sub_100ddd90();
			sub_100b3b00();
		}
	}
	if (m_flags204 & 0x4000)
		*((char *)this + 0x7a4) = 1;
	else
		*((char *)this + 0x7a4) = 0;
	if (m_flags204 & 0x2000) {
		*(int *)((char *)this + 0x670) = 1;
		*((char *)this + 0x7a5) = 1;
	} else {
		*(int *)((char *)this + 0x670) = 0;
		*((char *)this + 0x7a5) = 0;
	}
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

// FUNCTION: 0x1020db30 size=0x144
#include "CPropSwitch.h"
#include "COutputEvent.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"

struct CPropSwitchUnit : CPropSwitch
{
	void sub_1020dce0(char bOn);
};

struct CPropSwitchUseFields
{
	char m_pad0000[0x740];
	unsigned int m_hLinked;
	char m_pad0744[0x774 - 0x744];
	COutputEvent m_OnOff;
	COutputEvent m_OnOn;
};

// TARGET: CPropSwitch::vfunc173
void CPropSwitch::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, float value)
{
	CPropSwitchUseFields *p = (CPropSwitchUseFields *)this;
	if (sub_1020e020()) {
		p->m_OnOn.sub_100cd660(pActivator, pCaller, 0);
		return;
	}
	p->m_OnOff.sub_100cd660(pActivator, pCaller, 0);
	if (sub_1020e040()) {
		((CPropSwitchUnit *)this)->sub_1020dce0(0);
		if (EHandle_Get(p->m_hLinked))
			((CPropSwitchUnit *)EHandle_Get(p->m_hLinked))->sub_1020dce0(0);
	} else {
		((CPropSwitchUnit *)this)->sub_1020dce0(1);
		if (EHandle_Get(p->m_hLinked))
			((CPropSwitchUnit *)EHandle_Get(p->m_hLinked))->sub_1020dce0(1);
	}
}
// END FUNCTION
