// CTriggerMultiple: the multi-fire trigger (the class that owns the OnTrigger output at +0x598, right behind
// CBaseTrigger). Only what matched code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerMultiple : public CBaseTrigger
{
public:
	void sub_101c68e0(CBaseEntity *pActivator);	// "CTriggerMultiple::ActivateMultiTrigger": nothing while the next think (+0x17c) lies after the current time; stores pActivator's handle at +0x53c (-1 for null), fires OnTrigger (+0x598) with the resolved activator and this; with a wait (+0x500) above 0 sets the think to the do-nothing function and the next think to now + wait, else clears the touch function (+0x1ec), schedules the next think in 0.1 s and sets the think to the remove function

	COutputEvent m_OnTrigger;	// 0x598
};
