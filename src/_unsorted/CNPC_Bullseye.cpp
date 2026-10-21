// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10356740 size=0x1e
#include "CNPC_Bullseye.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_Bullseye::vfunc5
CNPC_Bullseye *CNPC_Bullseye::vfunc5(unsigned int flags)
{
	sub_10006c26();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10356b50 size=0xa9
#include "CBaseEntity.h"
#include "CNPC_Bullseye.h"
#include "CCollisionProperty.h"
#include "ScopeTrace.h"

extern char g_1070d1b0[];
extern void sub_101cf390(CNPC_Bullseye *, void *, void *);

void CNPC_Bullseye::vfunc144(int a)
{
	sub_10006f32(a);
	vfunc93(0, 0);
	{
		ScopeTrace trace("CBaseEntity::AddSolidFlags", m_name26c ? m_name26c : g_106b8540);
		CCollisionProperty *pColl = (CCollisionProperty *)((char *)this + 0x270);
		pColl->sub_100dc580(pColl->m_usSolidFlags | 4);
	}
	sub_101cf390(this, g_1070d1b0, g_1070d1b0);
}
// END FUNCTION

// FUNCTION: 0x10356f60 size=0x6e
#include "CNPC_Bullseye.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotObj {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13)
	SV(140) SV(141) SV(142) SV(143) SV(144) SV(145)
	virtual void v146(unsigned int, int, int);
	SV(147) SV(148) SV(149)
	SV10(15) SV(160) SV(161) SV(162) SV(163) SV(164) SV(165) SV(166)
	virtual void *v167();
};

struct BullseyeInfo {
	unsigned int first;
	char pad[0x28];
	char *pAttacker;
};

void CNPC_Bullseye::vfunc141(void *pInfo, int a, int b)
{
	BullseyeInfo *info = (BullseyeInfo *)pInfo;
	if (*(unsigned int *)((char *)this + 0x204) & 0x40000) {
		SlotObj *p = *(SlotObj **)(info->pAttacker + 0x94);
		if (!p)
			return;
		if (p->v167() != this)
			return;
	}
	if ((*(unsigned int *)((char *)this + 0x204) & 0x80000) && *(int *)((char *)this + 0x1fc) == 0)
		((SlotObj *)this)->v146(info->first, a, b);
	sub_10015b13(pInfo, a, b);
}
// END FUNCTION

// FUNCTION: 0x10356ff0 size=0xdf
#include "CNPC_Bullseye.h"

struct EntInfo { CBaseEntity *m_pEntity; int m_serial; int m_unused; };
struct EntInfoList { int m_unused; EntInfo m_entries[1]; };
extern EntInfoList *g_10566458;

#define S10(p) virtual void p##0(); virtual void p##1(); virtual void p##2(); virtual void p##3(); virtual void p##4(); \
	virtual void p##5(); virtual void p##6(); virtual void p##7(); virtual void p##8(); virtual void p##9();
#define S100(p) S10(p##0) S10(p##1) S10(p##2) S10(p##3) S10(p##4) S10(p##5) S10(p##6) S10(p##7) S10(p##8) S10(p##9)

struct CBullseyeAttackerNpc
{
	S100(a) S10(b0) S10(b1) S10(b2) S10(b3) S10(b4) S10(b5)
	virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3(); virtual void c4(); virtual void c5(); virtual void c6();
	virtual CBaseEntity *vfunc167();	// the entity the NPC targets
};

struct CBullseyeAttacker { char m_pad[0x94]; CBullseyeAttackerNpc *m_pNpc; };

struct CBullseyeDamageInfo	// 0x4c bytes
{
	char m_pad00[0x2c];
	CBullseyeAttacker *m_pAttacker;	// 0x2c
	int m_nDamage;	// 0x30
	char m_pad34[0x4c - 0x34];
};

struct CBullseyeHandle
{
	unsigned int m_Index;
	CBaseEntity *Get() const
	{
		EntInfo *e;
		return (m_Index != 0xffffffff && (e = &g_10566458->m_entries[m_Index & 0x1fff], e->m_serial == (int)(m_Index >> 13))) ? e->m_pEntity : 0;
	}
};

int CNPC_Bullseye::vfunc142(void *pInfo)
{
	CBullseyeDamageInfo *pDamage = (CBullseyeDamageInfo *)pInfo;
	if (*(unsigned int *)((char *)this + 0x204) & 0x40000) {
		CBullseyeAttackerNpc *pNpc = pDamage->m_pAttacker->m_pNpc;
		if (!pNpc)
			return 0;
		if (pNpc->vfunc167() != this)
			return 0;
	}
	if (((CBullseyeHandle *)((char *)this + 0x5f44))->Get()) {
		((CBullseyeHandle *)((char *)this + 0x5f44))->Get()->sub_100a1250(pInfo);
		CBullseyeDamageInfo info = *pDamage;
		info.m_nDamage = 0;
		return sub_10265e90(&info);
	}
	return sub_10265e90(pInfo);
}
// END FUNCTION
