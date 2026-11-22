// CEQ_SaveRestoreBlockHandler (RTTI .?AVCEQ_SaveRestoreBlockHandler@@): the event queue's save/restore block handler
// (the global 0x106e70a8); base CDefSaveRestoreBlockHandler, its own slots of vtable 0x10454060.
#pragma once
#include "ISaveRestoreBlockHandler.h"

// Restore interface as seen by the block handlers: only the read slot used so far is named.
class IRestoreRead
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int ReadShort(short *pValue, int count, int flags);	// slot 12
};

class CEQ_SaveRestoreBlockHandler : public CDefSaveRestoreBlockHandler
{
public:
	virtual const char *GetBlockName();
	virtual void Save(ISave *pSave);	// the event queue (g_106e7050) saves itself
	virtual void WriteSaveHeaders(ISave *pSave);	// the block version short
	virtual void ReadRestoreHeaders(IRestore *pRestore);	// reads the block version and remembers whether it matches
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused);	// reads the event queue (g_106e7050) when the version matches

	bool m_bVersionMatches;	// 0x04
};
