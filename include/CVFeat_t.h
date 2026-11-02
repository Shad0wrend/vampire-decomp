// CVFeat_t: one feat of the vampire feat list ("Unable to load VFeat data"); real layout only partly known.
#pragma once

#include "CVDmg_t.h"

struct CVFeatKV	// a KeyValues-like object (slot 10 = GetInt, slot 13 = GetString)
{
	virtual const char *GetName(); virtual void v1(); virtual CVFeatKV *FindKey(const char *pszName);	/* slot 2: the sub key of that name, 0 when none */ virtual CVFeatKV *GetNextKey(); virtual CVFeatKV *GetFirstSubKey();	/* slot 4 */
	virtual CVFeatKV *GetNextSubKey();	/* slot 5 */ virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
	virtual int GetInt(const char *pszKey, int nDefault);
	virtual float GetFloat(const char *pszKey, float flDefault);
	virtual char GetBool(const char *pszKey, int nDefault);
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
	union { char m_pad0018[0x20 - 0x18]; struct { int m_nMaxValue; int m_nBase; }; };	// 0x18: "MaxValue" (default 10); 0x1c: the count of the "Base%d" keys
	char *m_p20;	// 0x20: the "Base%d" blocks (m_nBase blocks of 16 bytes); a table freed by the destructor
	int m_nEffects;	// 0x24: the count of the "Automatic%d" keys
	CVDmgBlock16_t *m_pEffects;	// 0x28: m_nEffects blocks of 16 bytes (kind, stat, ?, multiplier)
	union { int m_pad002c; int m_nDisplay2nd; };	// 0x2c: the count of the "Display2nd%d" keys
	char *m_p30;	// 0x30: the "Display2nd%d" blocks; a table freed by the destructor
	union { char m_pad0034[8]; struct { int m_nPCWeighting; int m_nNPCWeighting; }; };	// 0x34: the "PCWeighting" / 0x38 "NPCWeighting" entries of the global named list 0x10739194 (the object is 0x3c bytes, CVFeatMgr allocates 0x3c)

	CVFeat_t(int a);	// 0x101e4f30: the default feat (id a at +0 and +0x10, +0x18 = 10, the rest cleared)
	~CVFeat_t();	// 0x101e4f70 (stub 0x10014c72): frees the tables at +0x20 / +0x28 / +0x30; the exit destroy of the static default feat (0x100dba10, stub 0x1001509b) runs it
	void sub_101e50b0(CVFeatKV *pKV);	// 0x101e50b0 (ret 8 = the key and an unused...): loads MaxValue, then counts and builds the Base%d / Automatic%d / Display2nd%d block tables (operator new(n * 16) with CVDmgBlock16_t constructors, each block parsed with CVDmgBlock16_t::sub_10204570(sub_10203d60(GetString(key, "")))), then PCWeighting / NPCWeighting via the named list 0x10739194 and the default list 0x106c7c34; "Unable to load VFeat data" without a key
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

struct CVFeatSet	// the feat table as one object: count g_10739d20, elements g_10739d24 (the next dword)
{
	CVFeat_t *Lookup(int id)	// a member, not a static function: VC6 gives its static's guard one communal name
	{
		for (int i = 0; i < g_10739d20; i++) {
			if (*(int *)g_10739d24[i] == id)
				return g_10739d24[i];
		}
		static CVFeat_t s_default(-1);
		return &s_default;
	}
	static CVFeat_t *Find(int id) { return ((CVFeatSet *)&g_10739d20)->Lookup(id); }
};
