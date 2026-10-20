// CEntryY: a record found in a second global table by key (key at +0, name at +8, flags at +0xc); a static default
// one (key -1) is the fallback.
#pragma once

#include "CUnknown101f4c80.h"

class CEntryY
{
public:
	int m_key;
	int m_pad;
	const char *m_name;
	int m_unk0c;
	CEntryY(int key);	// 0x101eab80 (stub 0x100090ac)
	~CEntryY() {}	// the destroy function behind the atexit stub 0x1000eb33 is a bare `ret`
};

extern int g_1073a2dc;	// the number of entries
extern CEntryY **g_1073a2e0;	// the entries

// The entry with this key, or a default one: the game's one lookup keeps its default in one function-local static, so
// every caller inlines this one (link audit E).
inline CEntryY *FindEntryY(int key)
{
	for (int i = 0; i < g_1073a2dc; i++) {
		if (g_1073a2e0[i]->m_key == key)
			return g_1073a2e0[i];
	}
	static CEntryY s_default(-1);
	return &s_default;
}
