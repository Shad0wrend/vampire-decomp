// CUnknown101e0f00: loader of the "DisciplineTgt_" data files (real name not yet known).
#pragma once

class CUnknown101e0f00
{
public:
	bool sub_101e10e0(const char *name, int *pIndex);	// opens the data file `name` (stub 0x1000bb9a)
	void sub_101e0f00();	// counts the "vdata\system\DisciplineTgt_*.txt" files, then loads each DisciplineTgt_%03d.txt (Msg when one cannot be opened)
};
