// CEnvFireSource: declared by pcdecomp transplant for 0x1010c220 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CEnvFireSource
{
public:
	CEnvFireSource *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// stub 0x10003e9f when the flag byte at +0x204 bit 0 is set, else stub 0x10009a02
	char m_pad0000[0x204];
	unsigned char m_flags204;
};
