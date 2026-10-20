// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1018f230 size=0x36
#include "CBreakableProp.h"

struct CUnknownMember10015708
{
	void sub_10015708();	// member destructor
};

struct CBaseEntityDtor
{
	void sub_1008b3c0();	// CBaseEntity destructor body
};

void sub_100aa7b0(void *p);

CBreakableProp *CBreakableProp::vfunc5(unsigned int flags)
{
	((CUnknownMember10015708 *)((char *)this + 0x748))->sub_10015708();
	((CUnknownMember10015708 *)((char *)this + 0x730))->sub_10015708();
	((CBaseEntityDtor *)this)->sub_1008b3c0();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1018f280 size=0x85
#include "CBreakableProp.h"
#include "CUnknown1070b22c.h"

struct CListNode100cd940;
int __fastcall sub_100cd940(CListNode100cd940 *p);
extern CUnknown1070b22c *g_1070b22c;
extern void (__cdecl *g_109f3658)(int level, const char *fmt, ...);

void CBreakableProp::vfunc265()
{
	if (*(int *)((char *)this + 0x210) == 5) {
		if (!sub_100cd940((CListNode100cd940 *)((char *)this + 0x748)) && !sub_100cd940((CListNode100cd940 *)((char *)this + 0x730))) {
			void (__cdecl *warn)(int level, const char *fmt, ...) = g_109f3658;
			*(int *)((char *)this + 0x210) = 0;
			warn(2, "\n**** HACK DESTRUCTABLE PROP HEALTH HACK ****\n");
			int edict = *(int *)((char *)this + 0x2e0);
			int idx = g_1070b22c->vfunc35(edict);
			warn(2, "\nSetting entity %-4d's health to 0,  (%s, %s)\n", idx, sub_100ab4f0(), sub_1009f200());
			warn(2, "\n**** HACK DESTRUCTABLE PROP HEALTH HACK ****\n\n");
		}
	}
}
// END FUNCTION

// FUNCTION: 0x1018f340 size=0x73
#include "CBreakableProp.h"

#define SV(n) virtual void v##n();
#define SV10(p) SV(p##0) SV(p##1) SV(p##2) SV(p##3) SV(p##4) SV(p##5) SV(p##6) SV(p##7) SV(p##8) SV(p##9)

struct SlotProp {
	SV10(0) SV10(1) SV10(2) SV10(3) SV10(4) SV10(5) SV10(6) SV10(7) SV10(8) SV10(9)
	SV10(10) SV10(11) SV10(12) SV10(13) SV10(14) SV10(15) SV10(16) SV10(17) SV10(18) SV10(19)
	SV10(20) SV10(21) SV10(22) SV10(23) SV10(24) SV10(25)
	SV(260) SV(261) SV(262) SV(263) SV(264)
	virtual void v265();
};

extern int g_1070ba38;

void CBreakableProp::vfunc103()
{
	sub_10011793();
	((SlotProp *)this)->v265();
	if (*(int *)((char *)this + 0x210) == 0)
		*(int *)((char *)this + 0x1fc) = 1;
	else
		*(int *)((char *)this + 0x1fc) = 2;
	*(int *)((char *)this + 0x760) = g_1070ba38;
	if (*(float *)((char *)this + 0xdc) == 0.0f)
		*(float *)((char *)this + 0xdc) = 0.1f;
	((CBaseEntity *)this)->sub_100b3580(0x20000000);
	*(int *)((char *)this + 0x774) = 0;
}
// END FUNCTION

// FUNCTION: 0x1018f580 size=0x7d
#include "CBaseEntity.h"
#include "CBreakableProp.h"

struct SGlobalVars {
	char pad[0xc];
	float curtime;
};

extern SGlobalVars *g_1070b228;
void sub_10014e25();

void CBreakableProp::vfunc144(void *pInfo)
{
	*(unsigned int *)((char *)this + 0x204) &= 0xffffdfff;
	((CBaseEntity *)this)->sub_100b3640(0x40000);
	CBaseEntity *pAttacker = *(CBaseEntity **)((char *)pInfo + 0x28);
	if (pAttacker)
		*(unsigned int *)((char *)this + 0x768) = *pAttacker->vfunc1();
	else
		*(unsigned int *)((char *)this + 0x768) = 0xffffffff;
	sub_10007fe5((void *)sub_10014e25, 0, 0);
	float fNext = g_1070b228->curtime + 0.001;
	*(int *)((char *)this + 0x1fc) = 0;
	*(int *)((char *)this + 0x200) = 1;
	*(float *)((char *)this + 0x17c) = fNext;
}
// END FUNCTION

// FUNCTION: 0x1018fe50 size=0x11
struct CBreakablePropFields1018fe50 {
    char pad0[0x1fc];
    int field1fc;
    bool sub_1018fe50(int a);
};
bool CBreakablePropFields1018fe50::sub_1018fe50(int a)
{
    return field1fc == 2;
}
// END FUNCTION
