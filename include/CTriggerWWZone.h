// CTriggerWWZone (RTTI .?AVCTriggerWWZone@@): trigger zone; CBaseTrigger / CBaseToggle are not modelled, so the
// entity base is used directly. A vector of entity handles lives at +0x598 (data pointer; allocation count,
// grow size and the element count at +0x5a4 follow). Only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"

class CTriggerWWZone : public CBaseEntity
{
public:
	char m_pad03e0[0x598 - 0x3e0];
	unsigned int *m_pHandles;	// 0x598
	int m_nHandleAlloc;	// 0x59c
	int m_nHandleGrow;	// 0x5a0
	int m_nHandles;	// 0x5a4

	void sub_103daf10();	// calls slot 77 on every valid entity of the handle list
	virtual void vfunc119();	// "CTriggerWWZone::Kill": scope trace (entity name), disables the trigger (CBaseTrigger::sub_101c4dd0), sets the think function to the stub at 0x10015b68 and the next think to curtime + 1.0f
	virtual void vfunc113();	// "CTriggerWWZone::Activate": scope trace (entity name), the base activation, then sub_1000dfd0
	void sub_100113a6();	// CBaseTrigger::vfunc113 (Activate), called directly
	void sub_1000dfd0();	// the zone's own activation step (stub of 0x101c5080)
};
