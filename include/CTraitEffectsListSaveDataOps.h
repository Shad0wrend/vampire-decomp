// CTraitEffectsListSaveDataOps: save/restore ops for a list of trait ids (5 vtable slots).
#pragma once
#include "ISaveRestoreOps.h"

class CSave;
class CRestore;

struct CTraitEffectsListField
{
	int *m_pList;	// [0] = count, then the trait ids
};

class CTraitEffectsListSaveDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// saves the count, then per trait the length of its name and the name
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// restores the count, then per trait the name read as a string and looked up
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);
};
