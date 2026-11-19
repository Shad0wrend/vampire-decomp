// CVariantSaveDataOps (RTTI .?AVCVariantSaveDataOps@@, vtable 0x104540cc, 5 slots; bases CDefSaveRestoreOps / ISaveRestoreOps are not modelled).
#pragma once
#include "ISaveRestoreOps.h"

#include "CRestore.h"
#include "CSave.h"
#include "CVariantCopy.h"

#include "SaveRestoreFieldInfo_t.h"

class CVariantSaveDataOps : public CDefSaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// save: writes the field type, then the value of that type through the save's WriteFields (slot 3) from the variant itself (a vector from a copy that is zero unless the type is a vector), a warning for an unknown type
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// restore: reads the stored field type, then the value of that type through the restore's ReadFields (slot 3) into a temporary variant, which is handed to variant_t::Set; a warning for an unknown type
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
};
