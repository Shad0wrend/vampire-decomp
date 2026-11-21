// CUnknown1070b254: the engine trace object (pointer at 0x1070b254); slots 0 (PointContents), 2 (ClipRayToEntity) and 4 (TraceRay) are known.
#pragma once

struct Ray_t;
struct CGameTrace;
class CBaseEntity;
class CTraceFilterNoCharacterCollide;
class CTriggerTraceEnum;

class CUnknown1070b254
{
public:
	virtual int vfunc0(const float *pPoint, CBaseEntity **ppEntity);	// PointContents: the contents mask at the point
	virtual void vfunc1();
	virtual void vfunc2(Ray_t *pRay, unsigned int fMask, CBaseEntity *pEnt, CGameTrace *pTrace);	// ClipRayToEntity
	virtual void vfunc3();
	virtual void vfunc4(Ray_t *pRay, unsigned int fMask, CTraceFilterNoCharacterCollide *pFilter, CGameTrace *pTrace);	// TraceRay
	virtual void vfunc5(void *pCollide, const float *vecAbsStart, const float *vecAbsEnd, const float *vecAngles, unsigned int fMask, void *pFilter, CGameTrace *pTrace);	// SweepCollideable
	virtual void vfunc6();
	virtual void vfunc7(Ray_t *pRay, int bTriggerOnly, CTriggerTraceEnum *pEnum);	// EnumerateEntities
};

extern CUnknown1070b254 *g_104a582c;	// the engine trace interface (g_pEngineTrace)
