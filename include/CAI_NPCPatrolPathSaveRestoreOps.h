// CAI_NPCPatrolPathSaveRestoreOps (RTTI .?AVCAI_NPCPatrolPathSaveRestoreOps@@, vtable 0x1049a210, 5 slots).
#pragma once

#include "SaveRestoreFieldInfo_t.h"
#include "CSave.h"

class CAI_NPCPatrolPathSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, CSave *pSave);	// Save: writes the byte flag the field points to and, when set, the patrol path block under "PatrolPath"; Error "Invalid game state while trying to save NPC." when the path is missing
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
