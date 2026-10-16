// CUnknown101a1f70: save/restore helper (used by CRestore) with a pointer at +0x18 to a record holding an int at +4; real name not yet known.
#pragma once

struct CUnknown101a1f70_Record
{
	int m_unk0;
	int m_unk4;
};

class CUnknown101a1f70
{
public:
	char pad0[0x18];
	CUnknown101a1f70_Record *m_unk18;

	int sub_101a1f70();
};
