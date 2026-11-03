// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x10158a80 size=0x1f
#include "CPhysicsGameTrace.h"

struct CUnknown1070b254
{
	virtual int vfunc0(void *pPassEnt, int a);
	virtual void vfunc1();
	virtual void vfunc2();
};

extern CUnknown1070b254 *g_1070b254;

bool CPhysicsGameTrace::vfunc2(void *pPassEnt)
{
	return (g_1070b254->vfunc0(pPassEnt, 0) & 0x4030) != 0;
}
// END FUNCTION
