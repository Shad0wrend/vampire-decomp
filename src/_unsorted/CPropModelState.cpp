// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
