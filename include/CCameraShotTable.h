// CCameraShotTable: the table of camera shots the game loads from "vdata/CameraShots/*.txt" (global object at 0x106c8298;
// real name not yet known). A CUtlVector of 0x104 byte shot records (+0 .. +0x13), then the default record (+0x14).
#pragma once

class CUnknown10248a50;

struct CCameraShot_t	// one shot record (0x104 bytes; the dword at +0x20 is the one the camera entities read)
{
	char m_data[0x104];
};

class CCameraShotTable
{
public:
	CCameraShot_t *m_pMemory;	// 0x00: the shot records
	int m_allocationCount;	// 0x04
	int m_growSize;	// 0x08
	int m_size;	// 0x0c
	CCameraShot_t *m_pElements;	// 0x10
	CCameraShot_t m_default;	// 0x14: returned (after the message) for a bad index
	char m_bLoaded;	// 0x118: the shot files have been read

	CCameraShot_t *sub_10072b10(int index);	// stub 0x10006a28: the shot at index (checked as 0 <= index <= m_size), else Msg("Invalid camera shot index\n") and the default record
	void sub_10072810(const char *pszWildcard);	// stub 0x1000396d: unless already loaded, reads every file matching the wildcard (the directory is the wildcard without its last 6 characters, "/*.txt") as a CameraShotTable key tree and hands each of its shots to sub_100721e0; Msg when a file cannot be read; sets the loaded flag
	void sub_100721e0(CUnknown10248a50 *pShot);	// stub 0x10007379: parses one shot description
};
