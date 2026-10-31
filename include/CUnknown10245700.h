// CUnknown10245700: an object holding a pointer to a record whose +0x10 member is an id; only that getter is known.
#pragma once

class CUnknown10245700
{
public:
	int m_unk0;
	void *m_pRec;	// 0x04: the record whose dword at +0x10 is the id

	int sub_10245700();	// stub 0x10013d13: the id (dword at +0x10 of the record at +4)
};
