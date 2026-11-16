// CPhysicsMovedEntities: a fixed list (count at +0) of up to 512 moved entities, each record 16 bytes:
// the entity pointer and its origin at the time it was added (starting at +4).
#pragma once

class CBaseEntity;

struct CMovedEntityRecord_t
{
	CBaseEntity *m_pEntity;	// 0x00
	float m_vecOrigin[3];	// 0x04
};

class CPhysicsMovedEntities
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x106b8a98 is built and destroyed by these
	CPhysicsMovedEntities();	// function 0x10033630
#endif
	int m_nCount;	// 0x00
	CMovedEntityRecord_t m_Records[512];	// 0x04

	CPhysicsMovedEntities *sub_10033630();	// "CPhysicsMovedEntities::CPhysicsMovedEntities": scope trace around the body sub_100336c0 (stub 0x100073e2); returns this
	void sub_100336c0();	// constructor body
	bool sub_10033740(CBaseEntity *pEntity);	// "CPhysicsMovedEntities::AddEntity": scope trace, false when full, else stores the entity and a copy of its origin (slot 220)
};
