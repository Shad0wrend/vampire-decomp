// ISaveRestoreBlockHandler.h: Source's save/restore block interfaces (public/isaverestore.h, 2004 SDK), the bases of
// the block handlers. Troika's ISaveRestoreBlockHandler has the SDK's nine slots (CEntitySaveRestoreBlockHandler's
// vtable 0x10477130) but Restore takes a third argument (CSaveRestoreBlockSet's Restore forwards its three to every
// handler's slot 7; no handler reads the third); its ISaveRestoreBlockSet has two of its own, no
// CallBlockHandlerRestore (CSaveRestoreBlockSet's vtable 0x10477160 has 11 slots); its CDefSaveRestoreBlockHandler
// adds a tenth slot and leaves GetBlockName and Restore pure (vtable 0x1044949c). The game has no vtable of
// ISaveRestoreBlockHandler or ISaveRestoreBlockSet (the derived constructors' stores replace theirs).
#pragma once
struct CSaveRestoreData;
class ISave;
class IRestore;

class ISaveRestoreBlockHandler
{
public:
	virtual const char *GetBlockName() = 0;
	virtual void PreSave(CSaveRestoreData *pData) = 0;
	virtual void Save(ISave *pSave) = 0;
	virtual void WriteSaveHeaders(ISave *pSave) = 0;
	virtual void PostSave() = 0;
	virtual void PreRestore() = 0;
	virtual void ReadRestoreHeaders(IRestore *pRestore) = 0;
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused) = 0;
	virtual void PostRestore() = 0;
};

class ISaveRestoreBlockSet : public ISaveRestoreBlockHandler
{
public:
	virtual void AddBlockHandler(ISaveRestoreBlockHandler *pHandler) = 0;
	virtual void RemoveBlockHandler(ISaveRestoreBlockHandler *pHandler) = 0;
};

// The empty defaults (0x10043b20 .. 0x10043c00).
class CDefSaveRestoreBlockHandler : public ISaveRestoreBlockHandler
{
public:
	virtual const char *GetBlockName() = 0;
	virtual void PreSave(CSaveRestoreData *pData);
	virtual void Save(ISave *pSave);
	virtual void WriteSaveHeaders(ISave *pSave);
	virtual void PostSave();
	virtual void PreRestore();
	virtual void ReadRestoreHeaders(IRestore *pRestore);
	virtual void Restore(IRestore *pRestore, bool fCreatePlayers, int nUnused) = 0;
	virtual void PostRestore();
	virtual void sub_10043be0(void *p, void *q);	// slot 9, Troika's: an empty default of two arguments
};
