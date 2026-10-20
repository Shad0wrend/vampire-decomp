// CUnknown101f5d80: a named collection of two debug-dumpable vectors; real name not yet known.
#pragma once

class CDumpThing;
class CUnknown101f4b20;

class CUnknown101f5d80
{
public:
	char m_pad0000[0xc];
	const char *m_pszName;	// 0x0c
	char m_pad0010[4];
	int m_numThings;	// 0x14
	CDumpThing **m_pThings;	// 0x18
	int m_numOthers;	// 0x1c
	CUnknown101f4b20 **m_pOthers;	// 0x20

	void sub_101f5d80();	// debug dump: "\n   %s:\n\n" with the name, then each element of both vectors
};
