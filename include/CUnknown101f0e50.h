// CUnknown101f0e50: small record with seven dwords of which five are cleared by its constructor-like
// initialiser (fields +0x0, +0x4, +0x8, +0x14, +0x18); real name not yet known.
#pragma once

class CVTraitEffectGroup_t;
class CUnknown101f1c70;

// The object whose list of applied trait ids lives at +0x1460 (CUnknown101f1c70); real name not yet known.
class CTraitOwnerX
{
public:
	char m_pad0000[0x1460];
	CUnknown101f1c70 *m_pad1460Marker[0];
};

class CUnknown101f0e50
{
public:
	int m_f00;
	int m_f04;	// element count
	int m_f08;
	int m_f0c;
	int m_f10;
	int m_f14;
	int m_f18;

	CUnknown101f0e50 *sub_101f0e50();	// zeroes the fields above and returns this
	bool sub_101f18f0(int index);	// "IsValidIndex": index is not -1 and below the count at +0x4
	bool sub_101f82d0(int index);	// provisional, like sub_101f18f0 (transplant)
	bool sub_101f11f0(void *pData);	// parses one reaction category of the data file: its InternalName picks the entry of the pointer array (+0x8, count +0x4) and every ReactionGroup key is handed to that entry (sub_101f0bc0); false (with a Msg) for no data or a missing entry
	CVTraitEffectGroup_t *sub_101f8480(int index);	// the entry of the pointer array (+0x8) for a valid index, else the function-local static default entry (stub 0x1000c5d1)
	void sub_101f9af0(CTraitOwnerX *pOwner, const char *pszName);	// stub 0x1000181b: applies a named trait of the entry to the owner
	void sub_101f8510(CTraitOwnerX *pOwner, int index);	// walks the effects of the entry for index: kind 5 effects are removed from the owner's applied list (+0x1460, sub_101f1c70), kind 6 effects are handed to sub_101f9af0 with their name ("" when none)
};
