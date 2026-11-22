// CEntryZ: a record found in a third global table by key (key at +0, section key at +0x10); a static default one
// (key -1) is the fallback.
#pragma once

class CEntryZ
{
public:
	int m_key;
	int m_pad04;
	const char *m_name;
	int m_unk0c;
	int m_nSection;	// 0x10
	CEntryZ(int key);	// 0x101eb000 (stub 0x10003544)
	~CEntryZ();	// 0x101eb030 (stub 0x10006451), an empty body: the destroy 0x10258850 of FindEntryZ's default (atexit stub 0x1000e318) jumps to it; its own unit (the loader 0x101eb380) sees the body
	int sub_101eb190();	// the position of the record of the section m_nSection in the table at 0x1073a2dc, minus one (stub 0x1001006e)
};

extern int g_1073a330;	// the number of entries
extern CEntryZ **g_1073a334;	// the entries

// The entry with this key, or a default one: its default is one function-local static, so every caller inlines this one
// (link audit E).
inline CEntryZ *FindEntryZ(int key)
{
	for (int i = 0; i < g_1073a330; i++) {
		if (g_1073a334[i]->m_key == key)
			return g_1073a334[i];
	}
	static CEntryZ s_default(-1);
	return &s_default;
}
