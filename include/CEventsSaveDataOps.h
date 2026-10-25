// CEventsSaveDataOps: the save/restore ops of the entity outputs (the events field of an entity).
#pragma once

class CRestore;

class CEventsSaveDataOps
{
public:
	void vfunc1(CRestore *pRestore, void *pEvents);	// restores each output of the events list (ISaveRestoreOps slot 1)
};
