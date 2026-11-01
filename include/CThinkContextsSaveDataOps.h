// CThinkContextsSaveDataOps: save/restore ops for the think contexts of an entity (5 vtable slots).
#pragma once

class CThinkContextsSaveDataOps
{
public:
	virtual void vfunc0(void *pFieldInfo, void *pSave);	// "Save": feeds the vector through CUtlVectorDataOps::Save, then writes the name of every think function
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(void *pField);	// "MakeEmpty": scope trace only
	virtual void vfunc4();
};
