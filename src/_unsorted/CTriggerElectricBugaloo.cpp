// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10231200 size=0x6
#include "CTriggerElectricBugaloo.h"
namespace lifted {
extern char g_105b5960;
}
datamap_t *CTriggerElectricBugaloo::vfunc82()
{
    return (datamap_t *)&lifted::g_105b5960;
}
// END FUNCTION

// FUNCTION: 0x102312e0 size=0x4c
#include "CTriggerElectricBugaloo.h"
void __fastcall sub_100cd2d0(void *p);
void __fastcall sub_1009df20(void *p);
void sub_100aa7b0(void *p);
// TARGET: CTriggerElectricBugaloo::vfunc5
void *CTriggerElectricBugaloo::vfunc5(unsigned int flags)
{
	sub_100cd2d0((char *)this + 0x580);
	sub_100cd2d0((char *)this + 0x568);
	sub_100cd2d0((char *)this + 0x4bc);
	sub_100cd2d0((char *)this + 0x4a4);
	sub_1009df20(this);
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10231350 size=0x10
#include "CTriggerElectricBugaloo.h"

void __fastcall sub_1000350d(void *pThis);
void __fastcall sub_101c5080(void *pThis);

// TARGET: CTriggerElectricBugaloo::vfunc103
void CTriggerElectricBugaloo::vfunc103()
{
	sub_1000350d(this);
	sub_101c5080(this);
}
// END FUNCTION

// FUNCTION: 0x10231370 size=0x52
#include "CCameraTrack.h"
#include "CTriggerElectricBugaloo.h"

struct CTriggerView { bool sub_101c5460(void *pOther); };
struct CHandleView { virtual void vfunc0(); virtual unsigned int *GetRefEHandle(); };

void CTriggerElectricBugaloo::vfunc174(void *pOther)
{
	if (((CTriggerView *)this)->sub_101c5460(pOther))
		((CCameraTrackMember *)((char *)this + 0x568))->sub_10010794((CCameraTrack *)pOther, (CCameraTrack *)this, 0);
	char *pPlayer = *(char **)((char *)pOther + 0xa8);
	if (pPlayer) {
		if (this)
			*(unsigned int *)(pPlayer + 0x1cbc) = *((CHandleView *)this)->GetRefEHandle();
		else
			*(unsigned int *)(pPlayer + 0x1cbc) = 0xffffffff;
	}
}
// END FUNCTION

// FUNCTION: 0x102313f0 size=0x6c
#include "CCameraTrack.h"
#include "CTriggerElectricBugaloo.h"

struct EntInfo { void *ent; int serial; int pad; };
extern char *g_10566458;

void CTriggerElectricBugaloo::vfunc176(void *pOther)
{
	if (sub_10007d15(pOther))
		((CCameraTrackMember *)((char *)this + 0x568))->sub_10010794((CCameraTrack *)pOther, (CCameraTrack *)this, 0);
	char *pPlayer = *(char **)((char *)pOther + 0xa8);
	if (pPlayer) {
		unsigned int h = *(unsigned int *)(pPlayer + 0x1cbc);
		EntInfo *e;
		void *pEnt = (h != 0xffffffff && (e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff), e->serial == (h >> 13))) ? e->ent : 0;
		if (pEnt == this)
			*(unsigned int *)(pPlayer + 0x1cbc) = 0xffffffff;
	}
}
// END FUNCTION

// FUNCTION: 0x10231480 size=0x6
#include "CTriggerElectricBugaloo.h"
int CTriggerElectricBugaloo::vfunc33()
{
    return 0x43;
}
// END FUNCTION

// FUNCTION: 0x102314a0 size=0x53
#include "CTriggerElectricBugaloo.h"
#include "CBaseCombatCharacter.h"
int CTriggerElectricBugaloo::vfunc35(void *pOther)
{
	CBaseCombatCharacter *pChar = (CBaseCombatCharacter *)pOther;
	if ((void *)((EHANDLE *)((char *)pChar + 0x1cbc))->Get() == (void *)this)
		return pChar->sub_10336920() ? 0x3e : 0x3f;
	return 0;
}
// END FUNCTION

// FUNCTION: 0x10231520 size=0xd1
#include "CTriggerElectricBugaloo.h"

struct HandleEntry { void *ent; unsigned int serial; int pad; };
struct HandleList { int pad; HandleEntry e[1]; };
extern HandleList *g_10566458;

struct EntHandle
{
	unsigned int m_Index;
	void *Get() const
	{
		if (m_Index != 0xffffffff) {
			HandleEntry *e = &g_10566458->e[m_Index & 0x1fff];
			if (e->serial == (m_Index >> 13))
				return e->ent;
		}
		return 0;
	}
};

struct BugalooPlayer
{
	char m_pad0000[0x1cbc];
	EntHandle m_hSite;	// 0x1cbc
};

struct BugalooOther
{
	char m_pad0000[0xa8];
	BugalooPlayer *m_pPlayer;	// 0xa8
};

bool CTriggerElectricBugaloo::vfunc32(void *pOther)
{
	if (m_bDisabled)
		return false;
	BugalooPlayer *pPlayer = ((BugalooOther *)pOther)->m_pPlayer;
	if (!pPlayer)
		return false;
	if (pPlayer->m_hSite.Get() != this)
		return false;
	if (((EntHandle *)&m_hOwner008c)->Get() != 0) {
		if (pPlayer != ((EntHandle *)&m_hOwner008c)->Get())
			return false;
	}
	return true;
}
// END FUNCTION

// FUNCTION: 0x10231640 size=0x31
#include "CTriggerElectricBugaloo.h"
#include "CAI_BaseNPCTroika.h"

void __fastcall sub_10011f68(void *self);

void CTriggerElectricBugaloo::vfunc39(void *pOther)
{
    sub_100a4fe0(pOther);
    sub_10011f68(pOther);
    ((CAI_BaseNPCTroika *)pOther)->sub_10181580(1);
    *(int *)((char *)this + 0x598) = *(int *)&gpGlobals->curtime;
}
// END FUNCTION

// FUNCTION: 0x10231690 size=0x25
#include "CTriggerElectricBugaloo.h"
#include "CAI_BaseNPCTroika.h"

struct CUnknown1015ef60
{
    void sub_1015ef60();
};

// TARGET: CTriggerElectricBugaloo::vfunc42
void CTriggerElectricBugaloo::vfunc42(void *pOther)
{
    ((CUnknown1015ef60 *)pOther)->sub_1015ef60();
    ((CAI_BaseNPCTroika *)pOther)->sub_101815b0(1);
    ((CBaseEntity *)this)->vfunc42(pOther);
}
// END FUNCTION

// FUNCTION: 0x102316d0 size=0x85
#include "CTriggerElectricBugaloo.h"

struct EntInfo { void *ent; int serial; int pad; };
extern char *g_10566458;

void CTriggerElectricBugaloo::vfunc175(void *pOther)
{
	sub_100a4af0(pOther);
	unsigned int h = m_hOwner008c;
	void *cur;
	if (h != 0xffffffff) {
		EntInfo *e = (EntInfo *)(g_10566458 + 4) + (h & 0x1fff);
		if (e->serial == (int)(h >> 13))
			cur = e->ent;
		else
			cur = 0;
	} else
		cur = 0;
	if (cur == pOther) {
		unsigned int h2 = *(volatile unsigned int *)&m_hOwner008c;
		void *ent2;
		if (h2 != 0xffffffff) {
			EntInfo *e2 = (EntInfo *)(g_10566458 + 4) + (h2 & 0x1fff);
			if (e2->serial == (int)(h2 >> 13))
				ent2 = e2->ent;
			else
				ent2 = 0;
		} else
			ent2 = 0;
		sub_10231790(ent2);
	}
}
// END FUNCTION
