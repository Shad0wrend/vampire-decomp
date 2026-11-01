// CTriggerMultiple: the multi-fire trigger (the class that owns the OnTrigger output at +0x598, right behind
// CBaseTrigger). Only what matched code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerMultiple : public CBaseTrigger
{
public:
	void vfunc103();	// slot 103 "CTriggerMultiple::Spawn": CBaseEntity::vfunc103, then sub_101c5080 (stub 0x1000dfd0), a wait (+0x500) of 0 becomes 0.2 s, and the touch function (+0x1ec) is set to 0x10015212
	void sub_101c5080();	// stub 0x1000dfd0, called directly after the base spawn
	void sub_101c68e0(CBaseEntity *pActivator);
	void sub_101c68b0(CBaseEntity *pOther);	// 0x101c68b0: when PassesTriggerFilters(pOther) (CBaseTrigger::sub_101c5460) fires the activation (sub_101c68e0)	// "CTriggerMultiple::ActivateMultiTrigger": nothing while the next think (+0x17c) lies after the current time; stores pActivator's handle at +0x53c (-1 for null), fires OnTrigger (+0x598) with the resolved activator and this; with a wait (+0x500) above 0 sets the think to the do-nothing function and the next think to now + wait, else clears the touch function (+0x1ec), schedules the next think in 0.1 s and sets the think to the remove function

	COutputEvent m_OnTrigger;	// 0x598
public:
    virtual datamap_t * vfunc82();
};
