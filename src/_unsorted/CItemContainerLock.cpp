// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10224190 size=0xb
void CItemContainerLock::vfunc275()
{
	m_unk780 = 1;
}
// END FUNCTION

// FUNCTION: 0x10224ed0 size=0x9d
#include "CItemContainerLock.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CContainerView
{
	bool sub_100eef10();	// stub 0x100127ec
};

struct CHandleLookup
{
	static CContainerView *Get(const unsigned int &r)
	{
		if (r != 0xffffffff) {
			CGlobalEntityList_Slot *s = &g_10566458->m_Slots[r & 0x1fff];
			if (s->m_Serial == (int)(r >> 13))
				return (CContainerView *)s->m_pEntity;
		}
		return 0;
	}
};

int CItemContainerLock::vfunc34(int a)
{
	if (CHandleLookup::Get(m_hContainer) && CHandleLookup::Get(m_hContainer)->sub_100eef10())
		return 2;
	if (sub_10224100())
		return (sub_10224910(a) != 0) + 2;
	return 3;
}
// END FUNCTION

// FUNCTION: 0x10226460 size=0x6d
#include "CItemContainerLock.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CItemContainerLock *CItemContainerLock::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x7f4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7dc))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7c4))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x7ac))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x794))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x102264f0 size=0x18
#include "CItemContainerLock.h"
#include "CBaseVampireSkillEntity.h"

void CItemContainerLock::vfunc103()
{
    ((CBaseVampireSkillEntity *)this)->vfunc103();
    *(unsigned int *)((char *)this + 0x19c) |= 0x40;
}
// END FUNCTION

// FUNCTION: 0x10226520 size=0x7b
#include "CItemContainerLock.h"
#include "CGlobalEntityList.h"

void *sub_10430b64(void *pObject, long vfDelta, void *pSrcType, void *pTargetType, int isReference);
extern char g_10538764[];
extern char g_10560664[];
extern CGlobalEntityList g_106eb5d8;
extern char g_106b8540[];
__declspec(dllimport) void DevWarning(const char *fmt, ...);
void sub_10014614(void *pEnt);

struct CContainerView {
	void sub_10209ac0(void *pLock);
};

struct CLockView {
	char m_pad[0x124];
	const char *m_pszContainer;
	const char *sub_100ab4f0();
	void sub_10003e63();
};

void CItemContainerLock::vfunc113()
{
	CLockView *p = (CLockView *)this;
	p->sub_10003e63();
	const char *pszName = p->m_pszContainer ? p->m_pszContainer : g_106b8540;
	CContainerView *pContainer = (CContainerView *)sub_10430b64(g_106eb5d8.sub_100f7770(0, pszName, 0, 0), 0, g_10538764, g_10560664, 0);
	if (!pContainer) {
		pszName = p->m_pszContainer ? p->m_pszContainer : g_106b8540;
		DevWarning("%s attached to non-existent container: %s, removing", p->sub_100ab4f0(), pszName);
		sub_10014614(this);
		return;
	}
	pContainer->sub_10209ac0(this);
}
// END FUNCTION
