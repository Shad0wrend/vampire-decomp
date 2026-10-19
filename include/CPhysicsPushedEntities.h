// CPhysicsPushedEntities: bookkeeping of the entities moved by a pusher. The vector of moved-entity records
// (0x68 bytes each) has its data pointer at +0x14 and its size at +0x20. Only what decompiled code needs.
#pragma once

class CBaseEntity;

struct MovedEntity_t
{
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecStartAbsOrigin[3];	// 0x04
	char m_pad10[0x68 - 0x10];
};

class CPhysicsPushedEntities
{
public:
	char m_pad0000[0x14];
	MovedEntity_t *m_pMoved;	// 0x14
	char m_pad0018[0x20 - 0x18];
	int m_nMoved;	// 0x20

	void sub_10036ef0();	// "CPhysicsPushedEntities::RestoreEntities": scope trace, then SetAbsOrigin(start origin) (slot 216) on every moved entity, last to first
};
