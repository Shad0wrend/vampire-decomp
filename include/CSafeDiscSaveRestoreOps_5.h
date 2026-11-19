// CSafeDiscSaveRestoreOps_5: SafeDisc-obfuscated save/restore ops.
#pragma once
#include "ISaveRestoreOps.h"
#include "CSafeDiscSaveRestoreOps_0.h"
#include "PcdVirtual.h"	// PCD_VIRTUAL: the real slots in the initializer units

class CSafeDiscSaveRestoreOps_5 : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
