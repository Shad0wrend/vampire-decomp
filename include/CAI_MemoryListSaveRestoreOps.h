// CAI_MemoryListSaveRestoreOps (RTTI .?AVCAI_MemoryListSaveRestoreOps@@, vtable 0x1049d7ec, 5 slots).
#pragma once

#include "CRestore.h"

struct SaveRestoreFieldInfo_t;

// A node of the AI memory list: the entity handle at +0x24, the next node at +0x38.
struct CAI_MemoryNode
{
	char m_pad0000[0x24];
	unsigned int m_hEntity;	// 0x24
	char m_pad0028[0x38 - 0x28];
	CAI_MemoryNode *m_pNext;	// 0x38
};

class CAI_MemoryListSaveRestoreOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, CRestore *pRestore);	// restore: reads the count and each node into the list the field points to, dropping the nodes whose entity is gone
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
