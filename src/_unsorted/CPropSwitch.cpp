// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1020d150 size=0x6
#include "CPropSwitch.h"
namespace lifted {
extern char g_105aa864;
}
datamap_t * CPropSwitch::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105aa864);
}
// END FUNCTION

// FUNCTION: 0x1020d680 size=0x4c
#include "CPropSwitch.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1008b3c0(void *p);
void sub_100aa7b0(void *p);
// TARGET: CPropSwitch::vfunc5
CBaseEntity *CPropSwitch::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x78c);
	sub_100cd2d0((char *)this + 0x774);
	sub_100cd2d0((char *)this + 0x75c);
	sub_100cd2d0((char *)this + 0x744);
	sub_1008b3c0(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return (CBaseEntity *)(this);
}
// END FUNCTION

// FUNCTION: 0x1020d6f0 size=0x13
#include "CPropSwitch.h"
#include "CBaseEntitySlots.h"

void CPropSwitch::vfunc104()
{
	((CBaseEntitySlots *)this)->slot71();
	sub_1018e0d0();
}
// END FUNCTION

// FUNCTION: 0x1020d720 size=0xe5
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "ScopeTrace.h"
#include "CPropSwitch.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_1074f13c;
extern int g_1074f140;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

struct CSoundNameView
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};

// TARGET: CPropSwitch::vfunc71
void CPropSwitch::vfunc71()
{
	m_nVSoundTableIdx = 0;
	m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CSoundNameView *)((char *)this + 0xc0))->Get(), 0);

	g_1074f13c = FindSoundId("on");
	g_1074f140 = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x1020d850 size=0x11f
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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
void CPropSwitch::vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value)
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

// FUNCTION: 0x1020dfc0 size=0x20
#include "CPropSwitch.h"

int CPropSwitch::vfunc35(int a)
{
	if (sub_1020e020())
		return *(int *)((char *)this + 0x738);
	return *(int *)((char *)this + 0x734);
}
// END FUNCTION

// FUNCTION: 0x1020dff0 size=0x16
#include "CPropSwitch.h"

int CPropSwitch::vfunc34(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION

// FUNCTION: 0x1020e100 size=0x38
// TARGET: CPropSwitch::vfunc130
#include "CPropSwitch.h"
#include "CBaseAnimating.h"

void CPropSwitch::vfunc130(int a)
{
    if ((char)a != 0) {
        if (*(int *)((char *)this + 0x73c) == 2) {
            *(char *)((char *)this + 0x7a5) = 1;
            ((CBaseAnimating *)this)->CBaseAnimating::vfunc130(a);
            return;
        }
        if (*(int *)((char *)this + 0x73c) == 1) {
            *(char *)((char *)this + 0x7a5) = 0;
        }
    }
    ((CBaseAnimating *)this)->CBaseAnimating::vfunc130(a);
}
// END FUNCTION

// FUNCTION: 0x1020e150 size=0x6
#include "CPropSwitch.h"
int CPropSwitch::vfunc117()
{
    return 8;
}
// END FUNCTION
