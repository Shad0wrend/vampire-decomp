// CPyObjStrSaveRestoreDataOps: save/restore ops for a Python string object field.
#pragma once
#include "ISaveRestoreOps.h"

class IRestoreLike;

class CPyObjStrSaveRestoreDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// 0x100d0130: 0 when the field's object (a non-null pointer chain) is a Python string (type at +4 is the string type), else 1
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);
};
