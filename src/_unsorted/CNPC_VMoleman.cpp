// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1039f600 size=0x6
#include "CNPC_VMoleman.h"
// TARGET: CNPC_VMoleman::vfunc580
extern char g_1093bdd8;

char *CNPC_VMoleman::vfunc580()
{
	return &g_1093bdd8;
}
// END FUNCTION

// FUNCTION: 0x1039f620 size=0x6
#include "CNPC_VMoleman.h"

extern char *g_1064a588;

const char *CNPC_VMoleman::sub_1039f620()
{
	return g_1064a588;
}
// END FUNCTION

// FUNCTION: 0x1039f640 size=0x1e
#include "CNPC_VMoleman.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMoleman::vfunc5
CBaseEntity *CNPC_VMoleman::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x1039f740 size=0x6
#include "CNPC_VMoleman.h"
extern char g_1064a580;

char CNPC_VMoleman::vfunc452()
{
	return g_1064a580;
}
// END FUNCTION

// FUNCTION: 0x1039f7a0 size=0x1d
#include "CNPC_VMoleman.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bdb8;
extern B g_10936c74;
int CNPC_VMoleman::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bdb8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x1039fc70 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc104
// the game's 0x1039fc70: a tail call (jmp) of CNPC_VHuman::vfunc104
void CNPC_VMoleman::vfunc104()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc104();
}
// END FUNCTION

// FUNCTION: 0x1039fc90 size=0x15
#include "CNPC_VMoleman.h"

struct CUnk1026dc00 {
    char pad[0x5cec];
    unsigned int m_5cec;
    unsigned int sub_1026dc00(unsigned int flags);
};

void CNPC_VMoleman::vfunc103()
{
    ((CUnk1026dc00 *)this)->sub_1026dc00(0x200000);
    sub_10384690();
}
// END FUNCTION

// FUNCTION: 0x1039fcc0 size=0x6
#include "CNPC_VMoleman.h"
int CNPC_VMoleman::vfunc138()
{
    return 4;
}
// END FUNCTION

// FUNCTION: 0x1039fce0 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc463
// the game's 0x1039fce0: a tail call (jmp) of CNPC_VHuman::vfunc463
void CNPC_VMoleman::vfunc463(int a0, int a1)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc463(a0, a1);
}
// END FUNCTION

// FUNCTION: 0x1039fd00 size=0x5
#include "animevent_t.h"
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc259
// the game's 0x1039fd00: a tail call (jmp) of CNPC_VHuman::vfunc259
void CNPC_VMoleman::vfunc259(animevent_t *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc259(a0);
}
// END FUNCTION

// FUNCTION: 0x1039fd20 size=0x9d
#include "CNPC_VMoleman.h"
// TARGET: CNPC_VMoleman::vfunc438
int CNPC_VMoleman::vfunc438()
{
	m_n1b2c = 0x1b;
	if ((m_flags14b8 & 2) == 2) {
		m_flags14b8 &= ~2;
		return 0xf1;
	}
	switch (m_nState5cc0) {
	case 1:
		if (m_pNavigator->sub_102ee620() != 8 && m_n62ec == 0)
			return 0xff;
		if (sub_1001482b(0x13))
			return 0x102;
		if (sub_1001482b(0x10))
			return 0x106;
		return (sub_1001482b(0x11) ? 5 : 0) + 0x100;
	}
	return sub_10015ad2();
}
// END FUNCTION

// FUNCTION: 0x1039fdf0 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc440
// the game's 0x1039fdf0: a tail call (jmp) of CNPC_VHuman::vfunc440
int CNPC_VMoleman::vfunc440(int a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(a0);
}
// END FUNCTION

// FUNCTION: 0x1039fe10 size=0xf
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

int CNPC_VMoleman::vfunc461()
{
	*(int *)((char *)this + 0x1b38) = 0x1b;
	return ((CNPC_VHuman *)this)->sub_103851e0();
}
// END FUNCTION

// FUNCTION: 0x1039fe30 size=0xd
void sub_10385a10(float a);

void sub_1039fe30(float a)
{
	sub_10385a10(a);
}
// END FUNCTION

// FUNCTION: 0x1039fe50 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc434
// the game's 0x1039fe50: a tail call (jmp) of CNPC_VHuman::vfunc434
void CNPC_VMoleman::vfunc434()
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc434();
}
// END FUNCTION

// FUNCTION: 0x1039fe70 size=0x5
#include "CTakeDamageInfo.h"
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc390
// the game's 0x1039fe70: a tail call (jmp) of CNPC_VHuman::vfunc390
int CNPC_VMoleman::vfunc390(CTakeDamageInfo *a0)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc390(a0);
}
// END FUNCTION

// FUNCTION: 0x1039fe90 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc366
// the game's 0x1039fe90: a tail call (jmp) of CNPC_VHuman::vfunc366
bool CNPC_VMoleman::vfunc366(int a0, int a1, int a2)
{
	return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc366(a0, a1, a2);
}
// END FUNCTION

// FUNCTION: 0x1039feb0 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc144
// the game's 0x1039feb0: a tail call (jmp) of CNPC_VHuman::vfunc144
void CNPC_VMoleman::vfunc144(void *a0)
{
#define a0 ((int)a0)
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc144(a0);
#undef a0
}
// END FUNCTION

// FUNCTION: 0x1039fed0 size=0x5
#include "CNPC_VMoleman.h"
#include "CNPC_VHuman.h"

// TARGET: CNPC_VMoleman::vfunc442
// the game's 0x1039fed0: a tail call (jmp) of CNPC_VHuman::vfunc442
void CNPC_VMoleman::vfunc442(int const *a0)
{
	((CNPC_VHuman *)this)->CNPC_VHuman::vfunc442(a0);
}
// END FUNCTION
