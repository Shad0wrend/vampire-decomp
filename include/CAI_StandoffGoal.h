// CAI_StandoffGoal (RTTI .?AVCAI_StandoffGoal@@): standoff goal entity, derived from CAI_GoalEntity.
// The vtable slots past 133 are not modelled in CBaseEntity, so the overrides below are plain members.
#pragma once

#include "CAI_GoalEntity.h"
#include "CAI_StandoffBehavior.h"

class CAI_BaseNPC;
struct inputdata_t;

class CAI_StandoffGoal : public CAI_GoalEntity
{
public:
	char m_pad047c[4];
	unsigned int m_flags480;	// 0x480: bit 0 = the goal is active (asked before slot 243 is called)
	int m_Aggressiveness;	// 0x484
	CStandoffParams m_CustomParams;	// 0x488 (used by aggressiveness 5)
	int m_unk4a4;	// 0x4a4: overwrites the first dword of the parameter block handed to the behaviour

	void vfunc180();	// slot 180 override: when the flags at +0x480 have bit 0, calls slot 243 with a default inputdata_t, then CBaseEntity::vfunc180
	void vfunc103();	// slot 103: registers the goal's callback (sub_102cd310) with CBaseEntity::sub_100ac4e0, then sets the float at +0x17c to the global's +0xc field plus 0.01
	void vfunc241(int a);	// slot 241 override: clamps the aggressiveness (valid 0..4, or 5) with a DevMsg, then CAI_GoalEntity::vfunc241(a)
	void vfunc242(int a);	// slot 242 (0x102cd740, vtable stub 0x1001004b): prunes the actors (sub_102cd3b0), rebuilds the actor-handle tree (CUtlRBTree<CRBTree12Entry_102cfaf0,unsigned short>, comparator sub_102ce100) from m_pActors / m_nActors, runs sub_102cd4a0, then tells every actor through slot 244 or slot 245 (vtable +0x3d0 / +0x3d4)
	void vfunc243(int a);	// slot 243 override: the same aggressiveness check, then CAI_GoalEntity::sub_102cdb70(a)
	void vfunc244(CAI_BaseNPC *pActor);	// slot 244: like vfunc245 but sets the behaviour's flag at +0x19 and its byte at +0x1a from bit 0 of the byte at +0x204
	void vfunc245(CAI_BaseNPC *pActor);	// slot 245: finds the actor's CAI_StandoffBehavior (slots 456/457 list the behaviours), clears its flag at +0x19 and gives it the parameter block of the aggressiveness
	void sub_102c8280(inputdata_t *pInput);	// input "SetAggressiveness": takes the integer of the input (0 unless it is one), clamps it like vfunc241, refreshes the actors like CAI_GoalEntity::vfunc241 and hands every actor's standoff behaviour the parameter block
public:
    virtual datamap_t * vfunc82();
    CAI_StandoffGoal *vfunc5(unsigned int flags);	// as in CNPC_VMingXiao (transplant)
    void sub_1009df20();	// as in CNPC_VMingXiao (transplant)
};
