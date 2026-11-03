// CUnknown101e56e0: a cost record of a stat-based skill (a table of 16 byte entries at +0x20, count at +0x1c, kind at +0x10);
// real name not yet known. Also the holder class that points to it (the owner of the skill functions at 0x101e7fb0 ...).
#pragma once
#include "CBaseCombatWeapon.h"

#include "CBaseCombatCharacter.h"
#include "CVFeat_t.h"

extern char g_106b8540[];	// the empty string

struct CUnknown101e56e0Id	// the record's id (first base, at +0)
{
	int m_id;
};

// The record's name holder (second base, at +4). Get() returns "" for a null name; the game's code reads it through the
// adjusted address (add eax, 4; mov eax, [eax]), which is what an inline Get() on the second base gives: write
// `g_10739d24[i]->Get()` and loops that return from inside (see 0x101eb050: a separate inline FindXxx helper with an
// early `return` and a final `return -1`, which also explains late `push ebx` and duplicated epilogues).
struct CUnknown101e56e0Name
{
	const char *m_psz;
	const char *Get() { return m_psz ? m_psz : g_106b8540; }
};

class CUnknown101e56e0 : public CUnknown101e56e0Id, public CUnknown101e56e0Name
{
public:
	char m_pad0008[0x08];
	int m_nKind;	// 0x10
	const char *m_pszName14;	// 0x14: the display name
	int m_n18;	// 0x18
	int m_nCount1c;	// 0x1c: number of entries of the first table
	char *m_pTable20;	// 0x20: 16 byte entries (CUnknown102043a0)
	int m_nCount24;	// 0x24: number of entries of the second table
	char *m_pTable28;	// 0x28: 16 byte entries (CUnknown102043a0)

	CUnknown101e56e0(int id) { sub_101e4f30(id); }	// constructor (stub 0x1001246d), the one of the shared default record
	~CUnknown101e56e0() { sub_101e4f70(); }	// frees the three tables (+0x20, +0x28, +0x30)
	void sub_101e4f30(int id);
	void sub_101e4f70();
	int sub_101e56e0(CBaseCombatCharacter *pCharacter);	// the cost of the skill for the character (stub 0x1000f03d), clamped to its limit
	int sub_101e54c0(CBaseCombatCharacter *pCharacter);	// the sum over the first table of the stat values the character has (\"Feats::FeatValue\"), at most the limit at +0x18
	int sub_101e5b30(void *pCharacter);	// the sum over the second table of the stat values the character has (stub 0x1000c036)
	void sub_101e5e60(CBaseCombatCharacter *pCharacter);	// debug print of the cost formula for the character ("name<id> ( stat + stat <stat> ...):\tcost"), handed to the debug output function pointer (sub_10203dd0)
};

// The global table of these records is the feat table of CVFeat_t.h (count g_10739d20, array g_10739d24, declared
// there as CVFeat_t **): a record is a feat seen as CUnknown101e56e0, so read the table through Records(). Find is the
// game's one lookup of the record of an id, CVFeatSet::Find: its default record is one function-local static (guard
// 0x109f0a8c, object 0x109f0ac0), never a static of its own (link audit E).
inline CUnknown101e56e0 **Records() { return (CUnknown101e56e0 **)g_10739d24; }

struct CUnknown101e56e0Table
{
	static CUnknown101e56e0 *Find(int id) { return (CUnknown101e56e0 *)CVFeatSet::Find(id); }
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
