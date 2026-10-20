// CPropKeypad: keypad prop. Declared standalone: only the members the matched functions touch.
#pragma once

class CPropKeypad
{
public:
	char m_pad0000[0x880];
	const char *m_pszCode;	// 0x880
	char m_pad0884[0x34];
	char m_bFlag8b8;	// 0x8b8

	const char *sub_1021dc20();	// slot 274: the string at +0x880, or "" when it is null
	char vfunc32(int a);	// slot 32: 0 when the byte at +0x8b8 is set, else CBaseTerminal::vfunc32
	CPropKeypad *sub_1021d890();	// constructor body: CBaseTerminal base constructor (0x10014f4c), two member constructors (+0x888, +0x8a0), vtables, flags at +0x8b8/+0x8b9; returns this
};
