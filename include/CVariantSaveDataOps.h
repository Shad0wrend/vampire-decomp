// CVariantSaveDataOps (RTTI .?AVCVariantSaveDataOps@@, vtable 0x104540cc, 5 slots; bases CDefSaveRestoreOps / ISaveRestoreOps are not modelled).
#pragma once

#include "CRestore.h"
#include "CVariantCopy.h"

struct SaveRestoreFieldInfo_t
{
	CVariantCopy *pField;	// 0x00: the variant being restored
	void *pOwner;	// 0x04
	void *pTypeDesc;	// 0x08: the field's typedescription_t (field name at +4)
};

class CVariantSaveDataOps
{
public:
	virtual void vfunc0();
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, CRestore *pRestore);	// restore: reads the stored field type, then the value of that type through the restore's ReadFields (slot 3) into a temporary variant, which is handed to variant_t::Set; a warning for an unknown type
	virtual void vfunc2();
	virtual void vfunc3();
	virtual void vfunc4();
};
