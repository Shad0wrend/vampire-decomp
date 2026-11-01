// CLogicalEntity: logic entity (RTTI CLogicalEntity : CBaseEntity), vtable 0x104475c4; no members of its own.
// Its constructor is CBaseEntity(0) and then the vftable store. The real CBaseEntity is 0x450 bytes; ours ends at 0x3e0.
#pragma once

#include "CBaseEntity.h"

#define CLOGICALENTITY_BASED

void *sub_100aa720(unsigned int size);	// the entities' operator new (stub 0x1000db89)

class CLogicalEntity : public CBaseEntity
{
public:
	CLogicalEntity() : CBaseEntity(0) {}
	void *operator new(unsigned int size) { return sub_100aa720(size); }
	CLogicalEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (hides the base slot; VC6 has no covariant returns)

	void sub_1000cb8a();	// destructor body

	char m_pad03e0[0x450 - 0x3e0];	// the rest of CBaseEntity
};
