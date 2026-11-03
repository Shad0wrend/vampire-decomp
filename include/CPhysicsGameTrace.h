// CPhysicsGameTrace (RTTI .?AVCPhysicsGameTrace@@), base IPhysicsGameTrace at +0x0, primary vtable 0x1046ed04.
// Only the slots decompiled code needs are declared.
#pragma once

struct Ray_t;
struct CGameTrace;

class CPhysicsGameTrace
{
public:
	virtual void vfunc0(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace);	// slot 0: builds a CTraceFilterSimple(pPassEnt, 0) and hands it with mask 0x200400b to the engine trace object's vfunc4 (TraceRay)
	virtual void vfunc1();
	virtual bool vfunc2(void *pPassEnt);
};
