// CUnknown10057680: the global entity state list ("GLOBAL" / "GENT" blocks of the save game): the head of a list of
// 0x68 byte records (next pointer at +0x64) at +0 and the record count at +4; real name not yet known.
#pragma once

class CRestore;

class CUnknown10057680
{
public:
#ifdef PCD_INITIALIZERS	// the initializer units: the global 0x106be530 is built and destroyed by these
	CUnknown10057680();	// function 0x10057660
#endif
	int m_unk0;
	int m_unk4;

	void sub_10057680();
	CUnknown10057680 *sub_10057660();
	void sub_100579f0();	// frees every record, then sub_10057680 (stub 0x100087ce)
	void sub_10057740(const char *pszName, const char *pszMap, int nState);	// adds a record in front of the list (stub 0x10009066)
	int sub_100578e0(CRestore *pRestore);	// restores the list: the count from the "GLOBAL" block, then one "GENT" block per record
	void sub_100577d0(const char *pszName, int nState);	// stub 0x1000f051: sets the state of the record of that name
	int sub_10057820(const char *pszName);	// stub 0x100020bd: the state (+0x60) of the record of that name, 0 when there is none
	char *sub_100576a0(const char *pszName);	// finds the record whose name (+0) equals pszName (case-insensitive), null when none; null for a null name
	void sub_100579b0(const char *pszName, const char *pszValue);	// finds the record of pszName and copies pszValue (or the default string at 0x106b8540 when null) into its 0x20 byte value at +0x40
};
