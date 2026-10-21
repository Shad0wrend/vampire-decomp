// CUnknown101e0f00: loader of the "DisciplineTgt_" data files (real name not yet known).
#pragma once

class CUnknown101e0f00
{
public:
	char m_pad0000[8];
	void **m_ppEntries;	// 0x08: the entries the data files fill, one per file

	bool sub_101e10e0(const char *name, int *pIndex);	// opens the data file `name` (stub 0x1000bb9a) and walks its "DisciplineTgt" nodes: each node is parsed into the entry m_ppEntries[(*pIndex)++] (sub_101e08d0); false (after a Msg) when the file cannot be opened or an entry is missing
	void sub_101e0f00();	// counts the "vdata\system\DisciplineTgt_*.txt" files, then loads each DisciplineTgt_%03d.txt (Msg when one cannot be opened)
};
