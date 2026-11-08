// CAI_MemoryListSaveRestoreOps (RTTI .?AVCAI_MemoryListSaveRestoreOps@@, vtable 0x1049d7ec, 5 slots).
#pragma once

#include "CRestore.h"

struct SaveRestoreFieldInfo_t;
class CSave;

// A node of the AI memory list: the entity handle at +0x24, the next node at +0x38.
struct CAI_MemoryNode
{
	Vector m_vec0;
	Vector m_vecC;
	Vector m_vec18;
	unsigned int m_hEntity;	// 0x24
	float m_flTime;
	int m_i2c;
	int m_i30;
	char m_bFlag34;
	char m_bFlag35;
	char m_pad0036[2];
	CAI_MemoryNode *m_pNext;	// 0x38
};

class CAI_MemoryListSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, CSave *pSave);	// save: writes the node count, then each node of the list the field points to
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, CRestore *pRestore);	// restore: reads the count and each node into the list the field points to, dropping the nodes whose entity is gone
	virtual void vfunc2();
	virtual void vfunc3(CAI_MemoryNode **ppHead);	// destructor: frees every node of the list the field points to (sub_102df1b0 each), clearing the head
	virtual void vfunc4();
};
