// CUnknown101eb050: an inventory item type record read from the "ItemTypes" data (real name not yet known):
// pooled strings at +4 (InternalName) and +8, flags at +0xc (1 wielded, 2 worn, 4 weapon) and the index of its
// inventory section at +0x10.
#pragma once

#include "CVFeat.h"

class CUnknown101eb050
{
public:
	int m_n00;
	int m_iInternalName;	// 0x04
	int m_iName;	// 0x08
	unsigned int m_flags;	// 0x0c
	int m_nSection;	// 0x10

	bool sub_101eb050(CVFeatKV *pKV);	// loads the record from its key; false for no key
};
