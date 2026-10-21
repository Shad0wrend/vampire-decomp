// CUnknown10057680: the global entity state list ("GLOBAL" / "GENT" blocks of the save game): the head of a list of
// 0x68 byte records (next pointer at +0x64) at +0 and the record count at +4; real name not yet known.
#pragma once

class CRestore;

class CUnknown10057680
{
public:
	int m_unk0;
	int m_unk4;

	void sub_10057680();
	CUnknown10057680 *sub_10057660();
	void sub_100579f0();	// frees every record, then sub_10057680 (stub 0x100087ce)
	void sub_10057740(const char *pszName, const char *pszMap, int nState);	// adds a record in front of the list (stub 0x10009066)
	int sub_100578e0(CRestore *pRestore);	// restores the list: the count from the "GLOBAL" block, then one "GENT" block per record
};
