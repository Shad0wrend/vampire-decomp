// CUnknown10202b10: a "VStringTable" record (name from the warning text of its loader); real class name not yet known.
#pragma once

extern char g_102de300[];	// the game's shared empty string

class CUnknown10202b10
{
public:
	int m_pad0;
	const char *m_pszName;	// 0x04
	int m_n08;
	int m_n0c;
	int m_n10;

	const char *Name() { return m_pszName ? m_pszName : g_102de300; }
	bool HasName() { return m_pszName != 0; }
	bool sub_1015ed90(int a, int b);	// reads the VStringTable data of m_pszName through the file parser (fills +8, +0x10 and +0xc), printing "Unable to read VStringTable data for %s: %s" when it fails; false without a name
};
