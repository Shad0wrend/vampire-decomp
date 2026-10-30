// CPyObjStrSaveRestoreDataOps: save/restore ops for a Python string object field.
#pragma once

class IRestoreLike;

class CPyObjStrSaveRestoreDataOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1(void **field, IRestoreLike *restore);
	virtual int vfunc2(void ***ppField);	// 0x100d0130: 0 when the field's object (a non-null pointer chain) is a Python string (type at +4 is the string type), else 1
	virtual int vfunc3(int);
	virtual bool vfunc4(int, int);
};
