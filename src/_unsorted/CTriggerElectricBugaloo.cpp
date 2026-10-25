// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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

extern char *g_1070b228;
void __fastcall sub_10011f68(void *self);

void CTriggerElectricBugaloo::vfunc39(void *pOther)
{
    sub_100a4fe0(pOther);
    sub_10011f68(pOther);
    ((CAI_BaseNPCTroika *)pOther)->sub_10181580(1);
    *(int *)((char *)this + 0x598) = *(int *)(g_1070b228 + 0xc);
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
