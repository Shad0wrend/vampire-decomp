// CAI_SaveRestoreBlockHandler (RTTI .?AVCAI_SaveRestoreBlockHandler@@): AI save/restore block handler; base
// CDefSaveRestoreBlockHandler in the initializer unit (the global 0x10936b5c), a flat view elsewhere.
#pragma once
#ifdef PCD_INITIALIZERS
#include "ISaveRestoreBlockHandler.h"
#endif

class CSave;
class IRestorePy;

class CRestore;

class CAI_SaveRestoreBlockHandler
#ifdef PCD_INITIALIZERS
	: public CDefSaveRestoreBlockHandler
#endif
{
public:
	bool m_bField4;
#ifdef PCD_INITIALIZERS	// its own slots of vtable 0x1049dfb0 (matched as the flat view's vfuncN)
	virtual const char *GetBlockName();
	virtual void Save(ISave *pSave);
	virtual void WriteSaveHeaders(ISave *pSave);
	virtual void ReadRestoreHeaders(IRestore *pRestore);
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers);
#else
	virtual int vfunc0();
	virtual void vfunc1();
	virtual void vfunc2(CSave *pSave);	// "Save": writes the AI node name list and the NPC list (count, then per NPC its handle and name)
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(IRestorePy *pRestore);	// Restore of the version: reads the version short from the stream and compares it with the game's version (m_bVersionMatches)
	virtual void vfunc7(CRestore *pRestore, int a, int b);
	virtual void vfunc8();
	virtual void vfunc9();
#endif
};
