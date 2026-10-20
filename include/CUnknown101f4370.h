// CUnknown101f4370: object with a name table at +8 (count at table+0x14, array of record pointers at table+0x18); real name not yet known.
#pragma once

struct CUnknown101f4370Name
{
	const char *m_psz;
	const char *Get() { return m_psz; }
};

struct CUnknown101f4370NameRec
{
	int m_id;
	CUnknown101f4370Name m_name;	// 0x04
};

struct CUnknown101f4370NameTable
{
	char m_pad0[0x14];
	int m_nCount;	// 0x14
	CUnknown101f4370NameRec **m_pRecs;	// 0x18
};

class CUnknown101f4370
{
public:
	char m_pad0[8];
	CUnknown101f4370NameTable *m_pNames;	// 0x08

	void sub_101f4370(const char *name, int *pIndex, int *pExtra);	// looks the name up (extension and an optional "_<number>" suffix stripped, case-insensitive): *pIndex = record id or -1, *pExtra = the number after the underscore or 0
};
