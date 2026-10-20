// CPhysicsPushedEntities: bookkeeping of the entities moved by a pusher. The vector of pusher records
// (0x10 bytes each, entity pointer first) starts at +0 and the vector of moved-entity records (0x68 bytes each)
// at +0x14 (data pointer, allocation count, grow size, then the size at +0x20).
// Only what decompiled code needs.
#pragma once

class CBaseEntity;

struct MovedEntity_t
{
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecStartAbsOrigin[3];	// 0x04
	char m_pad10[0x5c - 0x10];	// 0x10: the trace of the blocking hit
	CBaseEntity *m_pBlocker;	// 0x5c
	char m_pad60[0x68 - 0x60];
};

struct PusherInfo_t
{
	CBaseEntity *m_pEntity;	// 0x00
	char m_pad04[0x10 - 4];
};

struct CPusherVec
{
	PusherInfo_t *m_pMemory;	// 0x00
	int m_nAllocationCount;	// 0x04
	int m_nGrowSize;	// 0x08
	int m_Size;	// 0x0c
	PusherInfo_t *m_pElements;	// 0x10
};

struct CMovedVec
{
	MovedEntity_t *m_pMemory;	// 0x14
	int m_nAllocationCount;	// 0x18
	int m_nGrowSize;	// 0x1c
	int m_Size;	// 0x20
	MovedEntity_t *m_pElements;	// 0x24

	int Count() const { return m_Size; }
	MovedEntity_t &operator[](int i) { return m_pMemory[i]; }
};

class CPhysicsPushedEntities
{
public:
	CPusherVec m_rgPusher;	// 0x00
	CMovedVec m_rgMoved;	// 0x14
	int m_nBlockingIndex;	// 0x28: the moved entity that was blocked

	CPhysicsPushedEntities();	// scope trace; both vectors preallocated (8 pusher records, 32 moved records)
	void sub_10036ef0();	// "CPhysicsPushedEntities::RestoreEntities": scope trace, then SetAbsOrigin(start origin) (slot 216) on every moved entity, last to first
	void sub_10035f00(int *pHandles);	// "CPhysicsPushedEntities::UnlinkPusherList": scope trace, then a handle per pusher (last to first) from the global at 0x1070b24c, keyed by the short at entity+0x2b6
	void sub_10035fd0(int *pHandles);	// "CPhysicsPushedEntities::RelinkPusherList": same walk as UnlinkPusherList, other slot (9) of the global at 0x1070b24c
	void sub_10036b10();	// "CPhysicsPushedEntities::FinishPush": scope trace, then PhysicsTouchTriggers + slot 232(0) on every pusher, last to first
	CBaseEntity *sub_10036e50();	// "CPhysicsPushedEntities::RegisterBlockage": scope trace, lets the blocked entity record the impact with its blocker (PhysicsImpact) and returns the blocked entity
	bool sub_10036270(MovedEntity_t *pMoved, const float *pMove, int a);	// per-entity push check (called through the stub at 0x100046bf); true when the entity could be moved
	bool sub_10036a20(const float *pMove);	// "CPhysicsPushedEntities::SpeculativelyCheckPush": scope trace, clears the blocking index, then checks every moved entity last to first; false (and the blocking index set) at the first one that is blocked
	void sub_10036d40(char bFlag, int a);	// scope trace "CPhysicsPushedEntities::FinishPush" (the string names the per-push variant): sub_10036b10(), then on every moved entity, last to first: PhysicsTouchTriggers(&start origin), slot 232(0), PhysicsImpact(blocker, trace) when it has a blocker and, when bFlag is set, sub_10036bd0(entity, a)
	void sub_10036bd0(CBaseEntity *pEnt, int a);	// called through the stub at 0x10004be7
};
