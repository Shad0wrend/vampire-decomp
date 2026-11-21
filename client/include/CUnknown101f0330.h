// CUnknown101f0330: object with two optional string pointers at +4 and +8 (empty string when null); real name not yet known.
#pragma once

class CUnknown101f0330
{
public:
	int m_pad0000;
	const char *m_pszName;	// 0x04
	const char *m_pszText;	// 0x08

	void sub_10152590();	// prints the +8 text, then "\t-" and the +4 name, each through sub_10203dd0
};
