// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d9ae0 size=0x1e
#include "CAI_InterestingPlace.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_InterestingPlace::vfunc5
CAI_InterestingPlace *CAI_InterestingPlace::vfunc5(unsigned int flags)
{
	sub_1000a25e();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d9c20 size=0x150
#include "CAI_InterestingPlace.h"
#include "ScopeTrace.h"

extern "C" int strcmp(const char *, const char *);
#pragma intrinsic(strcmp)
extern "C" __declspec(dllimport) void Warning(const char *fmt, ...);
__declspec(dllimport) void DevMsg(const char *fmt, ...);
void *operator new(unsigned int);
int sub_102dd9c0(const char *pszName);
void sub_101cd970(CBaseEntity *pEnt);

void CAI_InterestingPlace::vfunc103()
{
	const char *pszName = *(const char * volatile *)&m_pszTypeName;
	if (strcmp(pszName ? pszName : g_106b8540, g_106b8540) != 0) {
		m_pType = sub_102dd9c0(m_pszTypeName ? m_pszTypeName : g_106b8540);
		if (!m_pType) {
			Warning("Could not find InterestingPlaceType for '%s'\n", m_pszTypeName ? m_pszTypeName : g_106b8540);
			sub_101cd970(this);
			return;
		}
	}
	if (m_nSlots > 20)
		DevMsg("Warning:  Possible speed issues with an interesting place that has over 20 free slots\n");
	m_pSlots = (CAI_IPSlot *)operator new(m_nSlots * sizeof(CAI_IPSlot));
	if (m_pSlots) {
		for (int i = 0; i < m_nSlots; i++)
			m_pSlots[i].m_first = 0;
	}
	m_n588 = 0;
	if (m_nGroup >= 1 && m_nGroup <= 32)
		m_nGroup = 1 << (m_nGroup - 1);
	else
		m_nGroup = 1;
	if (m_nPriority < 0)
		m_nPriority = 0;
	else if (m_nPriority > 5)
		m_nPriority = 5;
}
// END FUNCTION
