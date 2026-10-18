// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x1037ea60 size=0x1d
#include "CNPC_VHengeyokai.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b27c;
extern B g_10936c74;
int CNPC_VHengeyokai::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b27c.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10380f90 size=0x18
#include "CNPC_VHengeyokai.h"

char CNPC_VHengeyokai::vfunc69(void *pOther)
{
	if (*((unsigned char *)pOther + 0x4c) & 0x16)
		return 1;
	return sub_1029b180(pOther);
}
// END FUNCTION

// FUNCTION: 0x103817b0 size=0xe
#include "CNPC_VHengeyokai.h"
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VHengeyokai::vfunc601
void CNPC_VHengeyokai::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION
