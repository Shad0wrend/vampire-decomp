// CUnknown10202ba0: string table with a name (+8) and an entry count (+0xc); not identified yet.
#pragma once

class CUnknown10202ba0
{
public:
	void sub_10202ba0();	// prints the name and then every entry as "(%d):\t\t%s\n"
	const char *sub_10202a10(int index);	// the entry's text (stub 0x10010c8f)

	int m_pad0000;
	int m_pad0004;
	const char *m_pszName;	// 0x08
	int m_nEntries;	// 0x0c
};
