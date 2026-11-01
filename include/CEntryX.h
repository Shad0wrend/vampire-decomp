// CEntryX: a record found in a global table by key (key at +0, name at +8); a static default one (key -1) is the fallback.
#pragma once

#include "CVDmg_t.h"
#include "CVFeat_t.h"

class CEntryX
{
public:
	int m_key;
	int m_pad;
	const char *m_name;
	CVDmg_t m_dmg;	// 0x0c
	int m_n50;	// 0x50
	int m_n54;	// 0x54
	CEntryX(int key);	// stub 0x100066ea
	~CEntryX();	// stub 0x1000c9f0
	char sub_101eb6b0(void *pKV);	// stub 0x10005d4e: reads the record from a "BotchType" data node (the node is a CVFeatKV, CVFeat_t.h; the matched caller passes its own IKV, so the parameter stays void *: cast to CVFeatKV * inside). InternalName (+4) and Name (+8) are pooled string ints (sub_102038e0 / sub_10203920), "OwnerDamage" is parsed into m_dmg (CVDmg_t::sub_101fb000), "AmmoLost" (+0x50: -1 for "Clip", else atoi), flags at +0x54 (bit 0 "ForceReload", bit 1 "ItemBreaks", bit 2 "FallToGround", via GetInt(name, 0)), "ClientEffect" is read and dropped; false for a null node
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
