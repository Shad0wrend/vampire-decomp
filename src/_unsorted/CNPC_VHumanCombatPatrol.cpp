// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103875d0 size=0x6
#include "CNPC_VHumanCombatPatrol.h"
namespace lifted {
extern char g_1063fb78;
}
datamap_t * CNPC_VHumanCombatPatrol::vfunc82()
{
    return (datamap_t *)((int)&lifted::g_1063fb78);
}
// END FUNCTION

// FUNCTION: 0x10387710 size=0x6
#include "CNPC_VHumanCombatPatrol.h"
namespace lifted {
extern char g_1093b538;
}
int CNPC_VHumanCombatPatrol::vfunc580()
{
    return (int)&lifted::g_1093b538;
}
// END FUNCTION

// FUNCTION: 0x10387730 size=0x6
#include "CNPC_VHumanCombatPatrol.h"
namespace lifted {
extern int g_1063fb98;
}
int CNPC_VHumanCombatPatrol::vfunc451()
{
    return lifted::g_1063fb98;
}
// END FUNCTION

// FUNCTION: 0x10387750 size=0x1e
#include "CNPC_VHumanCombatPatrol.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHumanCombatPatrol::vfunc5
CBaseEntity *CNPC_VHumanCombatPatrol::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10387850 size=0x6
extern unsigned char g_1063fb90;
// TARGET: sub_10387850
unsigned char sub_10387850()
{
    return g_1063fb90;
}
// END FUNCTION

// FUNCTION: 0x103878b0 size=0x1d
#include "CNPC_VHumanCombatPatrol.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b580;
extern B g_10936c74;
int CNPC_VHumanCombatPatrol::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b580.sub_10012300(x));
}
// END FUNCTION
