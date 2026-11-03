// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a9060 size=0x3
#include "CCineAI.h"
bool CCineAI::vfunc585()
{
    return 1;
}
// END FUNCTION

// FUNCTION: 0x101a9510 size=0x8b
#include "CCineAI.h"

extern char g_106b8540[];
__declspec(dllimport) void Warning(const char *fmt, ...);

struct CCineAIFields {
	char m_pad[0x5f91];
	char m_bFlag5f91;
};

struct CCineAINpc {
	char m_pad[0x6f0];
	int m_iSequence;	// 0x6f0
	char m_pad6f4[4];
	float m_flSequenceTime;	// 0x6f8
	int sub_1008f7b0(const char *pszName);	// CBaseAnimating::LookupSequence
	const char *sub_100ab4f0();	// GetDebugName (stub 0x1000b5cd)
	void sub_10090950();	// stub 0x100117b1
};

bool CCineAI::vfunc584(void *pNpc, const char *pszSequence, char bFindOnly)
{
	CCineAINpc *pNPC = (CCineAINpc *)pNpc;
	((CCineAIFields *)this)->m_bFlag5f91 = 1;
	if (!pszSequence && bFindOnly) {
		sub_101a8460(pNpc);
		return true;
	}
	pNPC->m_iSequence = pNPC->sub_1008f7b0(pszSequence ? pszSequence : g_106b8540);
	if (pNPC->m_iSequence == -1) {
		Warning("%s: unknown aiscripted sequence \"%s\"\n", pNPC->sub_100ab4f0(), pszSequence ? pszSequence : g_106b8540);
		pNPC->m_iSequence = 0;
	}
	pNPC->m_flSequenceTime = 0;
	pNPC->sub_10090950();
	return true;
}
// END FUNCTION

// FUNCTION: 0x101ab060 size=0x52
#include "CCineAI.h"

void sub_100aa7b0(void *);

// TARGET: CCineAI::vfunc5
CCineAI *CCineAI::vfunc5(unsigned int flags)
{
	CCineNPCSlot *p = m_slots + 8;
	int n = 8;
	do {
		--p;
		p->sub_10015708();
	} while (--n);
	m_slotB.sub_10015708();
	m_slotA.sub_10015708();
	sub_1000c9cd();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION
