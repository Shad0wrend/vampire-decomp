// CAI_SaveRestoreBlockHandler (RTTI .?AVCAI_SaveRestoreBlockHandler@@): AI save/restore block handler (the global
// 0x10936b5c); base CDefSaveRestoreBlockHandler, its own slots of vtable 0x1049dfb0.
#pragma once
#include "ISaveRestoreBlockHandler.h"

class CAI_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler
{
public:
	virtual const char *GetBlockName();
	virtual void Save(ISave *pSave);	// writes the AI node name list and the NPC list (count, then per NPC its handle and name)
	virtual void WriteSaveHeaders(ISave *pSave);	// the block version short
	virtual void ReadRestoreHeaders(IRestore *pRestore);	// reads the version short from the stream and compares it with the game's version (m_bField4)
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused);

	bool m_bField4;	// 0x04: the block version matches
};
