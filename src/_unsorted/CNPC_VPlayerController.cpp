// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10376f50 size=0x1e
#include "CNPC_VPlayerController.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VPlayerController::vfunc5
CNPC_VPlayerController *CNPC_VPlayerController::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a49c0 size=0x71
#include "CNPC_VPlayerController.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotOwner {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8)
	SV(90) SV(91) SV(92) SV(93) SV(94) SV(95) SV(96)
	virtual SlotOwner *v97();
	char pad[0xa8 - 4];
	struct SlotAnim *m_pAnim;
};

struct SlotAnim {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23)
	SV(240) SV(241) SV(242) SV(243) SV(244)
	virtual void v245(int a, int b, int c, int d, int e);
};

extern void (*g_109f364c)(const char *);

void CNPC_VPlayerController::vfunc245(int a, int b, int c, int d, int e)
{
	sub_1000cefa(a, b, c, d, e);
	SlotOwner *pOwner = ((SlotOwner *)this)->v97();
	if (pOwner && pOwner->m_pAnim) {
		pOwner->m_pAnim->v245(a, b, c, d, e);
		return;
	}
	g_109f364c("Player Controller NPC adding extra animations, but is not attached to a player. This is probably bad.\n");
}
// END FUNCTION
