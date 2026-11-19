// CThinkContextsSaveDataOps: save/restore ops for the think contexts of an entity (5 vtable slots).
#pragma once
#include "ISaveRestoreOps.h"

class CThinkContextsSaveDataOps : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// "Save": feeds the vector through CUtlVectorDataOps::Save, then writes the name of every think function
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);	// "MakeEmpty": scope trace only
};
