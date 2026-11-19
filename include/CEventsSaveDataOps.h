// CEventsSaveDataOps: the save/restore ops of the entity outputs (the events field of an entity).
#pragma once
#include "datamap.h"

class CRestore;
class CSave;

class CEventsSaveDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// saves each output of the events list: its action count (WriteInt, slot 10), then the output itself
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// restores each output of the events list (ISaveRestoreOps slot 1)
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// slot 2: true when none of the list's entries (0x18 bytes each, count at +0x10 of the list at +8) has a value from sub_100cd940 or a nonzero dword at +0x10
public:
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);
};
