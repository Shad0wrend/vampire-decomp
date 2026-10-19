// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10377cd0 size=0x1d
#include "CNPC_VGargoyle.h"
struct A { int sub_10012300(int); };
struct B { int sub_1000aed4(int); };
extern A g_1093b038;
extern B g_10936c74;
int CNPC_VGargoyle::vfunc546(int x)
{
    return g_10936c74.sub_1000aed4(g_1093b038.sub_10012300(x));
}
// END FUNCTION

// FUNCTION: 0x10378a30 size=0xf0
#include "CNPC_VHuman.h"

int CNPC_VGargoyle::vfunc440(int schedule)
{
    switch (schedule) {
    case 0x5b: return 0x15d;
    case 0xea: return 0x15e;
    case 0xdc: return 0x15f;
    case 0xdd: return 0x160;
    }
    return ((CNPC_VHuman *)this)->CNPC_VHuman::vfunc440(schedule);
}
// END FUNCTION

// FUNCTION: 0x10379f50 size=0xe
struct CUnk10924edc
{
	virtual void v0();
	virtual void v1();
};
extern CUnk10924edc *g_10924edc;
// TARGET: CNPC_VGargoyle::vfunc601
void CNPC_VGargoyle::vfunc601(int unused)
{
	g_10924edc->v1();
}
// END FUNCTION

// FUNCTION: 0x1037a5f0 size=0x8
// TARGET: CNPC_VGargoyle::vfunc359
int CNPC_VGargoyle::vfunc359(int index)
{
	return 1;
}
// END FUNCTION
