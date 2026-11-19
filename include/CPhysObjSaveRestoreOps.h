// CPhysObjSaveRestoreOps (RTTI .?AVCPhysObjSaveRestoreOps@@, vtable 0x104494d0, 5 slots).
#pragma once
#include "ISaveRestoreOps.h"

#include "Vector.h"

class CBaseEntity;

// BBox_t (game_shared/physics_saverestore.cpp): a custom physics box. Its implicit constructor is compiled out of
// line at 0x10045a90 (`mov eax, ecx; ret`: the Vector members' empty constructors).
struct BBox_t
{
	Vector mins;
	Vector maxs;
};

// The argument of vfunc0 / vfunc2 (a fieldInfo-like record): the data pointer at +0 (its first dword is the physics
// object's CBaseEntity *), the entity at +4 (slot 128, slot 1 and GetClassname are called on it), and at +8 a field
// description block (a short at +0x10, a name string pointer at +4).
struct CPhysObjSaveRestoreOps_Arg
{
	int *m_pEntries;	// 0x0
	CBaseEntity *m_pEntity;	// 0x4
	char *m_pCount;	// 0x8: a block with a short count at +0x10
};

class CPhysObjSaveRestoreOps : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// 0x10045790 Save (ret 8): nothing happens while the dword at this+4 is 0; builds a 0x40 byte record on the stack (zeroed: 13 + 6 dwords; entity handle via slot 1; name via stub 0x1042bff0 = pooled string), looks the entity up in the model name tree (0x106bdaa4, CUtlRBTreeFind16 0x10046570) and the spawn vector tree (0x106bdac0, 0x10046750 / CUtlRBTree36 0x10045de0), or falls back to entity slot 57 as a float or DevMsg("Don't know how to save model for physics object ..."), then hands the record to PQ::sub_10046050 (this = 0x106bda6c)
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// true when every entry below the count is null
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);

	void *m_pObject04;	// 0x04: tested at the start of vfunc0 (null = nothing to save), passed as the record's first dword
};
