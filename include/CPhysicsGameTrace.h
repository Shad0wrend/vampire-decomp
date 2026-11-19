// CPhysicsGameTrace (RTTI .?AVCPhysicsGameTrace@@), base IPhysicsGameTrace at +0x0, primary vtable 0x1046ed04.
// Only the slots decompiled code needs are declared.
#pragma once

struct Ray_t;
struct CGameTrace;

class IPhysicsGameTrace	// RTTI .?AVIPhysicsGameTrace@@, the interface CPhysicsGameTrace implements (Source's public/vphysics_interface.h, 3 slots)
{
public:
	virtual void vfunc0(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace) = 0;	// slot 0
	virtual void vfunc1(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace) = 0;	// slot 1
	virtual bool vfunc2(void *pPassEnt) = 0;	// slot 2
};

class CPhysicsGameTrace : public IPhysicsGameTrace
{
public:
	virtual void vfunc0(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace);	// slot 0: builds a CTraceFilterSimple(pPassEnt, 0) and hands it with mask 0x200400b to the engine trace object's vfunc4 (TraceRay)
	virtual void vfunc1(Ray_t *pRay, void *pPassEnt, CGameTrace *pTrace);
	virtual bool vfunc2(void *pPassEnt);
};
