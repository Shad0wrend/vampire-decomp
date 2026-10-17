// CUnknown10427700: fixed table (max 0x20) of 36-byte entries with a duplicated name string; real name not yet known.
#pragma once

struct CUnknown10427700Entry
{
	char *m_pName;
	int m_a;
	int m_b;
	char pad[24];
};

class CUnknown10427700
{
public:
	int m_nEntries;
	CUnknown10427700Entry m_entries[0x20];

	bool sub_10427700(const char *name, int a, int b);
};
