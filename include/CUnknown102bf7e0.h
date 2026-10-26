// CUnknown102bf7e0: the owner of 0x102bf7e0 (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown102ee2e0;

class CUnknown102bf7e0
{
public:
	void sub_102bf7e0();	// when the object at +0x5d34 answers true to sub_10009c23, calls its sub_10003d19; then sets the byte at +0x1a40
	char m_pad0000[0x5d34];
	CUnknown102ee2e0 *m_p5d34;	// +0x5d34
	char m_pad5d38[0x1a40 - 0x5d38 + 0x5d38 - 0x5d38];
};
