// CUnknown1070b254: the engine trace object (pointer at 0x1070b254); slots 2 (ClipRayToEntity) and 4 (TraceRay) are known.
#pragma once

struct Ray_t;
struct CGameTrace;
class CBaseEntity;
class CTraceFilterNoCharacterCollide;

class CUnknown1070b254
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(Ray_t *pRay, unsigned int fMask, CBaseEntity *pEnt, CGameTrace *pTrace);	// ClipRayToEntity
	virtual void vfunc3();
	virtual void vfunc4(Ray_t *pRay, unsigned int fMask, CTraceFilterNoCharacterCollide *pFilter, CGameTrace *pTrace);	// TraceRay
};
