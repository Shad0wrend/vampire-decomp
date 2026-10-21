// CUnknown101e56e0: a cost record of a stat-based skill (a table of 16 byte entries at +0x20, count at +0x1c, kind at +0x10);
// real name not yet known. Also the holder class that points to it (the owner of the skill functions at 0x101e7fb0 ...).
#pragma once

#include "CBaseCombatCharacter.h"

struct CUnknown101e56e0Id	// the record's id (first base, at +0)
{
	int m_id;
};

struct CUnknown101e56e0Name	// the record's name holder (second base, at +4; reached through the adjusted address)
{
	const char *m_psz;
	const char *Get() { return m_psz; }
};

class CUnknown101e56e0 : public CUnknown101e56e0Id, public CUnknown101e56e0Name
{
public:
	char m_pad0008[0x08];
	int m_nKind;	// 0x10

	CUnknown101e56e0(int id) { sub_101e4f30(id); }	// constructor (stub 0x1001246d), the one of the shared default record
	~CUnknown101e56e0() { sub_101e4f70(); }	// frees the three tables (+0x20, +0x28, +0x30)
	void sub_101e4f30(int id);
	void sub_101e4f70();
	int sub_101e56e0(CBaseCombatCharacter *pCharacter);	// the cost of the skill for the character (stub 0x1000f03d), clamped to its limit
	int sub_101e5b30(void *pCharacter);	// the sum over the second table of the stat values the character has (stub 0x1000c036)
};

// The global table of these records (count at 0x10739d20, array at 0x10739d24). Find is the game's one lookup of the
// record of an id: its default record is one function-local static, so every function that looks a record up
// inlines Find instead of a static of its own (link audit E).
extern int g_10739d20;
extern CUnknown101e56e0 **g_10739d24;

struct CUnknown101e56e0Table
{
	static CUnknown101e56e0 *Find(int id)
	{
		for (int i = 0; i < g_10739d20; i++) {
			if (g_10739d24[i]->m_id == id)
				return g_10739d24[i];
		}
		static CUnknown101e56e0 s_default(-1);
		return &s_default;
	}
};

struct CUnknown101e56e0Holder
{
	int m_pad0000;
	CUnknown101e56e0 *m_pCost;	// 0x04
};

class CUnknown101e7fb0
{
public:
	char m_pad0000[0x1c];
	CUnknown101e56e0Holder *m_pHolder;	// 0x1c

	int sub_101e7fb0(CBaseCombatCharacter *pCharacter, CBaseCombatCharacter *pTarget);	// 10 * (10 - cost for pCharacter + the stat 0xb of pTarget's stat list of type 1)
};
