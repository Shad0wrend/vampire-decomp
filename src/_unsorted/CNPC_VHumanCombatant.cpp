// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10386b20 size=0x1e
#include "CNPC_VHumanCombatant.h"

void sub_100aa7b0(void *p);

// TARGET: CNPC_VHumanCombatant::vfunc5
CNPC_VHumanCombatant *CNPC_VHumanCombatant::vfunc5(unsigned int flags)
{
	sub_100123af();
	if (flags & 1)
		sub_100aa7b0(this);
	return this;
}
// END FUNCTION

// FUNCTION: 0x10386c80 size=0x1d
#include "CNPC_VHumanCombatant.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b47c;
extern B g_10936c74;
int CNPC_VHumanCombatant::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b47c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10387110 size=0x13
#include "CNPC_VHumanCombatant.h"
void CNPC_VHumanCombatant::vfunc103()
{
	sub_10384690();
	sub_10012855(0x40);
}
// END FUNCTION
