// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10391390 size=0x1d
#include "CNPC_VMingXiao.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093bacc;
extern B g_10936c74;
int CNPC_VMingXiao::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093bacc.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10396fd0 size=0x18
#include "CNPC_VMingXiao.h"

char CNPC_VMingXiao::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION
