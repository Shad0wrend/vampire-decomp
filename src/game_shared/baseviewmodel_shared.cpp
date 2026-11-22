// Matched functions only. Written by pcdecomp; change it through pcdecomp.
// placement guessed: the reference trees' server project lists this file; 23 blocks
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

// FUNCTION: 0x100b8230 size=0x5
int sub_100b8270(void);
int g_106d0748 = ((int (*)(int))sub_100b8270)(0);
// END FUNCTION

// FUNCTION: 0x100b8270 size=0x1a
namespace lifted {
extern int g_1055a118;
extern int g_1055a11c;
extern char g_1055a15c;
}
int sub_100b8270()
{
    lifted::g_1055a11c = 4;
    lifted::g_1055a118 = (int)&lifted::g_1055a15c;
    return (int)&lifted::g_1055a118;
}
// END FUNCTION

// FUNCTION: 0x100b82a0 size=0x58
#include "CBaseViewModel.h"
// TARGET: CBaseViewModel::vfunc86
char CBaseViewModel::vfunc86(int a, int b, int c, int d, int e)
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
CBaseEntity *CBaseViewModel::vfunc5(unsigned int flags)
{
	sub_10007126();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1042b860 size=0xb
namespace lifted {
extern char g_1051671c;
int sub_10004c3c();
}
struct CUnknown1042b860 { int sub_1042b860(); };
int CUnknown1042b860::sub_1042b860()
{
    *(int *)this = (int)&lifted::g_1051671c;
    return lifted::sub_10004c3c();
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

// FUNCTION: 0x1042b9c0 size=0x2a
#include "CAI_BaseNPC.h"
#include "CBaseEntity.h"

void CAI_BaseNPC::sub_1042b9c0(CBaseEntity *pEnt)
{
	unsigned int *pHandle = (unsigned int *)((char *)this + 0x734);
	if (pEnt)
		*pHandle = *pEnt->vfunc1();
	else
		*pHandle = 0xffffffff;
}
// END FUNCTION

// FUNCTION: 0x1042ba00 size=0xd
#include "CUnknown1042ba00.h"
// TARGET: CUnknown1042ba00::sub_1042ba00
void CUnknown1042ba00::sub_1042ba00(int value)
{
	m_unk730 = value;
}
// END FUNCTION

// FUNCTION: 0x1042ba20 size=0x7
struct CUnknown1042ba20 { int sub_1042ba20(); };
int CUnknown1042ba20::sub_1042ba20()
{
    return *(int *)((char *)this + 0x730);
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

// FUNCTION: 0x1042bae0 size=0x43
#include "platform.h"
#include "CBaseViewModel.h"
void *sub_100aa720(int size);
extern char g_10585acc[];

// TARGET: viewmodel
DLL_EXPORT CBaseEntity *viewmodel()
{
	void *mem = sub_100aa720(0x74c);
	CBaseViewModel *p;
	if (mem)
		p = ((CBaseViewModel *)mem)->sub_1042b760();
	else
		p = 0;
	p->vfunc106(g_10585acc);
	return p;
}
// END FUNCTION

// FUNCTION: 0x1042bb50 size=0x5
#include "ServerClassReg.h"
#include "SendTable.h"
extern SendTable g_109ee974;
extern char g_106ad6c8[];
ServerClassReg g_109ee958("CBaseViewModel", &g_109ee974, g_106ad6c8);
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

// FUNCTION: 0x1042bc00 size=0xa
#include "SendTable.h"
SendTable g_109ee974;
// END FUNCTION

// FUNCTION: 0x1042bc80 size=0x5
int sub_1042bcc0(void);
int g_109ee970 = ((int (*)(int))sub_1042bcc0)(0);
// END FUNCTION

// FUNCTION: 0x1042bcc0 size=0x160
#include "SendProp.h"

class SendTable
{
public:
	void sub_10247240(SendProp *pProps, int nProps, const char *pName);	// SendTable::Construct (stub 0x1000e8fe)
};

SendProp sub_10246af0(const char *name, int offset, int size, int bits, int flags, int extra, void *proxy);
SendProp sub_10246510(const char *name, int offset, int size, int bits, int flags, float low, float high, void *proxy);
void sub_10246300();
extern SendTable g_109ee974;
extern const char *g_106ad6d4;

// TARGET: sub_1042bcc0
int sub_1042bcc0()
{
    static SendProp g_SendProps[] = {
        sub_10246af0("should_never_see_this", 0, 4, -1, 0, 0, 0),
        sub_10246af0("m_nModelIndex", 0x1a4, 4, 0xb, 0, 0, 0),
        sub_10246af0("m_nBody", 0x67c, 4, 8, 0, 0, 0),
        sub_10246af0("m_nSkin", 0x670, 4, 10, 0, 0, 0),
        sub_10246af0("m_nSequence", 0x6f0, 4, 0xb, 1, 0, 0),
        sub_10246af0("m_nViewModelIndex", 0x730, 4, 1, 1, 0, 0),
        sub_10246510("m_flPlaybackRate", 0x6f4, 4, 8, 0x10, -4.0f, 12.0f, (void *)sub_10246300),
        sub_10246af0("m_fEffects", 0x19c, 4, 10, 1, 0, 0),
        sub_10246af0("m_nAnimationParity", 0x740, 4, 3, 1, 0, 0),
    };
    g_109ee974.sub_10247240(g_SendProps + 1, 8, g_106ad6d4);
    return 1;
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
