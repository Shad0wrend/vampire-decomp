// CVTraitEffect_t: one trait effect read from a trait key file (name unconfirmed; the object starts with a
// CVTSDependencyRecord filled from the "Trait" string). Only what decompiled code needs.
#pragma once

#include "CVStatCost_t.h"

class CVModInfo_t;

class CVTraitEffect_t
{
public:
	int m_nType;	// 0x00
	const char *m_psz04;	// 0x04
	char m_pad0008[8];	// 0x08: the rest of the dependency record
	int m_nKind;	// 0x10: 7 once the cost was loaded
#define m_n10 m_nKind
	int m_n14;	// 0x14: the modifier value
	CVStatCost_t m_cost;	// 0x18, 0x28 bytes
	int m_nDisplayOverride;	// 0x40

	CVTraitEffect_t();	// stub 0x10013d36 (0x101f69f0), run on each element by the array new of CVTraitEffectGroup_t::sub_101f73f0
	void sub_101568f0(CVStatKV *pKV);	// loads the effect from its key: Trait, then Modifier (a modifier string) or else a cost (kind 7, "Unable to Parse TraitEffect!" when that fails), then DisplayOverride
		// parses a modifier string (stub 0x1000ea1b)
	void sub_10156b60();	// "CVTraitEffect_t::Debug_Display": DevMsg of the effect: "\t\t\t( <ERROR> )" for an empty record, else the trait text with the kind's name and the value (kind 6: the modifier name, kind 7: the cost between "\t( " and " )")
	const char *sub_10156d40(const char *pszName);	// "CVTraitEffect_t::GetDisplayString": "<ERROR>" for an empty record, else formats pszName (the trait text when null / empty) with the kind's name and the value into the shared buffer at 0x1074dea8 ("%s  %s  %d", kind 0 without a name and kind 9 / 10 with a percent sign, kind 6 also DevMsg's the text)
	void sub_10156c60(void *pOut);	// writes the Debug_Display line to an output object (sub_10203df0 / stub 0x100045ed): "\t\t\t( <ERROR> )" for an empty record, else "( trait  kind  value )" (kind 6: the modifier name instead of the value)
	void sub_10156af0(CVModInfo_t *pInfo, int *pResult);	// hands the result to the caller when the trait's name (+4 of the record) passes sub_10205430 and the kind is 7 with a cost that sub_101fc160 does not refuse: stores the cost's address into *pResult (called for every effect by sub_101f7640)
};
