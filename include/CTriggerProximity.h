// CTriggerProximity (RTTI .?AVCTriggerProximity@@): trigger that measures the distance to a named entity.
// Derived from CBaseTrigger (which ends at +0x598). Only what decompiled code needs.
#pragma once

#include "CBaseTrigger.h"

class CTriggerProximity : public CBaseTrigger
{
public:
	unsigned int m_hMeasureTarget;	// 0x598: handle of the entity named by m_pszMeasureTarget
	const char *m_pszMeasureTarget;	// 0x59c

	virtual void vfunc113();	// "CTriggerProximity::Activate": the base activation, finds the measure target by name (stores its handle, -1 when none) and warns "TriggerProximity - Missing measure target or measure target with no origin!" unless it resolves to a live entity with an edict
	void sub_100113a6();	// CBaseTrigger::vfunc113 (Activate), called directly
};
