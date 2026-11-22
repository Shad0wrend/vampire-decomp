// CUnknown101dddb0: a discipline trigger record (effect name, source, affects); real name not yet known.
#pragma once

class CUnknown101dddb0
{
public:
	const char *m_pszFX;	// 0x00, "DisciplineFX" name
	int m_nSource;	// 0x04, index into the source name table
	int m_nAffects;	// 0x08, index into the affects name table

	void sub_101481d0();	// "Trigger_Casting" debug print: Msg of the name, source and affects lines when m_pszFX is set
};
