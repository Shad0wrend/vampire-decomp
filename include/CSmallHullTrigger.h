// CSmallHullTrigger (RTTI .?AVCSmallHullTrigger@@), primary vtable 0x10482a8c, 251 slots.
// Only the methods that decompiled code needs are declared; the slot numbers follow CBaseEntity.
#pragma once

#include "CBaseTrigger.h"

class CSmallHullTrigger : public CBaseTrigger
{
public:
	void vfunc176(CBaseEntity *pOther);	// slot 176 "CSmallHullTrigger::EndTouch": the base EndTouch, then when the entity is not touching anymore (slot 116 false) forwards pOther to slot 336 of the object at +0x9c (when set)
public:
    virtual datamap_t * vfunc82();
    void sub_101c5080();	// as in CTriggerPlayerActivityLevel (transplant)
    void vfunc103();	// as in CTriggerPlayerActivityLevel (transplant)
    virtual CBaseEntity *vfunc5(unsigned int flags);	// as in CTriggerElectricBugaloo (transplant)
};
