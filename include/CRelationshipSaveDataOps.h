// CRelationshipSaveDataOps: declared by pcdecomp transplant for 0x10349490 from CThinkContextsSaveDataOps (0x100a21a0);
// only what matched code needs, as plain members. Slot 0 is Save(fieldInfo, pSave).
#pragma once

class CRelationshipSaveDataOps
{
public:
	virtual void vfunc0(void *fieldInfo, void *pSave);	// "CRelationshipSaveDataOps::Save": scope trace, writes the owner's relationship count (+0x15a0) then every non-null record of the array the field points to (the record itself through pSave slot 36, then its dwords at +4..+0x10); writes a single zero when the field has no owner
	virtual void vfunc1(void *fieldInfo, void *pRestore);	// "CRelationshipSaveDataOps::Restore": reads the count and the records back into the owner's array (+0x1598)
	void vfunc3(void *pField);
};
