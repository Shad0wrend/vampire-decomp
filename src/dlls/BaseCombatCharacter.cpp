// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1033a9e0 size=0x5af
#include "CEHandleGet.h"
#include "CSoundControllerImp.h"
#include "CTriggerProximity.h"
#include "CUnknown102c63b0.h"
#include "CUnknown102c6460.h"
#include "CUnknown102ca630.h"
#include "CUnknown102dc2c0.h"
#include "utlrbtree.h"
#include "utlsortvector.h"
#include "utlvector.h"
#include "CBaseCombatCharacter.h"
#include "ScopeTrace.h"
#include <stdio.h>
#include <stdlib.h>
extern char g_106b8540[];
static inline const char *STRINGR_F(const char *const &s) { return s ? s : g_106b8540; }
struct CFoo1005f190 { int sub_1005f190(); };
extern CFoo1005f190 g_10937030;
void sub_10265680(int);
char sub_10265800();
CBaseEntity *sub_1023bd00();
const char *sub_101d3730(const char *fmt, ...);
struct CFeedFwd { void sub_10293e20(float); };
struct CFeedA8 { void sub_1017e150(int, float, const char *); };

namespace block_1033a9e0 {
struct CUnknown100290c0 : EHandleEntityList
{
	IHandleEntity *sub_100290c0(const CBaseHandle &handle) const;
};
IHandleEntity *CUnknown100290c0::sub_100290c0(const CBaseHandle &handle) const
{
	unsigned int i = handle.m_Index;
	if (i == 0xffffffff)
		return 0;
	const EHandleEntInfo *pInfo = &m_EntPtrArray[i & 0x1fff];
	if ((unsigned int)pInfo->m_SerialNumber == (i >> (m_EntPtrArray[0].m_pad & 31)))
		return pInfo->m_pEntity;
	else
		return 0;
}
}
using namespace block_1033a9e0;
inline CBaseCombatCharacter *LK(const CBaseHandle &h) { return (CBaseCombatCharacter *)((CUnknown100290c0 *)EHandleDetail::g_10566458)->sub_100290c0(h); }

#define V10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define V100(p) V10(p##0) V10(p##1) V10(p##2) V10(p##3) V10(p##4) V10(p##5) V10(p##6) V10(p##7) V10(p##8) V10(p##9)
struct CFeedNpc
{
	V100(a) V100(b) V100(c) V100(d)
	virtual void e0(); virtual void e1(); virtual void e2(); virtual void e3();
	virtual int slot404(void *pOther);
	V100(f) V100(g) virtual void h0(); virtual void h1(); virtual void h2(); virtual void h3(); virtual void h4(); virtual void h5(); virtual void h6(); virtual void h7(); virtual void h8();
	virtual void slot614();
	char m_pad[0x1b30 - 4];
	const char *m_pszFile1b30;
	int m_nLine1b34;
	void sub_102ae750(int a, int b);
};
struct CFeedChar : CBaseCombatCharacter
{
	char sub_10337f30();
	void sub_103394a0(int a, bool b, bool c);
	void sub_103392c0(CBaseCombatCharacter *p, bool b, bool c);
	CBaseCombatCharacter *GetGrappleTarget() { if (m_nTarget153c != -1) return (CBaseCombatCharacter *)m_hTarget1538.Get(); return 0; }
	bool IsGrappling(int mode) { return m_hTarget1538.Get() && m_nTarget153c != -1 && m_nTargetMode1540 == mode; }
};

extern CVStatList_t g_109f0b40;
void __cdecl sub_10012a8a();
inline CVStatList_t *FindStatList(CVStatListSet *pSet, int type)
{
	for (int i = 0; i < pSet->m_nLists; i++) {
		if (pSet->m_pLists[i]->m_field10 == type)
			return pSet->m_pLists[i];
	}
	if (!(g_109f0b2a & 1)) {
		g_109f0b2a |= 1;
		g_109f0b40.CVStatList_t::CVStatList_t(-1);
		atexit(sub_10012a8a);
	}
	return &g_109f0b40;
}
inline bool ModeIs(CBaseEntity *p, int m) { return *(int *)((char *)p + 0x49c) == m; }
struct CFeedSelf : CBaseCombatCharacter { void sub_1033a9e0(); };

// TARGET: CFeedSelf::sub_1033a9e0
void CFeedSelf::sub_1033a9e0()
{
	ScopeTrace trace("CBaseCombatCharacter::FeedInterrupt", this ? STRINGR_F(m_name26c) : g_105387dc);
	if (g_10937030.sub_1005f190()) {
		char buf[256];
		sprintf(buf, "%s FeedInterrupt with %s", (const char *)sub_100ab4f0(), LK(m_h149c) ? (const char *)LK(m_h149c)->sub_100ab4f0() : "**NULL**");
		sub_103221b0(buf);
	}
	if (m_b14a9)
		return;
	m_b14a9 = 1;
	m_b14a8 = 0;
	m_bCantBreakGrapple = 0;
	m_bIsFrenzyGrapple = 0;
	m_flBreakGrappleTimer = 0;
	EHANDLE *pFeed = &m_h149c;
	if (LK(*pFeed)) {
		EHANDLE *pGrab = &m_hTarget1538;
		if (!(LK(*pGrab) && m_nTarget153c != -1 && m_nTargetMode1540 == 8)) {
			sub_1033b100(7);
			sub_1033b100(3);
			if (FindStatList(CVStatListSet::Of(LK(*pFeed)), 0)->sub_102012d0(0xc) > 0) {
				CFeedNpc *pNpc = *(CFeedNpc **)((char *)LK(*pFeed) + 0x98);
				if (pNpc && pNpc->slot404(this) != 1) {
					pNpc->slot614();
					pNpc->m_pszFile1b30 = "E:\\Vampire\\main\\dlls\\BaseCombatCharacter.cpp";
					pNpc->m_nLine1b34 = 0x24c6;
					pNpc->sub_102ae750(0xfb, 0);
				}
			} else {
				bool a = false;
				bool b = false;
				CBaseEntity *pPl = sub_1023bd00();
				if (pPl && *(int *)((char *)pPl + 0x49c) == 2 && LK(*pGrab) && m_nTarget153c != -1) {
					int m = m_nTargetMode1540;
					if (m == 2) a = true;
					if (m == 2) b = true;
				}
				if (((CFeedChar *)pFeed->Get())->sub_10337f30())
					((CFeedChar *)pFeed->Get())->sub_103394a0(1, a, b);
				else
					((CFeedChar *)pFeed->Get())->sub_103392c0(this, a, b);
			}
			sub_1033b100(3);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(9);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(5);
			((CBaseCombatCharacter *)pFeed->Get())->sub_1033b100(1);
		}
		((CBaseCombatCharacter *)pFeed->Get())->c355();
		*pFeed = 0;
		if (*(int *)((char *)this + 0xa8) && !sub_10265800())
			sub_10265680(1);
	} else {
		CFeedChar *self = (CFeedChar *)this;
		if (self->GetGrappleTarget() && !self->IsGrappling(8) && !self->IsGrappling(2)) {
			CFeedA8 *pA8 = *(CFeedA8 **)((char *)this + 0xa8);
			if (pA8) {
				CFeedFwd *pF = *(CFeedFwd **)((char *)self->GetGrappleTarget() + 0x98);
				if (pF)
					pF->sub_10293e20(3.0f);
				pA8->sub_1017e150(1, 2.0f, sub_101d3730("FeedInterrupt %s", self->GetGrappleTarget()->sub_100ab4f0()));
			}
		}
	}
	m_flFeedInterval1494 = 0;
	m_b14a9 = 0;
}
// END FUNCTION
