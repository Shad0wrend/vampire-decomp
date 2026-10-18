// CPropKeypad: keypad prop. Declared standalone: only the members the matched functions touch.
#pragma once

class CPropKeypad
{
public:
	char m_pad0000[0x880];
	const char *m_pszCode;	// 0x880

	const char *sub_1021dc20();	// slot 274: the string at +0x880, or "" when it is null
};
