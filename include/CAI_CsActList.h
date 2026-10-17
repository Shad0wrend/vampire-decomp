// CAI_CsActList (RTTI .?AVCAI_CsActList@@): list of 0x28-byte CSAct entries, count at +0xa04.
#pragma once

struct CSAct
{
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

class CAI_CsActList
{
public:
	virtual void vfunc0(CsActSaveIface *pSave);	// Save
	virtual void vfunc1();
	virtual void vfunc2();

	CSAct m_acts[0x40];	// 0x004 .. 0xa03
	int m_nActs;		// 0xa04
	int m_field_a08;
};
