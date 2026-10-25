// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
