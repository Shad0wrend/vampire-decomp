// CSafeDiscSaveRestoreOps_6: declared by pcdecomp transplant for 0x1042f950 from CSafeDiscSaveRestoreOps_1 (0x1042f360);
// only what matched code needs, as plain members.
#pragma once
#include "ISaveRestoreOps.h"
#include "CSafeDiscSaveRestoreOps_0.h"
#include "PcdVirtual.h"	// PCD_VIRTUAL: the real slots in the initializer units

class CSafeDiscSaveRestoreOps_6 : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// slot 0 "Save": hashes *(*ppObject + 2) (and 0x3ebf0135/0x5d8f1fcc/+0x4ad2507e/0xc140feca/0x567227d9), hands it to sub_104303d0(unsigned int), then pSave->vfunc10(&result, 1)
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
