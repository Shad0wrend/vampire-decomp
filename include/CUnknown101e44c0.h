// CUnknown101e44c0: object with a table of 30 named entries (pointer at +8); real name not yet known.
#pragma once

struct NamedEntry101e44c0
{
	int m_n0;
	const char *m_pszName;	// +4
};

class CUnknown101e44c0
{
public:
	char pad0[8];
	NamedEntry101e44c0 **m_ppEntries;	// +8, 30 entries

	bool sub_101e44c0(char *buf, const char *fmt, unsigned int mask);	// snprintf(buf, 512, fmt), then appends " name" for every set bit of mask (bit i = entry i); returns true when any bit was set
};
