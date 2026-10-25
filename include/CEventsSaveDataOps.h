// CEventsSaveDataOps: the save/restore ops of the entity outputs (the events field of an entity).
#pragma once

class CRestore;

class CEventsSaveDataOps
{
public:
	void vfunc1(void *pEvents, CRestore *pRestore);	// restores each output of the events list (ISaveRestoreOps slot 1)
};
