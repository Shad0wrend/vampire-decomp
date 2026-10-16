// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

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
