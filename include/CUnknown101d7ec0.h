// CUnknown101d7ec0: the global clan string table at 0x10739140 (real name not yet known).
#pragma once

class CUnknown101d7ec0
{
public:
	int sub_101d7ec0(const char *pszName, int *pOut);	// stub 0x1000dd37: the id of the entry of that name (case-insensitive) and, through pOut, its sub id (-1 for a direct hit); -1 when there is none
};

extern CUnknown101d7ec0 g_10739140;
