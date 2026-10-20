// CCollisionEvent: physics collision event handler (vtable slots not modelled except slot 0; plain members for direct callers).
#pragma once

#include "CUtlVector20.h"

class CBaseEntity;

struct CFrictionEntry_t
{
	int m_value;
	int m_key;	// 0 when the entry is free
	int m_extra;
};

class CCollisionEvent
{
public:
	virtual void vfunc0(void *pEvent);	// "CCollisionEvent::PreCollision": scope trace, copies the 32 byte event to +0x68, then slot 40 of both objects fills the records at +0x88 / +0x94 (second argument 0x30 further)

	// Slots 8 and 9, declared as plain members.
	void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
	void vfunc9(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectLeaveTrigger"

	int sub_10031270(int inflictor);	// "CCollisionEvent::FindDamageInflictor": index of the last 32-byte record (array at +0x100, count at +0x10c) starting with inflictor, or -1
	CFrictionEntry_t *sub_10030720(int key);	// "CCollisionEvent::FindFriction": scope trace, the entry of the 8 at +0x8 with this key, else the first free one, else null
	float sub_100309a0(int key);	// "CCollisionEvent::DeltaTimeSinceLast": scope trace, searches the (key, time) records of the vector at +0x128 from the back; found: curtime minus the stored time; else appends (key, curtime) and returns 0
	void sub_1002f900(CBaseEntity *pA, CBaseEntity *pB);	// "CCollisionEvent::FindOrAddPenetrateEvent": scope trace, searches the 20 byte records of m_penetrateEvents from the back for the pair of entity handles, appending (handles, curtime, 0) when absent; then stores curtime in the record's +0xc
	void sub_10031520();	// "CCollisionEvent::LevelShutdown": scope trace, releases every used friction entry
	void sub_10012544(CFrictionEntry_t *pEntry);	// releases a friction entry (stub of 0x100307f0)
	void sub_100307f0(CFrictionEntry_t *pEntry);	// "CCollisionEvent::ShutdownFriction": scope trace, destroys the friction snapshot (slot 9 of the physics interface at 0x1072c474) and clears the entry's value and key

	char m_pad0004[4];
	CFrictionEntry_t m_friction[8];	// 0x0008
	char m_pad0068[0x114 - 0x68];
	CUtlVector20 m_penetrateEvents;	// 0x0114 (size at +0x120)
};
