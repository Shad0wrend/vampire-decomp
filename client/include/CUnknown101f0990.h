// CUnknown101f0990: a parsed numeric string with an optional prefix tag (e.g. "+5"); real name not yet known.
#pragma once

class CUnknown101f0990
{
public:
	int m_nType;	// 0x00: 0 for a plain number, otherwise 1-based index of the prefix found in the text
	int m_nValue;	// 0x04

	void sub_10152a60(const char *text);	// looks for one of five prefixes in text, then atoi()s what follows
};
