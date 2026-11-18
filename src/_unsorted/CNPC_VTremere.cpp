// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b5ad0 size=0x6
#include "CNPC_VTremere.h"

extern int g_1093c980;

// TARGET: CNPC_VTremere::vfunc580
void *CNPC_VTremere::vfunc580()
{
	return &g_1093c980;
}
// END FUNCTION

// FUNCTION: 0x103b5af0 size=0x6
#include "CNPC_VTremere.h"

extern const char *g_10652d00;

// TARGET: CNPC_VTremere::vfunc451
const char *CNPC_VTremere::vfunc451()
{
	return g_10652d00;
}
// END FUNCTION

// FUNCTION: 0x103b5b10 size=0x1e
#include "CNPC_VTremere.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VTremere::vfunc5
CNPC_VTremere *CNPC_VTremere::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b5c10 size=0x6
#include "CNPC_VTremere.h"

extern char g_10652cf8;

// TARGET: CNPC_VTremere::vfunc452
char CNPC_VTremere::vfunc452()
{
	return g_10652cf8;
}
// END FUNCTION

// FUNCTION: 0x103b5c70 size=0x1d
#include "CNPC_VTremere.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c9c8;
extern B g_10936c74;
int CNPC_VTremere::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c9c8.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b6140 size=0x5
#include "CNPC_VTremere.h"
struct CNPC_VVampireCall_103c4ef0 { void sub_103c4ef0(); };
// TARGET: CNPC_VTremere::vfunc103
// the game's 0x103b6140: a tail call (jmp) of CNPC_VVampireCall_103c4ef0::sub_103c4ef0
void CNPC_VTremere::vfunc103()
{
	((CNPC_VVampireCall_103c4ef0 *)this)->CNPC_VVampireCall_103c4ef0::sub_103c4ef0();
}
// END FUNCTION

// FUNCTION: 0x103b6160 size=0x6
#include "CNPC_VTremere.h"
int CNPC_VTremere::vfunc138()
{
    return 0x14;
}
// END FUNCTION
