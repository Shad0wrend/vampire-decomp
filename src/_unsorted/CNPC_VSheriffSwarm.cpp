// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103b1c20 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern char g_1093c638;
}
int CNPC_VSheriffSwarm::vfunc580()
{
    return (int)&lifted::g_1093c638;
}
// END FUNCTION

// FUNCTION: 0x103b1c40 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern int g_10651948;
}
int CNPC_VSheriffSwarm::vfunc451()
{
    return lifted::g_10651948;
}
// END FUNCTION

// FUNCTION: 0x103b1c60 size=0x1e
#include "CNPC_VSheriffSwarm.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VSheriffSwarm::vfunc5
CNPC_VSheriffSwarm *CNPC_VSheriffSwarm::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x103b1dc0 size=0x1d
#include "CNPC_VSheriffSwarm.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093c680;
extern B g_10936c74;
int CNPC_VSheriffSwarm::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093c680.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103b2280 size=0x6
#include "CNPC_VSheriffSwarm.h"
namespace lifted {
extern char g_1065194c;
}
datamap_t * CNPC_VSheriffSwarm::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1065194c);
}
// END FUNCTION

// FUNCTION: 0x103b2390 size=0x6
#include "CNPC_VSheriffSwarm.h"
int CNPC_VSheriffSwarm::vfunc473()
{
    return 0x17;
}
// END FUNCTION
