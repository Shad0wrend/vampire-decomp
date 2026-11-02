// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101a6da0 size=0x5
// TARGET: sub_101a6da0
bool __stdcall sub_101a6da0(int a)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6dc0 size=0x5
// TARGET: CCineNPC::vfunc362
bool CCineNPC::vfunc362(int unused)
{
	return false;
}
// END FUNCTION

// FUNCTION: 0x101a6e00 size=0x5
// TARGET: CCineNPC::vfunc364
bool CCineNPC::vfunc364(int unused)
{
	return false;
}
// END FUNCTION

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

// FUNCTION: 0x101a7580 size=0x3
// TARGET: sub_101a7580
void __stdcall sub_101a7580(int a) {
}
// END FUNCTION

// FUNCTION: 0x101a75a0 size=0x3
// TARGET: sub_101a75a0
void __stdcall sub_101a75a0(int a) {
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

// FUNCTION: 0x101a8de0 size=0x186
#include "CCineNPC.h"
#include "CBaseAnimating.h"
#include "CGlobalEntityList.h"
#include "CEHandleGet.h"
#include "ScopeTrace.h"

extern CGlobalEntityList g_106eb5d8;
__declspec(dllimport) void DevMsg(const char *pMsg, ...);
void sub_10428880(void *pModel, int pszName);

struct S_CineNames {
    char pad[0x5f44];
    const char *m_p5f44;
    const char *m_p5f48;
    const char *m_p5f4c;
};

void CCineNPC::vfunc113()
{
    sub_100a0bc0();
    S_CineNames *v = (S_CineNames *)this;
    CBaseEntity *pEnt = 0;
    CBaseAnimating *pNPC = 0;
    while ((pEnt = g_106eb5d8.sub_100f7f20(pEnt, m_pszTarget5f54 ? m_pszTarget5f54 : g_106b8540, 0, 0)) != 0) {
        pNPC = *(CBaseAnimating **)((char *)pEnt + 0x94);
        if (pNPC)
            break;
    }
    if (pNPC) {
        void *pModel = pNPC->sub_100952d0(-1);
        if (pModel) {
            sub_10428880(pModel, (int)(v->m_p5f44 ? v->m_p5f44 : g_106b8540));
            sub_10428880(pModel, (int)(v->m_p5f4c ? v->m_p5f4c : g_106b8540));
            sub_10428880(pModel, (int)(v->m_p5f48 ? v->m_p5f48 : g_106b8540));
        } else {
            DevMsg("**********\n");
            DevMsg("NPC %s has no model in CCineNPC::Activate for %s\n", ((CCineNPC *)pNPC)->sub_1000b5cd(), sub_1000b5cd());
            DevMsg("**********\n");
        }
    } else {
        DevMsg("**********\n");
        const char *n = m_pszTarget5f54 ? m_pszTarget5f54 : g_106b8540;
        DevMsg("Could not find NPC %s in CCineNPC::Activate for %s\n", n, sub_1000b5cd());
        DevMsg("**********\n");
    }
    CGlobalEntityList_Ent *pFound = (CGlobalEntityList_Ent *)g_106eb5d8.sub_100f7770(0, m_n5f58 ? (const char *)m_n5f58 : g_106b8540, 0, 0);
    if (pFound)
        m_hNPC5f94 = *pFound->v1();
    else
        m_hNPC5f94 = 0xffffffff;
    if (!EHandle_Get(m_hNPC5f94))
        m_n5f58 = 0;
}
// END FUNCTION
