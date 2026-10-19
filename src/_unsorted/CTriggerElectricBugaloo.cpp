// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
