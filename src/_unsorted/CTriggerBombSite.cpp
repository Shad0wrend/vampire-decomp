// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10210f80 size=0x6
#include "CTriggerBombSite.h"
namespace lifted {
extern char g_105ab7a0;
}
datamap_t *CTriggerBombSite::vfunc82()
{
    return (datamap_t *)&lifted::g_105ab7a0;
}
// END FUNCTION

// FUNCTION: 0x102110c0 size=0x10
#include "CTriggerBombSite.h"

void __fastcall sub_1000350d(void *pThis);
void __fastcall sub_101c5080(void *pThis);

// TARGET: CTriggerBombSite::vfunc103
void CTriggerBombSite::vfunc103()
{
	sub_1000350d(this);
	sub_101c5080(this);
}
// END FUNCTION

// FUNCTION: 0x102110e0 size=0x52
#include "CCameraTrack.h"
#include "CTriggerBombSite.h"

struct CTriggerView { bool sub_101c5460(void *pOther); };
struct CHandleView { virtual void vfunc0(); virtual unsigned int *GetRefEHandle(); };

void CTriggerBombSite::vfunc174(void *pOther)
{
	if (((CTriggerView *)this)->sub_101c5460(pOther))
		((CCameraTrackMember *)((char *)this + 0x568))->sub_10010794((CCameraTrack *)pOther, (CCameraTrack *)this, 0);
	char *pPlayer = *(char **)((char *)pOther + 0xa8);
	if (pPlayer) {
		if (this)
			*(unsigned int *)(pPlayer + 0x1cb8) = *((CHandleView *)this)->GetRefEHandle();
		else
			*(unsigned int *)(pPlayer + 0x1cb8) = 0xffffffff;
	}
}
// END FUNCTION

// FUNCTION: 0x10211160 size=0x6c
#include "CTriggerBombSite.h"
#include "CGlobalEntityList.h"
extern CGlobalEntityList *g_10566458;
struct CTouchList568 {
    void sub_10010794(void *pOther, void *pBombSite, int a);
};
struct CBombSitePlayer {
    char m_pad[0x1cb8];
    unsigned int m_hBombSite;
};
struct CTriggerBombSiteUnit : CTriggerBombSite {
    char sub_10007d15(void *pOther);
};

void CTriggerBombSite::vfunc176(void *pOther)
{
    if (((CTriggerBombSiteUnit *)this)->sub_10007d15(pOther))
        ((CTouchList568 *)((char *)this + 0x568))->sub_10010794(pOther, this, 0);
    CBombSitePlayer *pPlayer = *(CBombSitePlayer **)((char *)pOther + 0xa8);
    if (pPlayer) {
        unsigned int h = pPlayer->m_hBombSite;
        CGlobalEntityList_Ent *pEnt;
        if (h == 0xffffffff)
            pEnt = 0;
        else {
            CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[h & 0x1fff];
            pEnt = pSlot->m_Serial == (int)(h >> 13) ? pSlot->m_pEntity : 0;
        }
        if ((void *)pEnt == (void *)this)
            pPlayer->m_hBombSite = 0xffffffff;
    }
}
// END FUNCTION

// FUNCTION: 0x102111f0 size=0x6
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc33()
{
    return 0x12f;
}
// END FUNCTION

// FUNCTION: 0x10211210 size=0x50
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc35(CBasePlayer *pPlayer)
{
	EHANDLE &h = *(EHANDLE *)((char *)pPlayer + 0x1cb8);
	return (h.Get() == (CBaseEntity *)this) ? 0x11 : 0;
}
// END FUNCTION

// FUNCTION: 0x10211280 size=0xd1
#include "CTriggerBombSite.h"

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

struct BombSitePlayer
{
	char m_pad0000[0x1cb8];
	EntHandle m_hSite;	// 0x1cb8
};

struct BombSiteOther
{
	char m_pad0000[0xa8];
	BombSitePlayer *m_pPlayer;	// 0xa8
};

bool CTriggerBombSite::vfunc32(void *pOther)
{
	if (m_bDisabled)
		return false;
	BombSitePlayer *pPlayer = ((BombSiteOther *)pOther)->m_pPlayer;
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

// FUNCTION: 0x102113a0 size=0x3
#include "CTriggerBombSite.h"
int CTriggerBombSite::vfunc36()
{
    return 0;
}
// END FUNCTION

// FUNCTION: 0x102113c0 size=0x31
// TARGET: CTriggerBombSite::vfunc39
#include "CTriggerBombSite.h"
#include "CBaseEntity.h"
#include "CAI_BaseNPCTroika.h"

void __fastcall sub_1015ef40(CBaseEntity *pThis);

void CTriggerBombSite::vfunc39(CBaseEntity *pOther)
{
    ((CBaseEntity *)this)->CBaseEntity::vfunc39(pOther);
    *(int *)((char *)this + 0x598) = *(int *)&gpGlobals->curtime;
    sub_1015ef40(pOther);
    ((CAI_BaseNPCTroika *)pOther)->sub_10181580(1);
}
// END FUNCTION

// FUNCTION: 0x10211410 size=0x46
#include "CTriggerBombSite.h"
#include "CBasePlayer.h"
typedef void (CTriggerBombSite::*PFN_Update)(CBasePlayer *pPlayer, CBombState newState);

void CTriggerBombSite::vfunc42(CBasePlayer *pPlayer)
{
	pPlayer->sub_1015ef60();
	pPlayer->sub_101815b0(1);
	sub_100a5030(pPlayer);
	CBombState state;
	state.m_c = 0x22;
	if (m_nProgress >= 100)
		state.m_c = 0x62;
	PFN_Update pfn = (PFN_Update)&CTriggerBombSite::sub_10211550;
	(this->*pfn)(pPlayer, state);
}
// END FUNCTION

// FUNCTION: 0x10216f70 size=0x62
#include "CTriggerBombSite.h"

struct CUtlVector24 { void sub_10015708(); };
void sub_100aa7b0(void *p);

CTriggerBombSite *CTriggerBombSite::vfunc5(unsigned int flags)
{
	((CUtlVector24 *)((char *)this + 0x5b8))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x5a0))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x580))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x568))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4bc))->sub_10015708();
	((CUtlVector24 *)((char *)this + 0x4a4))->sub_10015708();
	sub_1000cb8a();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
