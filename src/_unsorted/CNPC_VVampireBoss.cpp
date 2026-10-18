// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x103c5270 size=0x1d
#include "CNPC_VVampireBoss.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093d30c;
extern B g_10936c74;
int CNPC_VVampireBoss::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093d30c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x103c5fe0 size=0xe
bool CNPC_VVampireBoss::vfunc525(int unused)
{
	return m_bFlag6498 ? true : false;
}
// END FUNCTION
