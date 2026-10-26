// CUnknown1017f980: the owner of 0x1017f980 (only what matched code needs; the real class is not known yet).
#pragma once

class CUnknown1017f980
{
public:
	void sub_1017f980();	// when sub_10005e7a answers an object, fires the event list at its +0x480 with the owner as activator and caller; clears +0x1d1c
	char *sub_10005e7a();	// stub 0x10005e7a: the object (or 0) this one refers to
	char m_pad0000[0x1d1c];
	int m_unk1d1c;	// +0x1d1c
};
