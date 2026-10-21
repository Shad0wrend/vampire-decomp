// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10215750 size=0x12e
#include "CPropButton.h"
#include "CBaseProp.h"
#include "CBaseAnimating.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

// TARGET: CPropButton::vfunc103
void CPropButton::vfunc103()
{
	((CBaseProp *)this)->vfunc103();
	int n = m_nPositions;
	n = (n > 7) ? 7 : ((n < 0) ? 0 : n);
	m_nPositions = n;
	int start = *(int *)((char *)this + 0x73c);
	if (start <= n)
		n = (start < 0) ? 0 : start;
	*(int *)((char *)this + 0x73c) = n;
	*(int *)((char *)this + 0x670) = n;
	sub_100b3580(0x40000);
	*(unsigned int *)((char *)this + 0x19c) |= 0xa0;
	sub_100a9470(0);
	char *pHdr = (char *)((CBaseAnimating *)this)->sub_100952d0(-1);
	if (pHdr) {
		{
			ScopeTrace trace("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
			((CCollisionProperty *)((char *)this + 0x270))->sub_100dc480(3);
		}
		sub_100adf10((float *)(pHdr + 0xb4), (float *)(pHdr + 0xc0));
		sub_100aaa40(1);
		((CCollisionProperty *)((char *)this + 0x270))->sub_100ddd90();
		sub_100b3b00();
	}
}
// END FUNCTION

// FUNCTION: 0x10215a30 size=0x7f
#include "CPropButton.h"
#include "CUnknown1073dc00.h"

extern CUnknown1073dc00 g_1073dc00;
extern int g_1074f148;

void CPropButton::vfunc265(void *pActivator, void *pCaller, int useType, float value)
{
	if (!m_bLocked) {
		m_OnPressed.sub_100cd660(pActivator, this, 0);
		if (m_nPosition >= m_nPositions)
			sub_10215ad0(0, pActivator);
		else
			sub_10215ad0(m_nPosition + 1, pActivator);
		return;
	}
	m_OnLocked.sub_100cd660(pActivator, this, 0);
	g_1073dc00.sub_101f5950(this, g_1074f148, 2, 1.0f, 1.25f);
}
// END FUNCTION
