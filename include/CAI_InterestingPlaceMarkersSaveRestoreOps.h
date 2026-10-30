#pragma once

class CSave;

#include "SaveRestoreFieldInfo_t.h"

class CAI_InterestingPlaceMarkersSaveRestoreOps {
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, CSave *pSave);	// Save: writes the marker count and each marker's entity handle and two vectors
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, void *pRestore);
	virtual void vfunc2();
	virtual void vfunc3(int);
	virtual void vfunc4();
};
