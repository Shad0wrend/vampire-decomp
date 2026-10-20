// CDialogDependency: dependency record of a dialog entry (name from the scope trace strings, not from RTTI).
// Only the members decompiled code needs.
#pragma once

class CDialogDependency
{
public:
	int m_pad0000;
	int m_nType;	// 0x04, -1 = none
	int m_nArg;	// 0x08
	char m_pad000c[0x18 - 0x0c];
	int m_nIndent;	// 0x18
	int m_a1c[0x40];	// 0x1c
	int m_a11c[0x40];	// 0x11c
	int m_n21c;	// 0x21c
	int m_n220;	// 0x220
	int m_n224;	// 0x224, -1 = none

	const char *sub_100ea5e0();	// "CDialogDependency::ToStr": scope trace; for type 2 builds m_nIndent 0x7f characters followed by two spaces in a global buffer and returns it, else returns ""
	void sub_100e8ef0(int a);	// "CDialogDependency::Init": scope trace, resets the 16 byte block at +4 (sub_10204270), zeroes the two 0x40 dword arrays and the small fields, +0x224 = -1, +0 = a
};
