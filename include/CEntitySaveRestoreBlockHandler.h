// CEntitySaveRestoreBlockHandler (RTTI .?AVCEntitySaveRestoreBlockHandler@@): base ISaveRestoreBlockHandler is not
// modelled yet, so the slots before the ones we need are placeholders that keep the slot numbers right.
#pragma once

class CSave;
class CUnknown101a2c30;
class CBaseEntity;

class CEntitySaveRestoreBlockHandler
{
public:

	bool sub_101a2c30(CUnknown101a2c30 *pSaveData);	// "SaveInitEntities": allocates the entity table (0x30 byte records, engine slot 47) and fills one record per entity of the global list; true when the count matches (this is not used)
	CBaseEntity *sub_101a2d50(const char *pszClassname, const char *pszGlobalname);	// "FindGlobalEntity" (called by the restore code with its own this; this is not used): the first entity of the global entity list whose global name (+0x120) equals pszGlobalname (case-insensitive, null counts as empty); when its classname (+0x11c) differs from pszClassname warns "Global entity found %s, wrong class %s [expects class %s]" and returns null
	int sub_101a3470(CBaseEntity *pEntity, struct CSaveRestoreDataView *pSaveData, struct CEntityTableView *pEntInfo);	// "RestoreGlobalEntity"-like (called by 0x101a3c40; this is not used, 3 stack args, ret 12, always returns 0): slot 1 of pEntity when set; two CRestore (ctor 0x101a12a0, pSaveData) on the stack and a temporary 0x450 byte entity (sub_100aa720(0x450), the CBaseEntity constructor stub 0x100090fc with 0) that is told slot 127 (+0x1fc, 1 arg = the second CRestore's vtable view); seeks pSaveData (pos pEntInfo+0x14 into [0..pSaveData+0xc]); the entity's global name (+0x120) is looked up in the global name table (object 0x106be530, stub 0x100094bc -> +0x40 string) and strcmpi'd with the string at pSaveData+0x1304; on a match sub_101a2d50(classname +0x11c, globalname) finds the live global entity, which is told sub_100579b0(globalname, gpGlobals->mapname), the temporary's handle assigned (CBaseHandle::operator=, 0x100045d4), slot 127 again, slot 117 flag bit 2 picks slot 103 / 104, the LookupEntity-slot check, landmark vector (pSaveData+0x12f4..0x12fc) swapped in and out, sub_101cf600 when the edict (+0x2e0) is set and slot 132; both CRestore vectors purged (CUtlVector<int>::Purge 0x10003576 + CUtlMemory<int>::Purge 0x10007275) or the second via stub 0x1000a06f -> 0x101a5290
public:
	virtual int vfunc0();
	virtual bool vfunc1(CUnknown101a2c30 *);
	virtual void vfunc2(CSave *pSave);	// "PreSave": for every entity record of the save's entity block stamps the tick, lets the entity save itself (slot 126) and notes class name / edict state
	virtual void vfunc3(CSave *pSave);
	virtual void vfunc4();
	virtual void vfunc5();
	virtual void vfunc6(void *pRestore);	// "ReadRestoreHeaders": reads the entity table ("ETABLE" records) into the save info
	virtual void vfunc7();
	virtual void vfunc8();
};
