// CUnknown10050860: object with a name string pointer at +4 (falls back to "Unnamed"); real name not yet known.
#pragma once

class CUnknown10050860
{
public:
	char pad0[4];
	const char *m_pszName;

	const char *sub_10050860();
	CUnknown10050860 *sub_10050880();	// stub 0x10005ed9: the next object of the list
};
