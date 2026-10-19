// CEntitySaveRestoreBlockHandler (RTTI .?AVCEntitySaveRestoreBlockHandler@@): base ISaveRestoreBlockHandler is not
// modelled yet, so the slots before the ones we need are placeholders that keep the slot numbers right.
#pragma once

class CSave;

class CEntitySaveRestoreBlockHandler
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3(CSave *pSave);
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(void *pRestore);	// "ReadRestoreHeaders": reads the entity table ("ETABLE" records) into the save info
};
