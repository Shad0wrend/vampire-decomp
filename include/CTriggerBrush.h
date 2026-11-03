// CTriggerBrush (RTTI .?AVCTriggerBrush@@): a brush entity that only triggers; bases: CBaseEntity at +0x0.
#pragma once
#include "COutputEvent.h"

#include "CBaseEntity.h"

class CTriggerBrush : public CBaseEntity
{
public:
	virtual void vfunc103();	// slot 103 "CTriggerBrush::Spawn": the movedir setup when the angles are not zero, inlined SetSolid(1) and AddSolidFlags(8) of the collision property at +0x270 (both with scope traces), SetMoveType(0, 0), SetModel(GetModelName() or ""), and flag 0x40 of +0x19c unless the global convar at 0x1072cfcc holds a value
	CTriggerBrush *vfunc5(unsigned int flags);	// slot 5: scalar deleting destructor
public:
    virtual datamap_t * vfunc82();
    char m_pad0004[0x450 - sizeof(CBaseEntity)];
    COutputEvent m_Output450;
    COutputEvent m_Output468;
    COutputEvent m_Output480;
    unsigned int m_nFilter498;
    int m_n49c;
    void vfunc174(CBaseEntity *pOther);
    void vfunc176(CBaseEntity *pOther);
    void vfunc173(CBaseEntity *pActivator, CBaseEntity *pCaller, int useType, int value);
};
