// CEntitySaveRestoreBlockHandler (RTTI .?AVCEntitySaveRestoreBlockHandler@@): base ISaveRestoreBlockHandler is not
// modelled yet, so the slots before the ones we need are placeholders that keep the slot numbers right.
#pragma once

class CSave;

class CEntitySaveRestoreBlockHandler
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CSave *pSave);	// "PreSave": for every entity record of the save's entity block stamps the tick, lets the entity save itself (slot 126) and notes class name / edict state
	virtual void vfunc3(CSave *pSave);
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(void *pRestore);	// "ReadRestoreHeaders": reads the entity table ("ETABLE" records) into the save info
};
