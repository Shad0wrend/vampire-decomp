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

	const char *sub_100ea5e0();	// "CDialogDependency::ToStr": scope trace; for type 2 builds m_nIndent 0x7f characters followed by two spaces in a global buffer and returns it, else returns ""
};
