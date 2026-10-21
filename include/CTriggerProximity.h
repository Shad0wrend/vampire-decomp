// CTriggerProximity (RTTI .?AVCTriggerProximity@@): trigger that measures the distance to a named entity.
// Derived from CBaseTrigger (which ends at +0x598). Only what decompiled code needs.
#pragma once

#include "CBaseTrigger.h"
#include "CGlobalEntityList.h"

extern CGlobalEntityList *g_10566458;

struct CTriggerProximityEntity	// what the measure target handle resolves to: only its edict is read
{
	char m_pad0000[0x2e0];
	int m_pEdict;	// 0x2e0
};

struct CTriggerProximityHandle	// the entity handle (EHANDLE) of the measure target
{
	unsigned int m_Index;

	bool IsValid() const
	{
		if (m_Index == 0xffffffff)
			return false;
		CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
		return pSlot->m_Serial == (int)(m_Index >> 13) && pSlot->m_pEntity != 0;
	}

	CTriggerProximityEntity *Get() const
	{
		if (m_Index != 0xffffffff) {
			CGlobalEntityList_Slot *pSlot = &g_10566458->m_Slots[m_Index & 0x1fff];
			if (pSlot->m_Serial == (int)(m_Index >> 13))
				return (CTriggerProximityEntity *)pSlot->m_pEntity;
		}
		return 0;
	}
};

class CTriggerProximity : public CBaseTrigger
{
public:
	CTriggerProximityHandle m_hMeasureTarget;	// 0x598: handle of the entity named by m_pszMeasureTarget
	const char *m_pszMeasureTarget;	// 0x59c

	virtual void vfunc113();	// "CTriggerProximity::Activate": the base activation, finds the measure target by name (stores its handle, -1 when none) and warns "TriggerProximity - Missing measure target or measure target with no origin!" unless it resolves to a live entity with an edict
	void sub_100113a6();	// CBaseTrigger::vfunc113 (Activate), called directly
};
