// CSafeDiscSaveRestoreOps_0: SafeDisc-obfuscated save/restore ops (primary vtable 0x10517180, 5 slots).
#pragma once
#include "ISaveRestoreOps.h"

struct CSafeDiscWriter
{
	virtual void vfunc0();
	virtual void vfunc1();
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6();
	virtual void vfunc7();
	virtual void vfunc8();
	virtual void vfunc9();
	virtual void vfunc10(int *pData, int count);	// slot 10 (+0x28): writes count dwords
};

struct CSafeDiscReader
{
	virtual void vfunc0(); virtual void vfunc1(); virtual void vfunc2(); virtual void vfunc3(); virtual void vfunc4();
	virtual void vfunc5(); virtual void vfunc6(); virtual void vfunc7(); virtual void vfunc8(); virtual void vfunc9();
	virtual void vfunc10(); virtual void vfunc11(); virtual void vfunc12(); virtual void vfunc13();
	virtual int vfunc14();	// slot 14 (+0x38): reads one dword
};

class CSafeDiscSaveRestoreOps_0 : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
};
