// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100b8210 size=0x6
#include "CBaseViewModel.h"
namespace lifted {
extern char g_1055a118;
}
datamap_t * CBaseViewModel::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1055a118);
}
// END FUNCTION

// FUNCTION: 0x100b82a0 size=0x58
#include "CBaseViewModel.h"
// TARGET: CBaseViewModel::vfunc86
bool CBaseViewModel::vfunc86(int a, int b, int c, int d, int e)
{
	if (!(m_nEffectFlags & 0x40)) {
		CViewModelOwner *pOwner = (CViewModelOwner *)m_hOwner734.Get();
		if (pOwner && pOwner->m_pPlayer && pOwner->m_pPlayer->m_pEdict2e0 == b)
			return true;
	}
	return false;
}
// END FUNCTION

// FUNCTION: 0x1042b7d0 size=0xb
#include "CBaseViewModel.h"
namespace lifted {
int sub_10006703();
}
int CBaseViewModel::vfunc117()
{
    return (lifted::sub_10006703()) | -2147483648;
}
// END FUNCTION

// FUNCTION: 0x1042b7f0 size=0x2d
#include "CBaseViewModel.h"

struct EntInfo {
	CBaseEntity *m_pEntity;
	unsigned int m_serial;
	int m_pad;
};

struct EntList {
	int m_hdr;
	EntInfo m_entries[1];
};

extern EntList *g_10566458;

CBaseEntity *CBaseViewModel::vfunc267()
{
	unsigned int h = *(unsigned int *)((char *)this + 0x734);
	if (h != 0xffffffff) {
		EntInfo *info = &g_10566458->m_entries[h & 0x1fff];
		if (info->m_serial == (h >> 13))
			return info->m_pEntity;
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x1042b830 size=0x1e
#include "CBaseViewModel.h"

void sub_100aa7b0(void *p);

// TARGET: CBaseViewModel::vfunc5
CBaseViewModel *CBaseViewModel::vfunc5(unsigned int flags)
{
	sub_10007126();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1042b880 size=0x1
#include "CBaseViewModel.h"
void CBaseViewModel::vfunc104()
{
}
// END FUNCTION

// FUNCTION: 0x1042b8a0 size=0xd8
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown101f4c80.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "CUnknown1073dc28.h"
#include "CBaseEntity.h"
#include "CBaseViewModel.h"
#include "ScopeTrace.h"

struct CCollisionObj { void sub_1000428c(int solid); };

void CBaseViewModel::vfunc103()
{
	vfunc104();
	float maxs[3] = { 8.0f, 4.0f, 2.0f };
	float mins[3] = { -8.0f, -4.0f, -2.0f };
	sub_100adf10(mins, maxs);
	{
		ScopeTrace t("CBaseEntity::SetSolid", m_name26c ? m_name26c : g_106b8540);
		((CCollisionObj *)((char *)this + 0x270))->sub_1000428c(0);
	}
	m_flags268 &= ~0x40000;
}
// END FUNCTION

// FUNCTION: 0x1042ba40 size=0x3a
#include "CBaseViewModel.h"

extern const char g_106b8540[];

// TARGET: CBaseViewModel::vfunc266
void CBaseViewModel::vfunc266(const char *pszName)
{
	const char *pName = pszName;
	if (pName)
	{
		pName = (*pName) ? pName : 0;
	}
	else
	{
		pName = 0;
	}
	if (pName != *(const char **)((char *)this + 0x744))
	{
		*(const char **)((char *)this + 0x744) = pName;
		if (!pName)
		{
			pName = g_106b8540;
		}
		vfunc105(pName);
	}
}
// END FUNCTION

// FUNCTION: 0x1042ba90 size=0x3b
#include "CBaseViewModel.h"
#include "CBaseAnimating.h"

// TARGET: CBaseViewModel::vfunc265
void CBaseViewModel::vfunc265(int value)
{
	if (vfunc8())
	{
		*(int *)((char *)this + 0x6f0) = value;
		*(int *)((char *)this + 0x740) = (*(int *)((char *)this + 0x740) + 1) & 7;
		*(int *)((char *)this + 0x6f8) = 0;
		((CBaseAnimating *)this)->sub_10090950();
	}
}
// END FUNCTION

// FUNCTION: 0x1042bbc0 size=0x6
#include "CBaseViewModel.h"
namespace lifted {
extern char g_109ee958;
}
int CBaseViewModel::vfunc80()
{
    return (int)&lifted::g_109ee958;
}
// END FUNCTION

// FUNCTION: 0x1042bbe0 size=0x3
#include "CBaseViewModel.h"
int CBaseViewModel::vfunc81()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x1042beb0 size=0x6
#include "CBaseViewModel.h"
namespace lifted {
extern char g_106ad8bc;
}
int CBaseViewModel::vfunc79()
{
    return (int)&lifted::g_106ad8bc;
}
// END FUNCTION
