// CAI_CsActList (RTTI .?AVCAI_CsActList@@): list of 0x28-byte CSAct entries, count at +0xa04.
#pragma once

struct CSAct
{
	char m_data[0x28];
};

class CAI_CsActList
{
public:
	virtual void vfunc0(void *pSave);	// Save
	virtual void vfunc1();
	virtual void vfunc2();

	CSAct m_acts[0x40];	// 0x004 .. 0xa03
	int m_nActs;		// 0xa04
	int m_field_a08;
};
