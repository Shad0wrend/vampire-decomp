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
	int m_unk0;
	const char *m_pszName;	// 0x04
	CUnknown101f4370NameTable *m_pNames;	// 0x08
	int *m_pKinds;	// 0x0c: per record id, 1 when the file name carries no number

	void sub_101f4370(const char *name, int *pIndex, int *pExtra);	// looks the name up (extension and an optional "_<number>" suffix stripped, case-insensitive): *pIndex = record id or -1, *pExtra = the number after the underscore or 0
	const char *sub_101f4950(int index, int number);	// builds "<dir>\<name>\<folder>.wav" (or "..._<number>.wav" for the other kinds) of the record with that id in a global buffer
};
