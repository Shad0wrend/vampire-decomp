// CAI_StandoffGoal (RTTI .?AVCAI_StandoffGoal@@): standoff goal entity, derived from CAI_GoalEntity.
// The vtable slots past 133 are not modelled in CBaseEntity, so the overrides below are plain members.
#pragma once

#include "CAI_GoalEntity.h"
#include "CAI_StandoffBehavior.h"

class CAI_BaseNPC;

class CAI_StandoffGoal : public CAI_GoalEntity
{
public:
	char m_pad047c[0x484 - 0x47c];
	int m_Aggressiveness;	// 0x484
	CStandoffParams m_CustomParams;	// 0x488 (used by aggressiveness 5)
	int m_unk4a4;	// 0x4a4: overwrites the first dword of the parameter block handed to the behaviour

	void vfunc241(int a);	// slot 241 override: clamps the aggressiveness (valid 0..4, or 5) with a DevMsg, then CAI_GoalEntity::vfunc241(a)
	void vfunc243(int a);	// slot 243 override: the same aggressiveness check, then CAI_GoalEntity::sub_102cdb70(a)
	void vfunc244(CAI_BaseNPC *pActor);	// slot 244: like vfunc245 but sets the behaviour's flag at +0x19 and its byte at +0x1a from bit 0 of the byte at +0x204
	void vfunc245(CAI_BaseNPC *pActor);	// slot 245: finds the actor's CAI_StandoffBehavior (slots 456/457 list the behaviours), clears its flag at +0x19 and gives it the parameter block of the aggressiveness
};
