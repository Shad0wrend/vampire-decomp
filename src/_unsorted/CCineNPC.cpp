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
