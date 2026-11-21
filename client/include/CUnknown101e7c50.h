// CUnknown101e7c50: a table of named entries (id at +0, name at +4 of each entry; count at +0x18, entry pointers at +0x1c);
// real name not yet known.
#pragma once

#include "CVDmg_t.h"

extern char g_102de300[];	// the empty string

struct CUnknown101e7c50Name	// a name slot: the string pointer, "" when it is null
{
	const char *m_psz;

	const char *Get() const { return m_psz ? m_psz : g_102de300; }
};

struct CUnknown101e7c50Entry
{
	int m_id;	// 0x00
	CUnknown101e7c50Name m_name;	// 0x04
};

class CUnknown101e7c50
{
public:
	char m_pad0000[0x18];
	int m_nEntries;	// 0x18
	CUnknown101e7c50Entry **m_pEntries;	// 0x1c

	CVDmgBlock16_t *sub_1014cee0(const char *pszName);	// the block (a shared static) holding the id (type 4) of the entry of that name, case-insensitive, -1 when there is none
};
