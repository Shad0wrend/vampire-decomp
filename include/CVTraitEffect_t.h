// CVTraitEffect_t: one trait effect read from a trait key file (name unconfirmed; the object starts with a
// CVTSDependencyRecord filled from the "Trait" string). Only what decompiled code needs.
#pragma once

#include "CVStatCost_t.h"

class CVTraitEffect_t
{
public:
	char m_pad0000[0x10];	// 0x00: the dependency record
	int m_nKind;	// 0x10: 7 once the cost was loaded
	int m_n14;	// 0x14: the modifier value
	CVStatCost_t m_cost;	// 0x18, 0x28 bytes
	int m_nDisplayOverride;	// 0x40

	CVTraitEffect_t();	// stub 0x10013d36 (0x101f69f0), run on each element by the array new of CVTraitEffectGroup_t::sub_101f73f0
	void sub_101f6b90(CVStatKV *pKV);	// loads the effect from its key: Trait, then Modifier (a modifier string) or else a cost (kind 7, "Unable to Parse TraitEffect!" when that fails), then DisplayOverride
	void sub_101f6a30(const char *pszModifier);	// parses a modifier string (stub 0x1000ea1b)
	void sub_101f6eb0();	// "CVTraitEffect_t::Debug_Display": DevMsg of the effect: "\t\t\t( <ERROR> )" for an empty record, else the trait text with the kind's name and the value (kind 6: the modifier name, kind 7: the cost between "\t( " and " )")
};
