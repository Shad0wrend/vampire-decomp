// CDialogDependency: dependency record of a dialog entry (name from the scope trace strings, not from RTTI).
// Only the members decompiled code needs.
#pragma once

struct CDialogDependencyBlock	// the 16 byte block at +4 (class not known yet)
{
	void sub_10230ed0();	// called through the stub at 0x1001067c by the constructor
};

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
	int m_n21c;
	int m_n220;
	int m_n224;	// 0x224, -1 = none

	CDialogDependency();	// "CDialogDependency::CDialogDependency": constructs the block at +4 (sub_10230ed0), then scope trace and Init(0)
	const char *sub_100ea5e0();	// "CDialogDependency::ToStr": scope trace; for type 2 builds m_nIndent 0x7f characters followed by two spaces in a global buffer and returns it, else returns ""
	void sub_100e8ef0(int a);	// "CDialogDependency::Init": scope trace, resets the 16 byte block at +4 (sub_10204270), zeroes the two 0x40 dword arrays and the small fields, +0x224 = -1, +0 = a
	bool sub_100e9ff0(int a, int b);	// "CDialogDependency::TestPython": scope trace, evaluates the python expression stored as a string at +0x1c through sub_100ea2d0(text, a, b, 0x102, 0); DevMsg error and false when the string is empty
};
