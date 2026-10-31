// CUnknown10245700: an object holding a pointer to a record whose +0x10 member is an id; only that getter is known.
#pragma once

struct CUnknown10245700Rec
{
	char m_pad[0x10];
	int m_nId;	// 0x10
};

class CUnknown10245700
{
public:
	int m_unk0;
	CUnknown10245700Rec *m_pRec;	// 0x04

	int sub_10245700() { return m_pRec->m_nId; }	// stub 0x10013d13
};
