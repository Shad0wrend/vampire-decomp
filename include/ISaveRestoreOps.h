// ISaveRestoreOps / CDefSaveRestoreOps: the save/restore ops interface (Source's datamap.h) and its defaults. Kept out
// of datamap.h so that the data description tables, which spell their own typedescription_t, can read it.
// A class, also where it is only declared (`class ISaveRestoreOps;`): with `struct` VC6 spells the type .?AU
// in that unit's RTTI and decorated names, the game spells .?AV.
#pragma once

struct SaveRestoreFieldInfo_t;
class ISave;
class IRestore;

class ISaveRestoreOps	// RTTI .?AVISaveRestoreOps@@: the five slots every save/restore ops object fills (Source's datamap.h)
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave) = 0;	// slot 0: Save
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore) = 0;	// slot 1: Restore
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo) = 0;	// slot 2: IsEmpty
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo) = 0;	// slot 3: MakeEmpty
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue) = 0;	// slot 4 (+0x10): Parse
};

class CDefSaveRestoreOps : public ISaveRestoreOps	// RTTI .?AVCDefSaveRestoreOps@@: the defaults of slots 2-4, one function
{	// each in the game, shared by every ops class that keeps them (the matched blocks define them under other names)
public:
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// 0x100ded50: false
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);	// 0x100ded70: nothing
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);	// 0x10045770: false
};
