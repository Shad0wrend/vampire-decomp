// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10214dd0 size=0x6
#include "CPropButton.h"
namespace lifted {
extern char g_105ac050;
}
datamap_t * CPropButton::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_105ac050);
}
// END FUNCTION

// FUNCTION: 0x10215570 size=0x52
#include "CCineNPC.h"
#include "CBaseAnimating.h"

void sub_100aa7b0(void *);

struct Helper
{
	void *sub_10215570(unsigned int flags);
};

// TARGET: Helper::sub_10215570
void *Helper::sub_10215570(unsigned int flags)
{
	CCineNPCSlot *p = (CCineNPCSlot *)((char *)this + 0x834);
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	((CCineNPCSlot *)((char *)this + 0x75c))->sub_10015708();
	((CCineNPCSlot *)((char *)this + 0x744))->sub_10015708();
	((CBaseAnimating *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102155f0 size=0x1e
#include "CPropButton.h"
#include "CBaseProp.h"

void sub_1000f506();

// TARGET: CPropButton::vfunc104
void CPropButton::vfunc104()
{
	vfunc71();
	((CBaseProp *)this)->vfunc104();
	*(void **)((char *)this + 0x1f0) = (void *)sub_1000f506;
}
// END FUNCTION

// FUNCTION: 0x10215620 size=0xe5
#include "CPropButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_1074f144;
extern int g_1074f148;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

// TARGET: CPropButton::vfunc71
void CPropButton::vfunc71()
{
	m_nVSoundTableIdx = 0;
	m_nVSoundGroup = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CUnknown1073dc28Name *)((char *)this + 0xc0))->Get(), 0);

	g_1074f144 = FindSoundId("on");
	g_1074f148 = FindSoundId("off");
}
// END FUNCTION

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

// FUNCTION: 0x102158d0 size=0x8
#include "CPropButton.h"
namespace lifted {
int sub_10006703();
}
int CPropButton::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
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

// FUNCTION: 0x10215b40 size=0x22
struct CPropButtonX
{
    char sub_100a7bd0(void *pActivator);
    int sub_10215b40(void *pActivator);
};

// TARGET: sub_10215b40
int CPropButtonX::sub_10215b40(void *pActivator)
{
    if (*((char *)this + 0x738)) {
        return 0;
    }
    return sub_100a7bd0(pActivator) != 0;
}
// END FUNCTION

// FUNCTION: 0x10215b80 size=0x3b
#include "CPropButton.h"

struct CPropButtonUnit10215b80 : CPropButton
{
    int sub_10215b80(int pActivator);
};

// TARGET: sub_10215b80
int CPropButtonUnit10215b80::sub_10215b80(int pActivator)
{
    if (m_bLocked)
    {
        return *(int *)((char *)this + 0x734);
    }
    if (!((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pActivator))
    {
        return *(int *)((char *)this + 0x734);
    }
    return *(int *)((char *)this + 0x730);
}
// END FUNCTION
