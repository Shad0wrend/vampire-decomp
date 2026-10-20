// CUnknown103a0eb0: an entity that prints debug text lines on screen for itself (real class not yet known);
// only the edict at +0x2e0 and the line printer are modelled.
#pragma once

struct CUnknown103a0eb0TextEntry
{
	const char *m_pszFirst;
	const char *m_pszSecond;
};

struct CUnknown103a0eb0Info	// what the printer is given
{
	const char *m_pszHeader;	// 0x00
	CUnknown103a0eb0TextEntry m_Entries[4];	// 0x04
	int m_nEntry;	// 0x24: the entry to print
};

class CUnknown103a0eb0
{
public:
	char m_pad0000[0x2e0];
	int m_pEdict;	// 0x2e0

	int GetEdict() { return m_pEdict; }
	int sub_103a0eb0(int nLine, CUnknown103a0eb0Info *pInfo, char bHighlight);	// prints the header, the second and then the first text of the info's entry on three consecutive screen lines starting at nLine (brighter colours when bHighlight); returns the next free line
};
