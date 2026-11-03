// CPhysicsPushedEntities: bookkeeping of the entities moved by a pusher. The vector of pusher records
// (0x10 bytes each, entity pointer first) starts at +0 and the vector of moved-entity records (0x68 bytes each)
// at +0x14 (data pointer, allocation count, grow size, then the size at +0x20).
// Only what decompiled code needs.
#pragma once
#include "Vector.h"

class CBaseEntity;

struct MovedEntity_t
{
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecStartAbsOrigin[3];	// 0x04
	char m_pad10[0x5c - 0x10];	// 0x10: the trace of the blocking hit
	CBaseEntity *m_pBlocker;	// 0x5c
	char m_pad60[0x68 - 0x60];

	void sub_1003c3a0();	// the element constructor (stub 0x1000da30)
};

struct PusherInfo_t
{
	CBaseEntity *m_pEntity;	// 0x00
	Vector m_vecStartAbsOrigin;	// 0x04
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
	void sub_1003c3c0(int num);	// CUtlMemory::Grow (stub 0x100155b4): makes room for num more records
	void sub_1003c330(int index, int num);	// CUtlVector::ShiftElementsRight (stub 0x10003ada)
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
	void sub_1000497b(CBaseEntity *pParent);	// the stub at 0x1000497b for sub_100379e0, called directly (the recursion goes through it)
	void sub_100379e0(CBaseEntity *pParent);	// "CPhysicsPushedEntities::SetupAllInHierarchy": scope trace, VPROF scope; appends a pusher record (entity, start absolute origin) for pParent and recurses over its move children (first child handle +0x260, next peer handle +0x264)
	void sub_10035df0(CBaseEntity *pEntity);	// "CPhysicsPushedEntities::AddEntity": scope trace, appends a moved-entity record for pEntity with its current absolute origin as the start origin
	bool sub_10036900(const float *pRotation, const float *pOrigin);	// "CPhysicsPushedEntities::SpeculativelyCheckRotPush": scope trace, clears the blocking index, then computes the rotated move of every moved entity (sub_100360a0) and checks it, last to first; false (and the blocking index set) at the first one that is blocked
	CBaseEntity *sub_10037e90(CBaseEntity *pRoot, float flRotation);	// "CPhysicsPushedEntities::PerformRotatePush": scope trace, VPROF scope; SetupAllInHierarchy(root), computes the rotated moves, checks them; on a block restores the entities and returns the blocked one, else finishes the push and returns 0
	void sub_10037c10(CBaseEntity *pRoot, const float *pRotation, float *pOrigin);	// stub 0x10002c70: computes the rotation pivot / origin for the push
	void sub_10036fb0();	// stub 0x100132b4
	CBaseEntity *sub_10038400(CBaseEntity *pRoot, const float *pMove);	// "CPhysicsPushedEntities::PerformLinearPush": scope trace, VPROF scope; SetupAllInHierarchy(root), computes the moves, checks them; on a block restores the entities and returns the blocked one, else finishes the push and returns 0
	void sub_10038180(CBaseEntity *pRoot, const float *pMove, float *pOut);	// stub 0x1000aa8d
	void sub_100360a0(CBaseEntity *pEntity, const float *pRotation, float *pMove, const float *pOrigin);	// computes the move of the entity for the rotation (stub 0x1001386d)
};
