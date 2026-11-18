// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b2770 size=0x6
#include "CNPC_VStalker.h"
namespace lifted {
extern char g_10651ce0;
}
datamap_t * CNPC_VStalker::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_10651ce0);
}
// END FUNCTION

// FUNCTION: 0x103b28b0 size=0x6
#include "CNPC_VStalker.h"
namespace lifted {
extern char g_1093c6f0;
}
int CNPC_VStalker::vfunc580()
{
    return (int)&lifted::g_1093c6f0;
}
// END FUNCTION

// FUNCTION: 0x103b28d0 size=0x6
#include "CNPC_VStalker.h"
namespace lifted {
extern int g_10651d00;
}
int CNPC_VStalker::vfunc451()
{
    return lifted::g_10651d00;
}
// END FUNCTION

// FUNCTION: 0x103b28f0 size=0x1e
#include "CNPC_VStalker.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VStalker::vfunc5
CBaseEntity *CNPC_VStalker::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b29f0 size=0x6
extern unsigned char g_10651cf8;
// TARGET: sub_103b29f0
unsigned char sub_103b29f0()
{
    return g_10651cf8;
}
// END FUNCTION

// FUNCTION: 0x103b2a50 size=0x1d
#include "CNPC_VStalker.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c738;
extern B g_10936c74;
int CNPC_VStalker::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c738.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b2e60 size=0x1d
// TARGET: sub_103b2e60
int __stdcall sub_103b2e60(int a)
{
    if (a == 9 || a == 0x13 || a == 0x1115)
    {
        a = 0x1121;
    }
    return a;
}
// END FUNCTION
