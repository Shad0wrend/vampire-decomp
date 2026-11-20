// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10215c40 size=0x6
#include "datamap.h"
#include "CPropModelState.h"
namespace lifted {
extern char g_105ac430;
}
datamap_t * CPropModelState::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac430);
}
// END FUNCTION

// FUNCTION: 0x102163e0 size=0x52
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_102163e0(unsigned int flags);
};

// TARGET: Helper::sub_102163e0
void *Helper::sub_102163e0(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x850);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x778))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x760))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10216460 size=0x5e
#include "CPropModelState.h"
extern char g_106b8540[];
void CPropModelState::vfunc104()
{
	vfunc71();
	sub_1018e0d0();
	m_pfnUse = (void (CBaseEntity::*)(CBaseEntity *, CBaseEntity *, int, float))&CPropModelState::sub_10217160;
	for (int i = 0; i < 8; i++) {
		if (!m_pStateModels[i])
			return;
		m_nStates++;
		const char *pName = m_pStateModels[i];
		if (!pName)
			pName = g_106b8540;
		engine->vfunc13(pName, 0);
	}
}
// END FUNCTION

// FUNCTION: 0x102164e0 size=0xe5
#include "CPropModelState.h"
#include "CBaseButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_1074f14c;
extern int g_1074f150;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

void CPropModelState::vfunc71()
{
	CBaseButton *p = (CBaseButton *)this;
	p->m_nVSoundTableIdx = 0;
	p->m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CUnknown1073dc28Name *)&p->m_iszVSoundGroup)->Get(), 0);

	g_1074f14c = FindSoundId("on");
	g_1074f150 = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x10216610 size=0x190
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CPropModelState.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

inline bool PropModelState_FlagBit(unsigned int flags, int bit)
{
	return (flags >> bit) & 1;
}

#define CLAMPX(val, minv, maxv) ((val) > (maxv) ? (maxv) : ((val) < (minv) ? (minv) : (val)))

// TARGET: CPropModelState::vfunc103
void CPropModelState::vfunc103()
{
	m_nStates = 0;
	m_pStateModels[0] = *(const char **)((char *)this + 0x388);
	sub_1018df70();
	m_nStates = CLAMPX(m_nStates, 0, 7);
	m_iState = CLAMPX(m_iState, 0, m_nStates);
	const char *model = m_pStateModels[m_iState];
	vfunc105(model ? model : g_106b8540);
	if (!(m_flags204 & 1))
		sub_100b3580(0x40000);
	else
		sub_100b3640(0x40000);
	*(int *)((char *)this + 0x19c) = !PropModelState_FlagBit(m_flags204, 1) ? (*(int *)((char *)this + 0x19c) | 0xa0) : (*(int *)((char *)this + 0x19c) & ~0xa0);
	sub_10260a50(0);
	sub_100a9470(0);
	char *hdr = sub_100952d0(-1);
	if (hdr)
	{
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(3);
		}
		sub_100adf10((const float *)(hdr + 0xb4), (const float *)(hdr + 0xc0));
		if (PropModelState_FlagBit(m_flags204, 2))
			sub_100aaa40(0);
		else
			sub_100aaa40(1);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x10216810 size=0x8
#include "CPropModelState.h"
namespace lifted {
int sub_10006703();
}
int CPropModelState::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x10216970 size=0x7f
#include "CPropModelState.h"
#include "CUnknown1073dc00.h"

extern CUnknown1073dc00 g_1073dc00;
extern int g_1074f150;

void CPropModelState::vfunc265(void *pActivator, void *pCaller, int useType, float value)
{
	if (!m_bLocked) {
		m_OnPressed.sub_100cd660(pActivator, this, 0);
		if (m_iState >= m_nStates - 1)
			sub_10216aa0(0, pActivator);
		else
			sub_10216aa0(m_iState + 1, pActivator);
		return;
	}
	m_OnLocked.sub_100cd660(pActivator, this, 0);
	g_1073dc00.sub_101f5950(this, g_1074f150, 2, 1.0f, 1.25f);
}
// END FUNCTION

// FUNCTION: 0x10216a10 size=0x22
// TARGET: CPropModelState::vfunc34
#include "CPropModelState.h"
int CPropModelState::vfunc34(CBaseEntity *pActivator)
{
    if (m_bLocked != 0) {
        return 0;
    }
    return sub_100a7bd0(pActivator) != 0;
}
// END FUNCTION

// FUNCTION: 0x10216a50 size=0x33
#include "CPropModelState.h"
// TARGET: CPropModelState::vfunc35
int CPropModelState::vfunc35(void *pActivator)
{
	if (m_bLocked)
		return 0;
	if (!sub_100a7bd0((CBaseEntity *)pActivator))
		return 0;
	return m_n730;
}
// END FUNCTION
