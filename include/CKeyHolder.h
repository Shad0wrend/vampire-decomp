// CKeyHolder: a named object holding three keys (dwords at +0xc) that index the global CEntryX table; real name not yet known.
#pragma once

class CKeyHolder
{
public:
	char m_pad0000[8];
	const char *m_pszName;	// 0x08
	int m_nKeys[3];	// 0x0c

	const char *sub_101ebf30(int index);	// the name of the entry of key number index (1..3, clamped to 3), "" when index < 1 or the entry has no name
	void sub_101ebff0();	// prints "<name>:" and one line per key ("(1):", "(2):", "(3+):") with the entry's name, through sub_10203dd0
};
