// CCollisionEvent: physics collision event handler (vtable slots not modelled except slot 0; plain members for direct callers).
#pragma once

#include "CUtlVector20.h"
#include "CUtlMemory20.h"
#include "UtlMem.h"
#include "IPhysicsCollisionEvent.h"
#include "IPhysicsCollisionSolver.h"

class CBaseEntity;
struct gamevcollisionevent_t;

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

struct CPenetrateEvent_t	// 20 byte record of the penetrating entity pairs
{
	unsigned int m_hEntity0;
	unsigned int m_hEntity1;
	float m_flLastTime;	// 0x08: when the pair was last reported
	float m_flTime0c;
	int m_nReported;	// 0x10
};

void __stdcall sub_1000d350(void *p, int size, int count, void *ctor);	// the game's vector constructor iterator
void sub_1000c95a();	// empty element constructor (stub of 0x1002f060)

// The two 12 byte elements at +0xb8, constructed by the vector constructor iterator with an empty element constructor.
struct CCollisionEventRecords
{
	int m[6];

	CCollisionEventRecords() { sub_1000d350(m, 12, 2, (void *)sub_1000c95a); }
};

// A vector of five zeroed dwords (memory, allocation count, grow size, size, element pointer) as its inline constructor leaves it.
struct CCollisionEventVec5
{
	void *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	void *m_pElements;

	int Count() const { return m_size; }
	void RemoveAll() { for (int i = m_size; --i >= 0; ) ; m_size = 0; }

	CCollisionEventVec5()
	{
		m_pMemory = 0;
		m_allocationCount = 0;
		m_growSize = 0;
		m_size = 0;
		m_pElements = 0;
	}
};

// Not yet modelled dwords of CCollisionEvent that its constructor zeroes.
struct CCollisionEventZero1
{
	int m[1];
	CCollisionEventZero1() { m[0] = 0; }
};

struct CCollisionEventZero2
{
	int m[2];
	CCollisionEventZero2() { m[0] = 0; m[1] = 0; }
};

// The vector at +0x114 as the constructor builds it (memory constructor, size 0, element pointer).
struct CCollisionEventPenetrateVec : CUtlVector20
{
	CCollisionEventPenetrateVec()
	{
		((CUtlMemory20 *)this)->sub_10032a60(0, 0);
		m_size = 0;
		m_pElements = m_pMemory;
	}
};

// The vector of (key, time) records at +0x128.
struct CCollisionEventTimeVec
{
	UtlMem m_mem;
	int m_size;
	int *m_pElements;

	CCollisionEventTimeVec()
	{
		m_mem.sub_10032ab0(0, 0);
		m_size = 0;
		m_pElements = m_mem.m_pMemory;
	}
};

#ifdef PCD_INITIALIZERS	// the element types of the queues, as the initializer unit sees them
#include "utlvector.h"
struct CTouchEvent_t	// 0x24 byte queued touch record
{
	char m_data[0x24];
};
struct CDamageInflictor_t	// 32 byte record (inflictor first)
{
	char m_data[0x20];
};
struct CTimeEvent_t	// (key, time)
{
	int m_key;
	float m_flTime;
};
// The game's destroy keeps some of the vectors' Purge / RemoveAll calls out of line and opens others in place: VC6's
// per-unit inline budget, which a unit holding only this global spends differently (no element type or order changes
// it). For these element types only, the vectors' destructors spell the game's sequence: the out-of-line pieces are
// called through __fastcall declarations of the game's functions by placeholder name (ecx = the object, as the member call), the memory's
// own destructor is empty, and the in-place purge is written out.
void __fastcall sub_10032f50(CUtlMemory<CTimeEvent_t> *pMemory);	// CUtlMemory<CTimeEvent_t>::Purge 0x10032f50
void __fastcall sub_10032ec0(CUtlMemory<CPenetrateEvent_t> *pMemory);	// 0x10032ec0
void __fastcall sub_10032d70(CUtlMemory<CDamageInflictor_t> *pMemory);	// 0x10032d70
void __fastcall sub_10032c20(CUtlMemory<CDamageEvent_t> *pMemory);	// 0x10032c20
void __fastcall sub_10032b70(CUtlMemory<CTouchEvent_t> *pMemory);	// 0x10032b70
void __fastcall sub_10032a40(CUtlVector<CDamageEvent_t> *pVector);	// CUtlVector<CDamageEvent_t>::RemoveAll 0x10032a40
void __fastcall sub_10032a20(CUtlVector<CTouchEvent_t> *pVector);	// 0x10032a20
#define PCD_PURGE_IN_PLACE 	if (m_Memory.m_nGrowSize != -1) { 		if (m_Memory.m_pMemory) { 			Plat_Free((void *)m_Memory.m_pMemory); 			m_Memory.m_pMemory = 0; 		} 		m_Memory.m_nAllocationCount = 0; 	}
template <> __forceinline CUtlMemory<CTimeEvent_t>::~CUtlMemory() {}
template <> __forceinline CUtlMemory<CPenetrateEvent_t>::~CUtlMemory() {}
template <> __forceinline CUtlMemory<CDamageInflictor_t>::~CUtlMemory() {}
template <> __forceinline CUtlMemory<CDamageEvent_t>::~CUtlMemory() {}
template <> __forceinline CUtlMemory<CTouchEvent_t>::~CUtlMemory() {}
template <> __forceinline CUtlVector<CTimeEvent_t>::~CUtlVector()
{
	m_Size = 0;
	sub_10032f50(&m_Memory);
	m_pElements = m_Memory.m_pMemory;
	sub_10032f50(&m_Memory);
}
template <> __forceinline CUtlVector<CPenetrateEvent_t>::~CUtlVector()
{
	m_Size = 0;
	sub_10032ec0(&m_Memory);
	m_pElements = m_Memory.m_pMemory;
	sub_10032ec0(&m_Memory);
}
template <> __forceinline CUtlVector<CDamageInflictor_t>::~CUtlVector()
{
	m_Size = 0;
	sub_10032d70(&m_Memory);
	m_pElements = m_Memory.m_pMemory;
	PCD_PURGE_IN_PLACE
}
template <> __forceinline CUtlVector<CDamageEvent_t>::~CUtlVector()
{
	sub_10032a40(this);
	sub_10032c20(&m_Memory);
	m_pElements = m_Memory.m_pMemory;
	PCD_PURGE_IN_PLACE
}
template <> __forceinline CUtlVector<CTouchEvent_t>::~CUtlVector()
{
	sub_10032a20(this);
	sub_10032b70(&m_Memory);
	m_pElements = m_Memory.m_pMemory;
	PCD_PURGE_IN_PLACE
}
#undef PCD_PURGE_IN_PLACE
#endif

class CCollisionEvent;

// The IPhysicsCollisionSolver sub-object at +4 of CCollisionEvent (its methods get this + 4 as ECX).
struct CCollisionEventSolver
{
	int sub_1002f1e0(void *pObject0, void *pObject1, CBaseEntity *pEntity0, CBaseEntity *pEntity1);
	int sub_1002fb00(void *pObject0, void *pObject1, CBaseEntity *pEntity0, CBaseEntity *pEntity1, float flDeltaTime);	// "CCollisionEvent::ShouldSolvePenetration": scope trace, orders the entity pair, finds its penetration record and, at most every 0.x seconds per pair, flags it and (without the cvar override and with the console variable set) reports both entities (sub_1002fc30 with 10.0f); always 1

	CCollisionEvent *Event() { return (CCollisionEvent *)((char *)this - 4); }
};

class CCollisionEvent : public IPhysicsCollisionEvent, public IPhysicsCollisionSolver
{
public:
	CCollisionEvent();

	virtual void vfunc0(void *pEvent);	// "CCollisionEvent::PreCollision": scope trace, copies the 32 byte event to +0x68, then slot 40 of both objects fills the records at +0x88 / +0x94 (second argument 0x30 further)
	virtual void vfunc1(void *pEvent);	// "CCollisionEvent::PostCollision": scope trace, the post velocities (slot 40 of both objects into +0xa0 / +0xac) and the entities (slot 6) into +0xd0 / +0xd4, notes the shadow / gamedata flags, then starts or ends the touches of the colliding pair
	virtual void vfunc2(void *pObject, float energy, int surfaceProps, int surfacePropsHit, void *pData);	// "CCollisionEvent::Friction": scope trace (no entity name), the velocity of the object at the contact point reversed and normalised, effects for hard hits on concrete-like materials, then the entity's slot 231 (VPhysicsFriction)

	// Slots 3, 4, 6, 8 and 9.
	virtual void vfunc3(void *pObject1, void *pObject2, void *pData);	// "CCollisionEvent::StartTouch": scope trace, with both entities (slot 6 of the objects) set and the collision data queried (slots 1 / 0), the start touch is dispatched at once (sub_10030ba0) unless the byte at +0x13c is set, which goes to sub_10030f30 (queued) instead
	virtual void vfunc4(void *pObject1, void *pObject2, void *pData);	// "CCollisionEvent::EndTouch": scope trace, with both entities (slot 6 of the objects) set and the collision data queried (slots 1 / 0), the end touch is dispatched at once (sub_10030cb0) unless the byte at +0x13c is set, which goes to sub_10030f30 (queued) instead
	virtual void vfunc5(void *pObject, void *pFluid);
	virtual void vfunc6(void *pObject, void *pFluid);	// "CCollisionEvent::FluidEndTouch": scope trace, the entity of the object (slot 6) loses bit 19 of its flags at +0x268 and, when the time since its last fluid touch (DeltaTimeSinceLast) reaches a minimum, sub_10151150(pFluid, pObject, entity)
	virtual void vfunc7();
	virtual void vfunc8(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectEnterTrigger"
	virtual void vfunc9(void *pObject1, void *pObject2);	// "CCollisionEvent::ObjectLeaveTrigger"

	// The IPhysicsCollisionSolver slots (the second vtable, at +4).
	virtual void solverfunc0();
	virtual void solverfunc1();
	virtual void solverfunc2();
	virtual void solverfunc3();
	virtual void solverfunc4(void *pObject1, void *pObject2);	// the game's 0x1002f100 (matched as sub_1002f100)

	int sub_10031270(int inflictor);	// "CCollisionEvent::FindDamageInflictor": index of the last 32-byte record (array at +0x100, count at +0x10c) starting with inflictor, or -1
	CFrictionEntry_t *sub_10030720(int key);	// "CCollisionEvent::FindFriction": scope trace, the entry of the 8 at +0x8 with this key, else the first free one, else null
	float sub_100309a0(int key);	// "CCollisionEvent::DeltaTimeSinceLast": scope trace, searches the (key, time) records of the vector at +0x128 from the back; found: curtime minus the stored time; else appends (key, curtime) and returns 0
	CPenetrateEvent_t *sub_1002f900(CBaseEntity *pA, CBaseEntity *pB);	// "CCollisionEvent::FindOrAddPenetrateEvent": scope trace, searches the 20 byte records of m_penetrateEvents from the back for the pair of entity handles, appending (handles, curtime, 0) when absent; then stores curtime in the record's +0xc; returns the record
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
	void sub_10030910();	// "CCollisionEvent::FrameUpdate": scope trace, UpdateFrictionSounds, UpdateTouchEvents, then UpdateDamageEvents (called through the stub at 0x10005a42)

	CFrictionEntry_t m_friction[8];	// 0x0008
	char m_event68[0x18];	// 0x0068: the copy of the event (PreCollision), passed on to the entities' slots 228 / 230
	float m_flSpeed80;	// 0x0080: the collision speed
	int m_pInternalData84;	// 0x0084
	char m_pad0088[0xa0 - 0x88];
	float m_postVelocity[2][3];	// 0x00a0: the post velocities (slot 40 of the objects)
	CCollisionEventRecords m_records;	// 0x00b8
	CBaseEntity *m_pEntities[2];	// 0x00d0: the entities of the event's objects
#ifdef PCD_INITIALIZERS	// the initializer unit: the global 0x106b86d8 is destroyed through the vectors' destructors
	CUtlVector<CTouchEvent_t> m_touchEvents;	// 0x00d8
	CUtlVector<CDamageEvent_t> m_damageEvents;	// 0x00ec
	CUtlVector<CDamageInflictor_t> m_damageInflictors;	// 0x0100
	CUtlVector<CPenetrateEvent_t> m_penetrateEvents;	// 0x0114
	CUtlVector<CTimeEvent_t> m_timeEvents;	// 0x0128
#else
	CCollisionEventVec5 m_touchVec;	// 0x00d8: queued touch records of 0x24 bytes (memory +0xd8, size +0xe4)
	CCollisionEventVec5 m_damageVec;	// 0x00ec: queued damage events (memory +0xec, size +0xf8)
	CCollisionEventVec5 m_vec0100;	// 0x0100
	CCollisionEventPenetrateVec m_penetrateEvents;	// 0x0114 (size at +0x120)
	CCollisionEventTimeVec m_timeEvents;	// 0x0128
#endif
};

// The queue fields as the matched functions name them.
#define m_pTouchEvents (*(char **)&m_touchVec.m_pMemory)
#define m_nTouchEvents m_touchVec.m_size
#define m_pDamageEvents (*(CDamageEvent_t **)&m_damageVec.m_pMemory)
#define m_nDamageEvents m_damageVec.m_size
