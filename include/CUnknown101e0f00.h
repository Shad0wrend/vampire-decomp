// CUnknown101e0f00: loader of the "DisciplineTgt_" data files (real name not yet known).
#pragma once

struct CUnknown101e0f00Entry	// one targeted discipline
{
	int m_id;	// 0x00
	const char *m_pszName;	// 0x04
	const char *m_pszInternalName;	// 0x08
	char m_pad000c[0x20 - 0x0c];
	int m_nBaseCost;	// 0x20

	void sub_101e0a00();	// Debug_Display of the entry (stub 0x100100fa)
};

class CUnknown101e0f00
{
public:
	int m_n0000;
	int m_nEntries;	// 0x04
	void **m_ppEntries;	// 0x08: the entries the data files fill, one per file

	bool sub_101e10e0(const char *name, int *pIndex);	// opens the data file `name` (stub 0x1000bb9a) and walks its "DisciplineTgt" nodes: each node is parsed into the entry m_ppEntries[(*pIndex)++] (sub_101e08d0); false (after a Msg) when the file cannot be opened or an entry is missing
	void sub_101e0f00();	// counts the "vdata\system\DisciplineTgt_*.txt" files, then loads each DisciplineTgt_%03d.txt (Msg when one cannot be opened)
	int sub_101e12f0(const char *pszName);	// the index of the entry whose internal name equals pszName (case-insensitive), -1 when none (stub 0x10004570)
	void sub_101e4380(const char *pszName);	// "Targeted Discipline Manager" Debug_Display: without a name lists every entry (index, name, base cost), with the name of an entry (or "ALL") displays that entry (every entry)
};
