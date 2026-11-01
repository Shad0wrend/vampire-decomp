// CAI_SaveRestoreBlockHandler (RTTI .?AVCAI_SaveRestoreBlockHandler@@): AI save/restore block handler (base CDefSaveRestoreBlockHandler not modelled).
#pragma once

class CSave;
class IRestorePy;

class CAI_SaveRestoreBlockHandler
{
public:
	virtual int vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CSave *pSave);	// "Save": writes the AI node name list and the NPC list (count, then per NPC its handle and name)
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(IRestorePy *pRestore);	// Restore of the version: reads the version short from the stream and compares it with the game's version (m_bVersionMatches)
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
};
