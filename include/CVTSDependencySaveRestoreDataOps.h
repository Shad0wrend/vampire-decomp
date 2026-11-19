// CVTSDependencySaveRestoreDataOps: save/restore ops for a dependency record (RTTI .?AVCVTSDependencySaveRestoreDataOps@@,
// vtable 0x104540b0, 5 slots). The base ISaveRestoreOps is not modelled.
#pragma once
#include "ISaveRestoreOps.h"

#include "CSave.h"

struct CVTSDependencyRecord	// the record the field points to
{
	void sub_10204270();	// reset (stub 0x10010573)
	void sub_10204570(const char *pszBuffer);	// fills the record from its saved string (stub 0x100045e3)
	bool sub_10204250();	// has a string to save (stub 0x100051f0)
	const char *sub_102043a0();	// the string to save (stub 0x10001af0)
};

struct CVTSDependencyField
{
	CVTSDependencyRecord *m_pRecord;
};

class CVTSDependencyRestore	// the restore stream: only the slots used here
{
public:
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
	virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
	virtual void v12(); virtual void v13();
	virtual int vfunc14();	// the length of the next string
	virtual void v15(); virtual void v16();
	virtual void vfunc17(char *pOut, int a, int b);	// reads a flag byte
	virtual void v18(); virtual void v19(); virtual void v20();
	virtual void vfunc21(char *pBuffer, int a, int b);	// reads a string
};

class CVTSDependencySaveRestoreDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// "Save": a flag byte, then the record's string length and string
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// "Restore": a flag byte, then the record's string (or the reset record when the flag is clear)
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);
};
