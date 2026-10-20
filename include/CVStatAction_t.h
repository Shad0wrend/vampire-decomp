// CVStatAction_t: stat action record (no vtable known). Only the methods decompiled code needs.
#pragma once

class CVStatAction_t
{
public:
	int m_pad0000;
	int m_pad0004;
	int m_nMin;	// +8
	int m_nMax;	// +0xc

	bool sub_101fceb0(int value);	// "CVStatAction_t::IsAffectedBy"
	bool sub_101fcf50();	// "CVStatAction_t::AlwaysTriggers"
	void sub_101fd110(int a, int b, int c, int d);	// "CVStatAction_t::Apply"
	void sub_101fd1b0(int a, int b, int c);	// "CVStatAction_t::Remove"
	const char *sub_1000285b();	// stub of 0x101fd250: returns the action's description string
	const char *sub_101fd250();	// "CVStatAction_t::ToDetailedStr": scope trace, formats "[ min - max ]: ..." by action type (+4: 1 name of a table entry, 2 a lookup on the pointer at +0x3c, 3 FUNC, 4 two strings of the record at +0x3c) into a static buffer and returns it ("<ERROR>" for other types)
};
