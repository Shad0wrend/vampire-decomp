// CAI_StandoffGoal (RTTI .?AVCAI_StandoffGoal@@): standoff goal entity, derived from CAI_GoalEntity.
// The vtable slots past 133 are not modelled in CBaseEntity, so the overrides below are plain members.
#pragma once

#include "CAI_GoalEntity.h"

class CAI_StandoffGoal : public CAI_GoalEntity
{
public:
	char m_pad047c[0x484 - 0x47c];
	int m_Aggressiveness;	// 0x484

	void vfunc241(int a);	// slot 241 override: clamps the aggressiveness (valid 0..4, or 5) with a DevMsg, then CAI_GoalEntity::vfunc241(a)
	void vfunc243(int a);	// slot 243 override: the same aggressiveness check, then CAI_GoalEntity::sub_102cdb70(a)
};
