// CEntryX: a record found in a global table by key (key at +0, name at +8); a static default one (key -1) is the fallback.
#pragma once

class CEntryX
{
public:
	int m_key;
	int m_pad;
	const char *m_name;
	CEntryX(int key);	// stub 0x100066ea
	~CEntryX();	// stub 0x1000c9f0
};

extern int g_1073a2c0;	// the number of entries
extern CEntryX **g_1073a2c4;	// the entries

// The entry with this key, or a default one: the game's one function (inlined by 0x101ebe60 and 0x101ebf30) keeps
// its default in one function-local static, so every caller inlines this one (link audit E).
inline CEntryX *FindEntry(int key)
{
	for (int i = 0; i < g_1073a2c0; i++) {
		if (g_1073a2c4[i]->m_key == key)
			return g_1073a2c4[i];
	}
	static CEntryX s_default(-1);
	return &s_default;
}
