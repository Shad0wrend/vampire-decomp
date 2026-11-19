// CSafeDiscSaveRestoreOps_3: declared by pcdecomp transplant for 0x1042f5c0 from CSafeDiscSaveRestoreOps_1 (0x1042f360);
// only what matched code needs, as plain members.
#pragma once
#include "ISaveRestoreOps.h"
#include "CSafeDiscSaveRestoreOps_0.h"
#include "PcdVirtual.h"	// PCD_VIRTUAL: the real slots in the initializer units

class CSafeDiscSaveRestoreOps_3 : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
