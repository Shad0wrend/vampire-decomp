// CThinkContextsSaveDataOps: save/restore ops for the think contexts of an entity (5 vtable slots).
#pragma once

class CThinkContextsSaveDataOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(void *pField);	// "MakeEmpty": scope trace only
	virtual void vfunc4();
};
