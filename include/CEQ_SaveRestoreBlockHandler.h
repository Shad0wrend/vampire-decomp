// CEQ_SaveRestoreBlockHandler (RTTI .?AVCEQ_SaveRestoreBlockHandler@@): the event queue's save/restore block handler;
// base CDefSaveRestoreBlockHandler in the initializer unit (the global 0x106e70a8), a flat view elsewhere.
#pragma once
#ifdef PCD_INITIALIZERS
#include "ISaveRestoreBlockHandler.h"
#endif

// Restore interface as seen by the block handlers: only the read slot used so far is named.
class IRestoreRead
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual int ReadShort(short *pValue, int count, int flags);	// slot 12
};

class CEQ_SaveRestoreBlockHandler
#ifdef PCD_INITIALIZERS
	: public CDefSaveRestoreBlockHandler
#endif
{
public:
#ifdef PCD_INITIALIZERS	// its own slots of vtable 0x10454060 (matched as the flat view's vfuncN)
	virtual const char *GetBlockName();
	virtual void Save(ISave *pSave);
	virtual void WriteSaveHeaders(ISave *pSave);
	virtual void ReadRestoreHeaders(IRestore *pRestore);
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers);
#else
	virtual int vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(IRestoreRead *pRestore);	// reads the block version and remembers whether it matches
	virtual void vfunc7(int a, int b, int c);	// reads the event queue (g_106e7050) through the restore interface a when the version matches
	virtual void vfunc8();
	virtual void vfunc9();
#endif

	bool m_bVersionMatches;	// 0x04
};
