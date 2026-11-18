// CLogicNPCCondition: declared by pcdecomp transplant for 0x101361c0 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

#include "CLogicalEntity.h"
#include "COutputEvent.h"

class CBaseEntity;

class CLogicNPCCondition : public CLogicalEntity
{
public:
	CLogicNPCCondition() : m_hEntity488(0xffffffff) {}
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (VC6 has no covariant returns)

	const char *m_name450;	// +0x450: name of the condition
	const char *m_name454;	// +0x454: name of the entity to look up
	COutputEvent m_Output458;	// +0x458
	COutputEvent m_Output470;	// +0x470
	unsigned int m_hEntity488;	// +0x488: cached handle of the entity found by name
	int m_nCondition;	// +0x48c: the condition id (not positive when the name was invalid)

	CBaseEntity *sub_10135720();	// resolves the cached handle at +0x488, searching the entity by name when it is stale
	const char *sub_1000b5cd();	// stub 0x1000b5cd: CBaseEntity::GetDebugName
	bool sub_10135840();	// tests the condition on the target NPC; warns when the condition is invalid or the NPC is missing
	void vfunc113();	// slot 113 "Activate" (plain member): resolves the entity, looks the condition name up (the global condition table, sub_102c8cc0) into +0x48c and, when it is not positive, writes a warning with the debug name and the condition name on screen at the origin (a red cross and the text, 10000 seconds)
public:
	datamap_t * vfunc82();
};
