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
