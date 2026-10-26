// CUnknown10273e40: the owner of 0x10273e40 (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown102e0730;

class CUnknown10273e40
{
public:
	void sub_10273e40();	// when the int at +0x5da4 is 0 and the object at +0x5d88 exists: calls its sub_100146d7 and frees it
	char m_pad0000[0x5d88];
	CUnknown102e0730 *m_p5d88;	// +0x5d88
	char m_pad5d8c[0x5da4 - 0x5d8c];
	int m_n5da4;	// +0x5da4
};
