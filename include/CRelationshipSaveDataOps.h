// CRelationshipSaveDataOps: declared by pcdecomp transplant for 0x10349490 from CThinkContextsSaveDataOps (0x100a21a0);
// only what matched code needs, as plain members. Slot 0 is Save(fieldInfo, pSave).
#pragma once
#include "ISaveRestoreOps.h"

class CRelationshipSaveDataOps : public ISaveRestoreOps
{
public:
	virtual void vfunc0(SaveRestoreFieldInfo_t *fieldInfo, ISave *pSave);	// "CRelationshipSaveDataOps::Save": scope trace, writes the owner's relationship count (+0x15a0) then every non-null record of the array the field points to (the record itself through pSave slot 36, then its dwords at +4..+0x10); writes a single zero when the field has no owner
	virtual void vfunc1(SaveRestoreFieldInfo_t *fieldInfo, IRestore *pRestore);	// "CRelationshipSaveDataOps::Restore": reads the count and the records back into the owner's array (+0x1598)
	virtual void vfunc3(SaveRestoreFieldInfo_t *fieldInfo);
	virtual bool vfunc4(SaveRestoreFieldInfo_t *fieldInfo, const char *szValue);	// "CRelationshipSaveDataOps::Parse": only the scope trace, returns false
	virtual bool vfunc2(SaveRestoreFieldInfo_t *fieldInfo);	// slot 2: IsEmpty
};
