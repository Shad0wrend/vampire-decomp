// CSafeDiscSaveRestoreOps_1: SafeDisc-obfuscated save/restore ops (same layout as CSafeDiscSaveRestoreOps_0).
#pragma once
#include "ISaveRestoreOps.h"

#include "CSafeDiscSaveRestoreOps_0.h"

class CSafeDiscSaveRestoreOps_1 : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
