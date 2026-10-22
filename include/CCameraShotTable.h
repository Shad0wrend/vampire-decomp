// CCameraShotTable: the table of camera shots the game loads from "vdata/CameraShots/*.txt" (global object at 0x106c8298;
// real name not yet known). Only the loaded flag is declared.
#pragma once

class CUnknown10248a50;

class CCameraShotTable
{
public:
	char m_pad0000[0x118];
	char m_bLoaded;	// 0x118: the shot files have been read

	void sub_10072810(const char *pszWildcard);	// stub 0x1000396d: unless already loaded, reads every file matching the wildcard (the directory is the wildcard without its last 6 characters, "/*.txt") as a CameraShotTable key tree and hands each of its shots to sub_100721e0; Msg when a file cannot be read; sets the loaded flag
	void sub_100721e0(CUnknown10248a50 *pShot);	// stub 0x10007379: parses one shot description
};
