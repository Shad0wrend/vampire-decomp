// CPhysicsPushedEntities: bookkeeping of the entities moved by a pusher. The vector of moved-entity records
// (0x68 bytes each) starts at +0x14 (data pointer, allocation count, grow size, then the size at +0x20).
// Only what decompiled code needs.
#pragma once

class CBaseEntity;

struct MovedEntity_t
{
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecStartAbsOrigin[3];	// 0x04
	char m_pad10[0x68 - 0x10];
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
	char m_pad0000[0x14];
	CMovedVec m_rgMoved;	// 0x14

	void sub_10036ef0();	// "CPhysicsPushedEntities::RestoreEntities": scope trace, then SetAbsOrigin(start origin) (slot 216) on every moved entity, last to first
};
