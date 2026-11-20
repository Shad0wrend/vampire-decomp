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

	CTriggerProximityHandle() : m_Index(0xffffffff) {}

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
	float m_flMeasure05a0;	// 0x5a0: the measured distance, 32 when it was never set
	int m_i05a4;	// 0x5a4
	COutputEvent m_out05a8;	// 0x5a8

	CTriggerProximity() {}
	virtual CBaseEntity *vfunc5(unsigned int flags);	// slot 5: the scalar deleting destructor (0x101cc140)
	void *operator new(unsigned int size)	// the game's entity allocator (stub 0x1000db89)
	{
		extern void *sub_100aa720(int size);
		return sub_100aa720(size);
	}

	virtual void vfunc113();	// "CTriggerProximity::Activate": the base activation, finds the measure target by name (stores its handle, -1 when none) and warns "TriggerProximity - Missing measure target or measure target with no origin!" unless it resolves to a live entity with an edict
	void vfunc174(CBaseEntity *pOther);	// slot 174 "CTriggerProximity::StartTouch": the base trigger's StartTouch, and when the entity passes the trigger filters counts it in (+0x5a4) and schedules the think (stub 0x1000ffbf) stamped with the current time
	void vfunc176(CBaseEntity *pOther);	// slot 176 \"CTriggerProximity::EndTouch\": the base trigger's EndTouch, and when the entity passed the trigger filters counts it out; at zero calls sub_100ac4e0(0, 0, 0) and clears the next think time
	void sub_100ac4e0(int a, int b, int c);	// CBaseEntity worker (stub 0x10007fe5), called directly
	void vfunc103();	// slot 103: sets the distance to 32 while it is 0, then sub_101c5080() and the free function sub_101cf600(this)
	void sub_101c5080();	// stub 0x1000dfd0, called directly
	void sub_101ca0c0();	// the think function (stub 0x1000ffbf): measures the distance from the measure target to every entity touching the trigger, keeps the closest, and fires m_out05a8 with closest/radius when it is within the measured distance; clears the think when there is no measure target
	void sub_100113a6();	// CBaseTrigger::vfunc113 (Activate), called directly
public:
    virtual datamap_t * vfunc82();
};
