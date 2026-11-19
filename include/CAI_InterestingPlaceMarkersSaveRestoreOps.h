#pragma once
#include "ISaveRestoreOps.h"

class CSave;

#include "SaveRestoreFieldInfo_t.h"

class CAI_InterestingPlaceMarkersSaveRestoreOps : public CDefSaveRestoreOps {
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// Save: writes the marker count and each marker's entity handle and two vectors
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
};
