// Matched functions only. Written by pcdecomp; change it through pcdecomp.
#include "vampire.h"

// FUNCTION: 0x101589e0 size=0x38
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "Ray_t.h"
#include "CPhysicsGameTrace.h"
#include "CUnknown1070b254.h"
#include "CTraceFilterSimple.h"

extern CUnknown1070b254 *g_1070b254;

// TARGET: CPhysicsGameTrace::vfunc0
void CPhysicsGameTrace::vfunc0(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace)
{
	CTraceFilterSimple filter(pPassEnt, 0);
	g_1070b254->vfunc4(pRay, 0x200400b, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
}
// END FUNCTION

// FUNCTION: 0x10158a30 size=0x38
#include "CGameTrace.h"
#include "CTraceFilterNoCharacterCollide.h"
#include "Ray_t.h"
#include "CPhysicsGameTrace.h"
#include "CUnknown1070b254.h"
#include "CTraceFilterSimple.h"

extern CUnknown1070b254 *g_1070b254;

// TARGET: CPhysicsGameTrace::vfunc1
void CPhysicsGameTrace::vfunc1(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace)
{
	CTraceFilterSimple filter(pPassEnt, 0);
	g_1070b254->vfunc4(pRay, 0x200403b, (CTraceFilterNoCharacterCollide *)&filter, pTrace);
}
// END FUNCTION

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
