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

struct CDamageInfoBlob	// 0x4c bytes (19 dwords): the damage info of a queued damage event
{
	int m_data[19];
};

struct CDamageEvent_t	// 0x58 byte record of the queued damage events
{
	CBaseEntity *m_pEntity;
	int m_unused;
	CDamageInfoBlob m_info;	// 0x08
	int m_pad54;
};

class CCollisionEvent
{
public:
	virtual void vfunc0(void *pEvent);	// "CCollisionEvent::PreCollision": scope trace, copies the 32 byte event to +0x68, then slot 40 of both objects fills the records at +0x88 / +0x94 (second argument 0x30 further)

	// Slots 4, 6, 8 and 9, declared as plain members.
	void vfunc4(void *pObject1, void *pObject2, void *pData);	// "CCollisionEvent::EndTouch": scope trace, with both entities (slot 6 of the objects) set and the collision data queried (slots 1 / 0), the end touch is dispatched at once (sub_10030cb0) unless the byte at +0x13c is set, which goes to sub_10030f30 (queued) instead
	void vfunc6(void *pObject, void *pFluid);	// "CCollisionEvent::FluidEndTouch": scope trace, the entity of the object (slot 6) loses bit 19 of its flags at +0x268 and, when the time since its last fluid touch (DeltaTimeSinceLast) reaches a minimum, sub_10151150(pFluid, pObject, entity)
	void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
	void vfunc9(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectLeaveTrigger"

	int sub_10031270(int inflictor);	// "CCollisionEvent::FindDamageInflictor": index of the last 32-byte record (array at +0x100, count at +0x10c) starting with inflictor, or -1
	CFrictionEntry_t *sub_10030720(int key);	// "CCollisionEvent::FindFriction": scope trace, the entry of the 8 at +0x8 with this key, else the first free one, else null
	float sub_100309a0(int key);	// "CCollisionEvent::DeltaTimeSinceLast": scope trace, searches the (key, time) records of the vector at +0x128 from the back; found: curtime minus the stored time; else appends (key, curtime) and returns 0
	void sub_1002f900(CBaseEntity *pA, CBaseEntity *pB);	// "CCollisionEvent::FindOrAddPenetrateEvent": scope trace, searches the 20 byte records of m_penetrateEvents from the back for the pair of entity handles, appending (handles, curtime, 0) when absent; then stores curtime in the record's +0xc
	void sub_10031520();	// "CCollisionEvent::LevelShutdown": scope trace, releases every used friction entry
	void sub_10030ae0();	// "CCollisionEvent::UpdateFrictionSounds": scope trace, shuts down every friction entry that is set and older than curtime - 0.1
	void sub_10012544(CFrictionEntry_t *pEntry);	// releases a friction entry (stub of 0x100307f0)
	void sub_100307f0(CFrictionEntry_t *pEntry);	// "CCollisionEvent::ShutdownFriction": scope trace, destroys the friction snapshot (slot 9 of the physics interface at 0x1072c474) and clears the entry's value and key
	void sub_10031070(int a, void *pData, int pObject, char bFlag, void *pExtra1, void *pExtra2);	// "CCollisionEvent::AddDamageEvent" (stub 0x1000495d): scope trace, appends a 0x58 byte record
	void sub_10030d50();	// "CCollisionEvent::UpdateTouchEvents": scope trace, dispatches every queued touch record (0x24 bytes each, array at +0xd8, count at +0xe4): sub_10030ba0 for a start touch (record +8 is zero), else the end-touch dispatcher sub_10030cb0; then empties the queue
	void sub_10030ba0(void *a, void *b, void *pData1, void *pData2);	// "CCollisionEvent::DispatchStartTouch" (called through the stub at 0x10009485)
	void sub_10030cb0(void *a, void *b);	// "CCollisionEvent::DispatchEndTouch" (called through the stub at 0x1000f0bf)
	void sub_10030f30(void *a, void *b, int c, void *pData1, void *pData2);	// "CCollisionEvent::AddTouchEvent"-like (called through the stub at 0x1000a0a1)
	void sub_10030e40();	// "CCollisionEvent::UpdateDamageEvents": scope trace, hands every queued damage event (0x58 byte records, array at +0xec, count at +0xf8) to its entity (copy of the damage info), then empties the queue

	char m_pad0004[4];
	CFrictionEntry_t m_friction[8];	// 0x0008
	char m_pad0068[0xd8 - 0x68];
	char *m_pTouchEvents;	// 0x00d8: queued touch records of 0x24 bytes
	char m_pad00dc[0xe4 - 0xdc];
	int m_nTouchEvents;	// 0x00e4
	char m_pad00e8[4];
	CDamageEvent_t *m_pDamageEvents;	// 0x00ec
	char m_pad00f0[8];
	int m_nDamageEvents;	// 0x00f8
	char m_pad00fc[0x114 - 0xfc];
	CUtlVector20 m_penetrateEvents;	// 0x0114 (size at +0x120)
};
