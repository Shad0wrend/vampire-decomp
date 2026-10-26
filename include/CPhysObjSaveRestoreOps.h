// CPhysObjSaveRestoreOps (RTTI .?AVCPhysObjSaveRestoreOps@@, vtable 0x104494d0, 5 slots).
#pragma once

// The argument of vfunc2: the entry array at +0, and at +8 a block whose short count at +0x10 says how many entries it holds.
struct CPhysObjSaveRestoreOps_Arg
{
	int *m_pEntries;	// 0x0
	char m_pad0004[4];
	char *m_pCount;	// 0x8: a block with a short count at +0x10
};

class CPhysObjSaveRestoreOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1();
	virtual bool vfunc2(CPhysObjSaveRestoreOps_Arg *pArg);	// true when every entry below the count is null
	virtual void vfunc3();
	virtual void vfunc4();
};
