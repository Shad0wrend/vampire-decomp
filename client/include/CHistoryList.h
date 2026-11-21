// CHistoryList: the manager of the "Histories*.txt" data files (global object at 0x1073a28c; not in the game's
// RTTI, the name is provisional). Only what recovered code needs.
#pragma once

class CHistoryList
{
public:
	bool sub_1014e2a0(const char *pszFile);	// loads one history data file (called through the stub at 0x10012e40)
	void sub_1014e4d0();	// "LoadAll": enumerates vdata\system\Histories*.txt through the file system and loads Histories000.txt ... Histories<count-1>.txt, warning for each file that cannot be opened
};
