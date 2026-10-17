// CPyObjStrSaveRestoreDataOps: save/restore ops for a Python string object field.
#pragma once

class IRestoreLike;

class CPyObjStrSaveRestoreDataOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1(void **field, IRestoreLike *restore);
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
