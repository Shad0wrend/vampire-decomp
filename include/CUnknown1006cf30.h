// CUnknown1006cf30: vector of pointers to records (count at +4, data at +8) looked up by name; real name not yet known.
#pragma once

class CUnknown1006cf30
{
public:
	int m_unk0;
	int m_count;	// 0x0004
	int **m_pData;	// 0x0008

	int sub_1006cf30(const char *pszName);	// the id (first dword) of the record whose name (+4) matches case-insensitively, -1 when there is none
};
