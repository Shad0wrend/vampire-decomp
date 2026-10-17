#pragma once

struct SaveRestoreFieldInfo_t {
	void *pField;
	void *pOwner;
	void *pTypeDesc;
};

class CAI_InterestingPlaceMarkersSaveRestoreOps {
public:
	virtual void vfunc0();
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, void *pRestore);
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
