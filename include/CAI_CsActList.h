// CAI_CsActList (RTTI .?AVCAI_CsActList@@): list of 0x28-byte CSAct entries, count at +0xa04.
#pragma once

class CBaseEntity;

struct CSAct
{
	CSAct();	// out-of-line (0x102c9d20): clears the type and sets the handles to -1
	char m_data[0x28];
};

// Slots of the save interface that CAI_CsActList::vfunc0 uses (3 = WriteFields, 10 = WriteInt).
struct CsActSaveIface
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual void WriteFields(const char *name, void *base, int a, int b, int c);
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void WriteInt(int *p, int n);
};

// Slots of the restore interface that CAI_CsActList::vfunc1 uses (3 = ReadFields, 15 = ReadInt).
struct CsActRestoreIface
{
	virtual void v0(); virtual void v1(); virtual void v2();
	virtual int ReadFields(const char *name, void *base, int a, int b, int c);
	virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual void v10(); virtual void v11(); virtual void v12(); virtual void v13(); virtual void v14();
	virtual void ReadInt(int *p, int n, int unused);
};

class CAI_CsActList
{
public:
	CAI_CsActList();	// constructor (0x102ca0c0): constructs the 0x40 acts, then the count and the field after it are cleared
	virtual void vfunc0(CsActSaveIface *pSave);	// Save
	virtual void vfunc1(CsActRestoreIface *pRestore);	// Restore
	virtual void vfunc2(char flag);	// calls sub_102ca760 when flag is set

	void sub_102ca760();
	void sub_102ca2a0(int nType, CBaseEntity *pSource, float x, float y, float z, int nLevel, float flDuration, CBaseEntity *pOffender, CBaseEntity *pOwner, char bExternal);	// adds an act (type 2 = supernatural, else criminal) to the list unless it holds 0x40: the entry gets the type, the source handle (-1 for none), the position, the level, the duration (sub_102c9d70), the offender and owner handles and the flag, with a DevMsg line when the console variable at 0x107258dc allows

	CSAct m_acts[0x40];	// 0x004 .. 0xa03
	int m_nActs;		// 0xa04
	int m_field_a08;
};
