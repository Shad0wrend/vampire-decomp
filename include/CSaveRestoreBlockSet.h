// CSaveRestoreBlockSet (RTTI .?AVCSaveRestoreBlockSet@@): the save/restore block set (the global 0x1072bae8, the SDK's
// g_SaveRestoreBlockSet("Game"), 2004 saverestore.cpp); base ISaveRestoreBlockSet (ISaveRestoreBlockHandler at +0x0),
// the 11 slots of vtable 0x10477160 all its own.
#pragma once

extern void *(__cdecl *g_109f3634)(unsigned int);
extern void *(__cdecl *g_109f3638)(void *, unsigned int);

#include "utlvector.h"

struct SaveRestoreBlockHeader_t	// one block's header record (0x28 bytes), as filled by PreSave and written by WriteSaveHeaders
{
	char m_szName[0x20];	// 0x00: the handler's block name
	int m_nLocHeader;	// 0x20: the position of the block's data relative to the save's start (written by WriteSaveHeaders per handler, from the stream's slot 0)
	int m_nLocBody;	// 0x24: written by Save, read back by Restore (-1 = none; WriteSaveHeaders pre-fills the whole record with 0xff)
};

#include "ISaveRestoreBlockHandler.h"
__declspec(dllimport) char *Q_strncpy(char *pDest, const char *pSrc, int maxLen);

// Built inline by the constructor below, destroyed by the implicit destructor (the two vectors, last first).
class CSaveRestoreBlockSet : public ISaveRestoreBlockSet
{
public:
	CSaveRestoreBlockSet(const char *pszName)
	{
		Q_strncpy(m_Name, pszName, sizeof(m_Name));
	}
	virtual const char *GetBlockName();
	virtual void PreSave(CSaveRestoreData *pData);	// the header table sized like the handlers, each header named after its handler, then every handler's PreSave
	virtual void Save(ISave *pSave);	// every handler's Save, its body's position (relative to the start) in its header; then m_SizeBodies
	virtual void WriteSaveHeaders(ISave *pSave);	// a placeholder header table (0xff), every handler's headers (positions in the table), then the real sizes and table over the placeholder
	virtual void PostSave();	// every handler's PostSave, then the header table is purged
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *pRestore);	// the sizes and the header table, then every handler's headers at the position its header names
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused);	// every handler's Restore at the position of its body (the three arguments forwarded)
	virtual void PostRestore();	// every handler's PostRestore, then the header table is purged
	virtual void AddBlockHandler(ISaveRestoreBlockHandler *pHandler);
	virtual void RemoveBlockHandler(ISaveRestoreBlockHandler *pHandler);

	char m_Name[0x20];	// 0x04
	CUtlVector<ISaveRestoreBlockHandler *> m_Handlers;	// 0x24
	int m_SizeHeaders;	// 0x38
	int m_SizeBodies;	// 0x3c
	CUtlVector<SaveRestoreBlockHeader_t> m_BlockHeaders;	// 0x40
};
