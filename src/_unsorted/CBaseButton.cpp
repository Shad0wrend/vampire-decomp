// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x100c8430 size=0x6
#include "CBaseButton.h"
#include "datamap.h"
namespace lifted {
extern char g_1055beb0;
}
datamap_t *CBaseButton::vfunc82()
{
    return (datamap_t *)&lifted::g_1055beb0;
}
// END FUNCTION

// FUNCTION: 0x100c86d0 size=0x4f
#include "CBaseButton.h"
CBaseButton::CBaseButton()
{
	m_n5c8 = 12;
	m_n5cc = 12;
}
// END FUNCTION

// FUNCTION: 0x100c8740 size=0x3
#include "CBaseButton.h"
bool CBaseButton::vfunc128()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x100c8760 size=0x62
#include "CBaseButton.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CBaseButton *CBaseButton::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5a8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x590))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x578))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x560))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x100c87f0 size=0x8
#include "CBaseButton.h"

void CBaseButton::vfunc104()
{
	vfunc71();
}
// END FUNCTION

// FUNCTION: 0x100c8810 size=0xe5
#include "CBaseEntity.h"
#include "CUnknown101d7520.h"
#include "CUnknown101daec0.h"
#include "CUnknown101e56e0.h"
#include "CUnknown101e7c50.h"
#include "CUnknown10202b10.h"
#include "CUnknown10206400.h"
#include "ScopeTrace.h"
#include "CBaseButton.h"
#include "CUnknown1073dc28.h"

extern "C" int __cdecl _strcmpi(const char *, const char *);
extern CUnknown1073dc28 g_1073dc00;
extern int g_106e6f78;
extern int g_106e6f7c;

inline int FindSoundId(const char *pszName)
{
	for (int i = 0; i < g_1073dc00.m_nRecords; i++)
	{
		if (!_strcmpi(g_1073dc00.m_ppRecords[i]->m_Name.Get(), pszName))
			return g_1073dc00.m_ppRecords[i]->m_nId;
	}
	return -1;
}

struct CSoundNameView
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};

// TARGET: CBaseButton::vfunc71
void CBaseButton::vfunc71()
{
	m_nField0bc = 0;
	m_nSoundSet0b4 = g_1073dc00.sub_101f55a0((CBaseEntity *)this, ((CSoundNameView *)&m_pszSoundName0c0)->Get(), 0);

	g_106e6f78 = FindSoundId("on");
	g_106e6f7c = FindSoundId("off");
}
// END FUNCTION

// FUNCTION: 0x100c8940 size=0x3b
#include "CBaseEntity.h"
#include "CBaseButton.h"

// TARGET: CBaseButton::vfunc35
int CBaseButton::vfunc35(int pActivator)
{
    if (*(char *)((char *)this + 0x5c4))
    {
        return *(int *)((char *)this + 0x5cc);
    }
    if (!((CBaseEntity *)this)->sub_100a7bd0((CBaseEntity *)pActivator))
    {
        return *(int *)((char *)this + 0x5cc);
    }
    return *(int *)((char *)this + 0x5c8);
}
// END FUNCTION

// FUNCTION: 0x100c8990 size=0x16
#include "CBaseButton.h"

bool CBaseButton::sub_100c8990(int a)
{
	return vfunc35(a) != 0;
}
// END FUNCTION

// FUNCTION: 0x100c8b80 size=0x175
#include "CBaseButton.h"
#include "CEHandleGet.h"

struct CButtonAttackerView {
	virtual void v0();
	virtual unsigned int *GetRefEHandle();
};

struct CButtonDamageInfoView {
	char m_pad0000[0x2c];
	CButtonAttackerView *m_pAttacker;
};

// TARGET: CBaseButton::vfunc142
int CBaseButton::vfunc142(void *pInfo)
{
	CButtonDamageInfoView *pDamage = (CButtonDamageInfoView *)pInfo;
	m_Output560.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
	if ((m_flags204 & 0x200) || m_nHealth210) {
		int state = sub_100c93b0();
		if (state) {
			if (pDamage->m_pAttacker)
				m_hActivator53c = *pDamage->m_pAttacker->GetRefEHandle();
			else
				m_hActivator53c = 0xffffffff;
			if (EHandle_Get(m_hActivator53c) && !m_b5c4) {
				m_pfnTouch1ec = 0;
				if (state == 2) {
					m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
					sub_100c97c0();
					return 0;
				}
				m_Output578.sub_100cd660(EHandle_Get(m_hActivator53c), this, 0.0f);
				sub_100c9560();
			}
		}
	}
	return 0;
}
// END FUNCTION

// FUNCTION: 0x100c9170 size=0xe
#include "CBaseButton.h"
namespace lifted {
int __stdcall sub_10004b92(int, int, int);
}
bool CBaseButton::vfunc223()
{
    lifted::sub_10004b92(0, 0, 0);
    return 1;
}
// END FUNCTION
