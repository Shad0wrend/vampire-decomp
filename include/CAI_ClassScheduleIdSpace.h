// CAI_ClassScheduleIdSpace.h: an NPC class's schedule, task and condition id spaces (dlls/ai_namespaces.h, 2003
// and 2004); every DEFINE_CUSTOM_AI class has a static gm_ClassScheduleIdSpace, CAI_BaseNPC's is the root.
#ifndef CAI_CLASSSCHEDULEIDSPACE_H
#define CAI_CLASSSCHEDULEIDSPACE_H
#include "CAI_LocalIdSpace.h"

class CAI_ClassScheduleIdSpace
{
public:
	CAI_ClassScheduleIdSpace(bool fIsRoot = false)
	 :	m_ScheduleIds(fIsRoot),
		m_TaskIds(fIsRoot),
		m_ConditionIds(fIsRoot)
	{
	}

	CAI_LocalIdSpace m_ScheduleIds;
	CAI_LocalIdSpace m_TaskIds;
	CAI_LocalIdSpace m_ConditionIds;
};

#endif
