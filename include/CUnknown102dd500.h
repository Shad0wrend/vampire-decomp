// CUnknown102dd500: object with a name-table index at +4 and the table's context data at +8; real name not yet known.
#pragma once

class CUnknown102dd500
{
public:
	int m_unk0;
	int m_nIndex;
	char m_data[4];

	const char *sub_102dd500();	// the name for index m_nIndex (the empty string when unset)
};
