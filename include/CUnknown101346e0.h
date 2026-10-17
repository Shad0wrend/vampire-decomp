// CUnknown101346e0: logic_case-like entity with 16 output slots at +0x450 and a current index at +0x628;
// real name not yet known.
#pragma once

class CUnknown101346e0
{
public:
	char pad0[0x450];
	int m_slots[16];
	char pad1[0x628 - 0x490];
	int m_current;

	int sub_101346e0(int steps);
};
