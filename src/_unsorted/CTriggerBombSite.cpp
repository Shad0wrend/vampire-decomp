// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
