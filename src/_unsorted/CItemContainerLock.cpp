// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10224070 size=0x6
namespace lifted {
extern char g_105b21e8;
}
datamap_t *CItemContainerLock::vfunc82()
{
    return (datamap_t *)&lifted::g_105b21e8;
}
// END FUNCTION

// FUNCTION: 0x10224130 size=0x8
namespace lifted {
int sub_10006703();
}
int CItemContainerLock::vfunc117()
{
    return (lifted::sub_10006703()) | 8;
}
// END FUNCTION

// FUNCTION: 0x10224190 size=0xb
void CItemContainerLock::vfunc275()
{
	m_unk780 = 1;
}
// END FUNCTION

// FUNCTION: 0x102241b0 size=0x22
char __fastcall sub_10001d2f(void *p);

// TARGET: sub_102241b0
void __fastcall sub_102241b0(int *pThis)
{
    if (sub_10001d2f(pThis)) {
        void (__fastcall *pfn)(void *) = (void (__fastcall *)(void *))((void **)(*(void ***)pThis))[0x448 / 4];
        pfn(pThis);
    }
    *((int *)((char *)pThis + 0x780)) = 3;
}
// END FUNCTION

// FUNCTION: 0x102243c0 size=0x5b
#include "CBaseAnimating.h"
#include "CItemContainerLock.h"
#include "CEntitySoundOriginView.h"
Vector CItemContainerLock::vfunc193()
{
	Vector vecOrigin;
	Vector vecAngles;
	if ((char)((CBaseAnimating *)this)->sub_10092e20((int)"camera_position", (int)&vecOrigin, (int)&vecAngles))
		return vecOrigin;
	return ((CEntitySoundOriginView *)this)->WorldSpaceCenter();
}
// END FUNCTION

// FUNCTION: 0x10224ae0 size=0x154
#include "CEHandleGet.h"
#include "CItemContainer.h"
#include "CBaseCombatCharacter.h"

void sub_101cebc0(void *pPlayer, int a, int b);

struct CLockSlots {
	virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3(); virtual void p4();
	virtual void p5(); virtual void p6(); virtual void p7(); virtual void p8(); virtual void p9();
	virtual void p10(); virtual void p11(); virtual void p12(); virtual void p13(); virtual void p14();
	virtual void p15(); virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
	virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23(); virtual void p24();
	virtual void p25(); virtual void p26(); virtual void p27(); virtual void p28(); virtual void p29();
	virtual void p30(); virtual void p31(); virtual void p32(); virtual void p33(); virtual void p34();
	virtual void p35();
	virtual const char *GetName();
};

// TARGET: CItemContainerLock::vfunc32
bool CItemContainerLock::vfunc32(int a)
{
	if (!sub_10224100())
		return 0;
	if (EHandle_Get(m_hUser8c)) {
		if ((int)EHandle_Get(m_hUser8c) != a)
			return 0;
	}
	if (EHandle_Get(m_hContainer) && ((CItemContainer *)EHandle_Get(m_hContainer))->sub_100eef10() && (*(unsigned char *)(a + 0x208c) & 0x20)) {
		sub_101cebc0((void *)a, 0x4d, 0);
		return 0;
	}
	if (!sub_10224910(a)) {
		if (m_bLocked815)
			return 0;
		if (!((CBaseCombatCharacter *)a)->sub_10335950(((CLockSlots *)this)->GetName())) {
			if (*(unsigned char *)(a + 0x208c) & 0x20)
				sub_101cebc0((void *)a, 0xf, 0);
			return 0;
		}
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x10224ca0 size=0x6
namespace lifted {
extern char g_105876fc;
}
int CItemContainerLock::vfunc36()
{
    return (int)&lifted::g_105876fc;
}
// END FUNCTION

// FUNCTION: 0x10224eb0 size=0x7
namespace lifted {
extern float g_104454c8;
}
float CItemContainerLock::vfunc37()
{
    return lifted::g_104454c8;
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

// FUNCTION: 0x10225070 size=0x61
#include "CBasePlayer.h"
#include "CBaseVampireSkillEntity.h"
#include "CItemContainerLock.h"
CBaseEntity *sub_10070470(const char *, void *, void *, void *, void *);
void CItemContainerLock::vfunc39(CBasePlayer *pPlayer)
{
	if (sub_10224910((int)pPlayer)) {
		sub_10224950((CBaseEntity *)pPlayer);
		return;
	}
	((CBaseVampireSkillEntity *)this)->vfunc39(pPlayer);
	CBaseEntity *p = sub_10070470("Intrusion", 0, this, this, 0);
	*((char *)p + 0x5e8) = 0;
	pPlayer->sub_1017cef0(p);
	pPlayer->sub_1015ef40();
	m_OnIntrusion.sub_100cd660(pPlayer, this, 0);
}
// END FUNCTION

// FUNCTION: 0x10225140 size=0x146
#include "CReliableSingleUserRecipientFilter.h"
#include "CEntityVSlots.h"
extern int g_1072607c;

void CItemContainerLock::vfunc42(CBasePlayer *pPlayer)
{
	((CBaseVampireSkillEntity *)this)->vfunc42(pPlayer);
	pPlayer->sub_1017cef0(0);
	pPlayer->sub_1015ef60();
	CReliableSingleUserRecipientFilter filter(pPlayer);
	engine->vfunc65(&filter, g_1072607c);
	engine->vfunc67(6);
	engine->vfunc67(m_b816);
	engine->vfunc67(((CBaseVampireSkillEntity *)this)->sub_1020b000((CBaseEntity *)pPlayer));
	engine->vfunc67(((CEntityVSlots *)this)->slot268(pPlayer));
	engine->vfunc66();
}
// END FUNCTION

// FUNCTION: 0x10225910 size=0x1
void CItemContainerLock::vfunc274()
{
}
// END FUNCTION

// FUNCTION: 0x10225ce0 size=0x1
void CItemContainerLock::vfunc273()
{
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
