// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1036fb10 size=0x6
extern void *g_1093ab68;

void *sub_1036fb10(void)
{
    return &g_1093ab68;
}
// END FUNCTION

// FUNCTION: 0x1036fb30 size=0x6
extern char *g_10631680;

char *sub_1036fb30(void)
{
    return g_10631680;
}
// END FUNCTION

// FUNCTION: 0x1036fb50 size=0x1e
#include "CNPC_VCombatman.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VCombatman::vfunc5
CNPC_VCombatman *CNPC_VCombatman::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1036fc50 size=0x6
extern char g_10631678;

char sub_1036fc50(void)
{
    return g_10631678;
}
// END FUNCTION

// FUNCTION: 0x1036fcb0 size=0x1d
#include "CNPC_VCombatman.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093abb0;
extern B g_10936c74;
int CNPC_VCombatman::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093abb0.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10370180 size=0x5
#include "CNPC_VCombatman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCombatman::vfunc104
// the game's 0x10370180: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VCombatman::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x103701a0 size=0x1f
#include "CNPC_VCombatman.h"
#include "CNPC_VHuman.h"
#include "CBaseAnimating.h"

struct CUnk1026dc00
{
	unsigned int sub_1026dc00(unsigned int bits);
};

void CNPC_VCombatman::vfunc103()
{
	((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc103();
	((CBaseAnimating *)this)->sub_100952d0(-1);
}
// END FUNCTION

// FUNCTION: 0x103701d0 size=0x6
#include "CNPC_VCombatman.h"
int CNPC_VCombatman::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x10370230 size=0x9d
#include "CNPC_VCombatman.h"
#define F(T, off) (*(T *)((char *)this + off))
int CNPC_VCombatman::vfunc438()
{
	F(int, 0x1b2c) = 0xb;
	if ((F(unsigned int, 0x14b8) & 2) == 2) {
		F(unsigned int, 0x14b8) &= 0xfffffffd;
		return 0xf1;
	}
	switch (F(int, 0x5cc0)) {
	case 1:
		break;
	default:
		return sub_10015ad2();
	}
	if (F(CNPC_VCombatmanTarget *, 0x5d34)->sub_100037e2() != 8 && F(int, 0x62ec) == 0)
		return 0xff;
	if (sub_1001482b(0x13))
		return 0x102;
	if (sub_1001482b(0x10))
		return 0x106;
	return (sub_1001482b(0x11) ? 5 : 0) + 0x100;
}
// END FUNCTION

// FUNCTION: 0x10370300 size=0x5
#include "CNPC_VCombatman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCombatman::vfunc440
// the game's 0x10370300: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VCombatman::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x10370320 size=0xf
#include "CNPC_VCombatman.h"
#include "CNPC_VHuman.h"

int CNPC_VCombatman::vfunc461()
{
	*(int *)((char *)this + 0x1b38) = 0xb;
	return ((CNPC_VHuman *)this)->sub_103851e0();
}
// END FUNCTION

// FUNCTION: 0x10370340 size=0xd
void sub_10385a10(float a);

void sub_10370340(float a)
{
	sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x10370360 size=0x5
#include "CNPC_VCombatman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VCombatman::vfunc434
// the game's 0x10370360: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VCombatman::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION
