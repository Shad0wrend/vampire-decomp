// CEventsSaveDataOps: the save/restore ops of the entity outputs (the events field of an entity).
#pragma once
#include "datamap.h"

class CRestore;
class CSave;

class CEventsSaveDataOps : public ISaveRestoreOps
{
public:
	void vfunc0(void *pEvents, CSave *pSave);	// saves each output of the events list: its action count (WriteInt, slot 10), then the output itself
	void vfunc1(void *pEvents, CRestore *pRestore);	// restores each output of the events list (ISaveRestoreOps slot 1)
	bool vfunc2(void *pEvents);	// slot 2: true when none of the list's entries (0x18 bytes each, count at +0x10 of the list at +8) has a value from sub_100cd940 or a nonzero dword at +0x10
public:
	void vfunc3(int);
	bool vfunc4(int, int);
};
