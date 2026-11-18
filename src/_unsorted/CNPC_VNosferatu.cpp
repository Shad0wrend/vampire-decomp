// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103a14a0 size=0x6
#include "CNPC_VNosferatu.h"
// TARGET: CNPC_VNosferatu::vfunc580
extern char g_1093bee8;

char *CNPC_VNosferatu::vfunc580()
{
	return &g_1093bee8;
}
// END FUNCTION

// FUNCTION: 0x103a14c0 size=0x6
#include "CNPC_VNosferatu.h"

extern const char *g_1064acc0;

// TARGET: CNPC_VNosferatu::vfunc451
const char *CNPC_VNosferatu::vfunc451()
{
	return g_1064acc0;
}
// END FUNCTION

// FUNCTION: 0x103a14e0 size=0x1e
#include "CNPC_VNosferatu.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VNosferatu::vfunc5
CBaseEntity *CNPC_VNosferatu::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103a15e0 size=0x6
#include "CNPC_VNosferatu.h"

extern char g_1064acb8;

// TARGET: CNPC_VNosferatu::vfunc452
char CNPC_VNosferatu::vfunc452()
{
	return g_1064acb8;
}
// END FUNCTION

// FUNCTION: 0x103a1640 size=0x1d
#include "CNPC_VNosferatu.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bf30;
extern B g_10936c74;
int CNPC_VNosferatu::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bf30.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103a1b10 size=0x5
#include "CNPC_VNosferatu.h"
struct CNPC_VVampireCall_103c4ef0 { void sub_103c4ef0(); };
// TARGET: CNPC_VNosferatu::vfunc103
// the game's 0x103a1b10: a tail call (jmp) of CNPC_VVampireCall_103c4ef0::sub_103c4ef0
void CNPC_VNosferatu::vfunc103()
{
	((CNPC_VVampireCall_103c4ef0 *)this)->CNPC_VVampireCall_103c4ef0::sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103a1b30 size=0x6
#include "CNPC_VNosferatu.h"
int CNPC_VNosferatu::vfunc138()
{
    return 0x12;
}
// END FUNCTION
