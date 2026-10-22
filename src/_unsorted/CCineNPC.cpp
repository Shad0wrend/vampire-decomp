// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a6e40 size=0x52
#include "CCineNPC.h"
void sub_100aa7b0(void *);
CCineNPC *CCineNPC::vfunc5(unsigned int flags)
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

// FUNCTION: 0x101a7210 size=0xc
struct CineFlags { char pad[0x204]; unsigned char m; };
bool CCineNPC::vfunc585()
{
	bool r = (((CineFlags *)this)->m >> 6) & 1;
	return r;
}
// END FUNCTION

// FUNCTION: 0x101a82d0 size=0x13b
#include "CBaseAnimating.h"
#include "CEHandleGet.h"

struct CDevCheck {
	virtual void v0();
	virtual bool v1();
	char m_pad[0x28];
	int m_n2c;
};
extern CDevCheck *g_1072bb84;
extern char g_106b8540[];
__declspec(dllimport) void Warning(const char *fmt, ...);
extern "C" __declspec(dllimport) void Msg(const char *fmt, ...);

// TARGET: CCineNPC::vfunc584
char CCineNPC::vfunc584(CBaseAnimating *pNpc, const char *pszSequence, char bLoop)
{
	m_b5f91 = 1;
	if (!pszSequence && bLoop) {
		sub_101a8460(pNpc);
		return 0;
	}
	int seq = pNpc->sub_1008f7b0(pszSequence ? pszSequence : g_106b8540);
	*(int *)((char *)pNpc + 0x6f0) = seq;
	if (seq == -1) {
		if (!pszSequence)
			pszSequence = g_106b8540;
		Warning("%s: unknown scripted sequence \"%s\"\n", pNpc->sub_100ab4f0(), pszSequence);
		*(int *)((char *)pNpc + 0x6f0) = 0;
	}
	*(int *)((char *)pNpc + 0x6f8) = 0;
	pNpc->sub_10090950();
	if (!g_1072bb84->v1() && g_1072bb84->m_n2c) {
		if (EHandle_Get(m_hTarget5ce4))
			Msg("Sequence %s targeting %s is starting\n", sub_1000b5cd(), (const char *)((CBaseAnimating *)EHandle_Get(m_hTarget5ce4))->sub_100ab4f0());
		else
			Msg("Sequence %s targeting %s is starting\n", sub_1000b5cd(), "**UNKNOWN**");
		sub_101a6ec0();
	}
	return 1;
}
// END FUNCTION

// FUNCTION: 0x101a89a0 size=0xd1
#include "CCineNPC.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CCineTargetNPC
{
	char m_pad[0x5b80];
	char m_b5b80;
	void sub_10269b50(int nCondition);	// ClearCondition (stub 0x10015839)
};

struct CCineHandleTarget { char m_pad[0x94]; CCineTargetNPC *m_pNPC; };

static inline CCineHandleTarget *ResolveHandle(unsigned int h)
{
	CGlobalEntityList_Slot *e;
	return (h != 0xffffffff && (e = &g_10566458->m_Slots[h & 0x1fff], e->m_Serial == (int)(h >> 13))) ? (CCineHandleTarget *)e->m_pEntity : 0;
}

void CCineNPC::vfunc459()
{
	if (sub_101a8930())
		return;
	CCineHandleTarget *pEnt = ResolveHandle(*(unsigned int *)((char *)this + 0x5ce4));
	if (!pEnt)
		return;
	CCineTargetNPC *pNPC = pEnt->m_pNPC;
	if (!pNPC)
		return;
	pNPC->sub_10269b50(0x4c);
	pNPC->sub_10269b50(0x4d);
	pNPC->sub_10269b50(0x4e);
	pNPC->m_b5b80 = 0;
	pNPC->sub_10269b50(0x1e);
	pNPC->sub_10269b50(0x1f);
	pNPC->sub_10269b50(0x21);
	pNPC->sub_10269b50(0x72);
	pNPC->sub_10269b50(0x20);
	pNPC->sub_10269b50(0x22);
	pNPC->sub_10269b50(0x25);
	pNPC->sub_10269b50(0x26);
	pNPC->sub_10269b50(0x27);
	pNPC->sub_10269b50(10);
}
// END FUNCTION
