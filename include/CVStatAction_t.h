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
	void sub_101fd110(int a, int b, int c, int d);	// "CVStatAction_t::Apply"
	void sub_101fd1b0(int a, int b, int c);	// "CVStatAction_t::Remove"
};
