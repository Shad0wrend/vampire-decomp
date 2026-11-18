// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10389560 size=0x6
#include "CNPC_VMalkavian.h"

extern char g_1093b718;

void *CNPC_VMalkavian::sub_10389560()
{
	return &g_1093b718;
}
// END FUNCTION

// FUNCTION: 0x10389580 size=0x6
#include "CNPC_VMalkavian.h"

extern char *g_106408f0;

const char *CNPC_VMalkavian::sub_10389580()
{
	return g_106408f0;
}
// END FUNCTION

// FUNCTION: 0x103895a0 size=0x1e
#include "CNPC_VMalkavian.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VMalkavian::vfunc5
CNPC_VMalkavian *CNPC_VMalkavian::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103896a0 size=0x6
#include "CNPC_VMalkavian.h"

extern char g_106408e8;

char CNPC_VMalkavian::sub_103896a0()
{
	return g_106408e8;
}
// END FUNCTION

// FUNCTION: 0x10389700 size=0x1d
#include "CNPC_VMalkavian.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b6fc;
extern B g_10936c74;
int CNPC_VMalkavian::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b6fc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10389bd0 size=0x5
#include "CNPC_VMalkavian.h"
struct CNPC_VVampireCall_103c4ef0 { void sub_103c4ef0(); };
// TARGET: CNPC_VMalkavian::vfunc103
// the game's 0x10389bd0: a tail call (jmp) of CNPC_VVampireCall_103c4ef0::sub_103c4ef0
void CNPC_VMalkavian::vfunc103()
{
	((CNPC_VVampireCall_103c4ef0 *)this)->CNPC_VVampireCall_103c4ef0::sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x10389bf0 size=0x6
#include "CNPC_VMalkavian.h"
int CNPC_VMalkavian::vfunc138()
{
    return 0x16;
}
// END FUNCTION
