#pragma once
#include "ISaveRestoreOps.h"

class CDebugSaveRestoreOps : public CDefSaveRestoreOps {
public:
	CDebugSaveRestoreOps();
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
