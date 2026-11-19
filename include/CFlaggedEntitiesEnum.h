// CFlaggedEntitiesEnum (RTTI .?AVCFlaggedEntitiesEnum@@): base IPartitionEnumerator at +0x0; collects the entities
// of a spatial query whose flags (GetFlags) match a mask into a fixed-size list.
#pragma once
#include "CFireSphere.h"

class CBaseEntity;

class CFlaggedEntitiesEnum : public IPartitionEnumerator
{
public:
	virtual int vfunc0(CBaseEntity *pHandleEntity);	// "EnumElement": resolves the entity behind the handle, skips it unless it has one of the mask's flags, adds it to the list; 1 (continue) unless it was skipped or the list is full
	CBaseEntity **m_pList;	// 0x04
	int m_nMaxList;	// 0x08
	unsigned int m_nFlagMask;	// 0x0c
	int m_nCount;	// 0x10

	bool sub_101cc9a0(CBaseEntity *pEnt);	// appends pEnt when there is room
	CFlaggedEntitiesEnum *sub_101cc950(CBaseEntity **pList, int nMaxList, unsigned int nFlagMask);	// the constructor body (ecx = this, three stack arguments): vtable, list, size, mask, count 0, then the engine's PEntityOfEntIndex(0) at +0x14
};
