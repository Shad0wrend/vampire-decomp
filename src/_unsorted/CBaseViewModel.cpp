// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

// FUNCTION: 0x1042b8a0 size=0xd8
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
