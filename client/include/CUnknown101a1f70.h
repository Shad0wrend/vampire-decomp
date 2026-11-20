// CUnknown101a1f70: save/restore helper (used by CRestore) with a pointer at +0x18 to a record holding an int at +4;
// real name not yet known.
#pragma once

struct CUnknown101a1f70_Record
{
	int m_unk0;
	int m_unk4;
	int m_unk8;
	int m_unkc;
};

class CUnknown101a1f70
{
public:
	char pad0[0x18];
	CUnknown101a1f70_Record *m_unk18;

	int sub_1012ab50();
	void sub_1012ab60(void *dst, int size);
};
