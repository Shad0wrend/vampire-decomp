// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10215c40 size=0x6
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
	p->m_nField0bc = 0;
	p->m_nSoundSet0b4 = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CUnknown1073dc28Name *)&p->m_pszSoundName0c0)->Get(), 0);

	g_1074f14c = FindSoundId("on");
	g_1074f150 = FindSoundId("off");
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
