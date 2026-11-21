// CUnknown101e0940: the table object behind the global at 0x10739a74 (its name string is at +4); its member at 0x101e0940
// looks a name up in the name table at +0xdc (falling back to the global at 0x10739a78) and returns its index or -1;
// real name not yet known.
#pragma once

#include "CUnknown101e01e0.h"

class CUnknown101e0940
{
public:
	int m_pad0000;
	const char *m_pszName;	// 0x04
	char m_pad0008[0xdc - 8];
	CUnknown101e01e0 m_Table;	// 0xdc

	int sub_10149650(const char *name);
};
