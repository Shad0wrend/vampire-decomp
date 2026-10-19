// CUnknown100e3400: a sound character record (character name string at +8); real name not yet known.
#pragma once

class CUnknown100e3400
{
public:
	int m_i00;
	int m_i04;
	const char *m_pszCharacter;	// 0x08

	char *sub_100e3400(int line, char col, const char *ext, bool isStream);	// builds "[*]sound/character/<name>/line<line>_col_<col>.<ext>" lower-cased in a static buffer (0x106ea660)
};
