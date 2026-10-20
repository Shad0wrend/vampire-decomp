// RestoreSlots: the slots of the IRestore object that the CUtlVectorDataOps<..>::Restore functions call (vtable +8, +0xc and
// +0x38), plus the stack-local field description and data map those functions build (the layouts of typedescription_t and
// datamap_t). Not a game class: just a call helper for the save/restore ops instances.
#pragma once

struct RestoreSlots
{
	virtual void v0(); virtual void v1();
	virtual void ReadElement(void *pElement, void *pMap);	// slot 2
	virtual void ReadFields(const char *name, void *pBase, void *pMap, void *pFields, int nFields);	// slot 3
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8();
	virtual void v9(); virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13();
	virtual int ReadCount();	// slot 14
};

struct LocalFieldDesc	// typedescription_t
{
	int fieldType;
	const char *fieldName;
	int fieldOffset[2];
	unsigned short fieldSize;
	short flags;
	const char *externalName;
	void *pSaveRestoreOps;
	void *inputFunc;
	void *td;
	int fieldSizeInBytes;
	int unk;
};

struct LocalDataMap	// datamap_t
{
	LocalFieldDesc *dataDesc;
	int dataNumFields;
	const char *dataClassName;
	LocalDataMap *baseMap;
	bool chains_validated;
	bool packed_offsets_computed;
	int packed_size;
};
