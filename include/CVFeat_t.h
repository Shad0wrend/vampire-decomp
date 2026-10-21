// CVFeat_t: one feat of the vampire feat list ("Unable to load VFeat data"); real layout only partly known.
#pragma once

#include "CVDmg_t.h"

struct CVFeatKV	// a KeyValues-like object (slot 10 = GetInt, slot 13 = GetString)
{
	virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
	virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual int GetInt(const char *pszKey, int nDefault);
	virtual void v11(); virtual void v12();
	virtual const char *GetString(const char *pszKey, const char *pszDefault);
};

class CVFeat_t
{
public:
	int m_pad0000;
	int m_iInternalName;	// 0x04
	int m_iHelpText;	// 0x08
	unsigned int m_flags;	// 0x0c: bit 0 = disabled
	int m_pad0010;
	int m_iName;	// 0x14
	char m_pad0018[0x24 - 0x18];
	int m_nEffects;	// 0x24
	CVDmgBlock16_t *m_pEffects;	// 0x28: m_nEffects blocks of 16 bytes (kind, stat, ?, multiplier)

	CVFeat_t(int a);	// 0x101e4f30: the default feat (id a at +0 and +0x10, +0x18 = 10, the rest cleared)
	~CVFeat_t();	// the destructor run at exit for the static default feat (stub 0x1001509b)
	void sub_101e4fe0(CVFeatKV *pKV);	// loads the feat from its key: Name, InternalName, HelpText and the Disabled flag; Msg when there is no key
	int sub_101e5b30(void *pCharacter);	// the sum over the effects of kind 0 / 1 of the multiplier-scaled value of the effect's stat in the character's stat list of that kind (0 without a character)
	int sub_101e5e10(void *pEntity);	// the feat's value for an entity (stub 0x10015537), used for the dice roll bonus
	int sub_101e56e0(void *pEntity);	// the feat's value for an entity (stub 0x1000f03d)
	void sub_101e5e60(void *pCharacter);	// stub 0x10007aa4: prints the feat for the character (the feat list console command)
};

// The game's one feat lookup: the global vector of feats (count 0x10739d20, elements 0x10739d24) searched by id (+0); its
// default feat is one function-local static (guard 0x109f0a8c, object 0x109f0ac0), so every function that looks a feat up
// inlines Find instead of a static of its own.
extern int g_10739d20;
extern CVFeat_t **g_10739d24;

struct CVFeatSet
{
	static CVFeat_t *Find(int id)
	{
		for (int i = 0; i < g_10739d20; i++) {
			if (*(int *)g_10739d24[i] == id)
				return g_10739d24[i];
		}
		static CVFeat_t s_default(-1);
		return &s_default;
	}
};
