// CUnknown101da960: an "AffectsFilter" record (flag bits tested through sub_101da980, a clan, a strata and a chance);
// its flag names are looked up in a global pointer table (0x105a1bdc); real class name not yet known.
#pragma once

class CBaseEntity;
class CBaseCombatCharacter;

class CUnknown101da960
{
public:
	unsigned int m_nFlags;	// 0x00: bit n set = entry n of the name table is present
	int m_nClan;	// 0x04: clan index to match (-1 for any)
	int m_nStrata;	// 0x08: discipline strata to match (-1 for any)
	int m_nChance;	// 0x0c: percent that is checked against the global budget at 0x10739a7c (100 = always)

	const char *sub_10146650(int index);
	bool sub_10146660(int index);	// true when the entry exists (called through the stub at 0x1000d788)
	void sub_10146750();	// prints "[AffectsFilter]:" and every existing entry (0..14) with Msg
		// whether the filter lets pChar (acting on pTarget) through
};
