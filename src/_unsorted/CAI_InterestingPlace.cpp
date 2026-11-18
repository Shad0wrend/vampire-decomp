// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x102d9500 size=0x6
#include "CAI_InterestingPlace.h"
namespace lifted {
extern char g_1060bdd8;
}
datamap_t * CAI_InterestingPlace::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1060bdd8);
}
// END FUNCTION

// FUNCTION: 0x102d9ae0 size=0x1e
#include "CAI_InterestingPlace.h"

void sub_100aa7b0(void *p);

// TARGET: CAI_InterestingPlace::vfunc5
CBaseEntity *CAI_InterestingPlace::vfunc5(unsigned int flags)
{
	sub_1000a25e();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102d9b10 size=0xc3
#include "CAI_InterestingPlace.h"

extern CAI_InterestingPlace *g_10927194;
extern int g_10927198;

// TARGET: CAI_InterestingPlace::~CAI_InterestingPlace
CAI_InterestingPlace::~CAI_InterestingPlace()
{
	if (m_pSlots) {
		sub_102d9eb0();
		sub_102daac0(1);
		delete m_pSlots;
		m_pSlots = 0;
		m_nSlots = 0;
		m_n588 = 0;
	}
	if (g_10927194 == this) {
		g_10927194 = m_pNext540;
	} else {
		CAI_InterestingPlace *p = g_10927194;
		while (p->m_pNext540 != this)
			p = p->m_pNext540;
		p->m_pNext540 = m_pNext540;
	}
	g_10927198--;
}
// END FUNCTION

// FUNCTION: 0x102d9c20 size=0x150
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
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

// FUNCTION: 0x102d9dd0 size=0xab
#include "CAI_InterestingPlace.h"
extern char g_106b8540[];
extern void (__cdecl *g_109f3630)(const char *fmt, ...);	// DevMsg
extern "C" int __cdecl strcmp(const char *, const char *);
int sub_102dd9c0(const char *pszName);
void sub_101cd970(CBaseEntity *pEnt);

inline const char *STRING(const char *psz)
{
	return psz ? psz : g_106b8540;
}

void CAI_InterestingPlace::vfunc130(int a)
{
	CBaseEntity::vfunc130(a);
	const char *volatile *ppName = (const char **)&m_pszTypeName;
	int iDiff = strcmp(STRING(*ppName), g_106b8540);
	if (iDiff != 0) {
		int pType = sub_102dd9c0(STRING(*ppName));
		m_pType = pType;
		if (!pType) {
			g_109f3630("Could not find InterestingPlaceType for '%s'\n", STRING(*ppName));
			sub_101cd970(this);
			return;
		}
	}
	sub_102d9eb0();
}
// END FUNCTION
