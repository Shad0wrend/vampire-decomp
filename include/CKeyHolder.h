// CKeyHolder: a named object holding three keys (dwords at +0xc) that index the global CEntryX table; real name not yet known.
// It is itself the record of a table keyed by its dword at +0 (here the weapon type, [weapon + 0x25c]).
#pragma once

class CKeyHolder
{
public:
	int m_nKey;	// 0x00: the key the table is searched by (-1 = the static default)
	int m_pad04;
	const char *m_pszName;	// 0x08
	int m_nKeys[3];	// 0x0c

	CKeyHolder(int key);	// 0x101ebce0 (stub 0x100127a6): m_nKey = key, the three keys = -1
	~CKeyHolder() {}	// the destroy behind the atexit stub 0x100070ef (-> 0x10220d70 -> 0x101ebd10) is a bare `ret`

	const char *sub_101ebf30(int index);	// the name of the entry of key number index (1..3, clamped to 3), "" when index < 1 or the entry has no name
	void sub_101ebff0();	// prints "<name>:" and one line per key ("(1):", "(2):", "(3+):") with the entry's name, through sub_10203dd0
};

// The table of key holders (the object passed to 0x1021f710 / 0x1021f920 / 0x1021ebc0 / 0x10255dd0): count at +0x14, pointers at +0x18.
// Find is the game's one lookup, inlined by all four; its default is ONE function-local static (guard 0x109f0866, object 0x109f0880,
// ctor 0x101ebce0 with -1), so every caller inlines this one (link audit E): `pSet->Find(i)`.
struct CKeyHolderSet
{
	char m_pad0000[0x14];
	int m_nHolders;	// 0x14
	CKeyHolder **m_pHolders;	// 0x18

	CKeyHolder *Find(int key)
	{
		for (int i = 0; i < m_nHolders; i++) {
			if (m_pHolders[i]->m_nKey == key)
				return m_pHolders[i];
		}
		static CKeyHolder s_default(-1);
		return &s_default;
	}
};
