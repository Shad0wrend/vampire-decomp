// CTraitDependencyDataDescSaveDataOps: save/restore ops for a trait dependency description (5 vtable slots).
#pragma once
#include "ISaveRestoreOps.h"

class CSave;

struct CTraitDependencyData
{
	int m_type;
	int m_value;
	char m_flag;
	int m_extra;
};

struct CTraitDependencyField
{
	CTraitDependencyData *m_pData;
};

class CTraitDependencyDataDescSaveDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// saves the description
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// restores the description
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);
};
