// CUnknown102dcf70: an interesting place type (name pointer at +0); loads its weighted activity lists from the data file.
// Real name not yet known.
#pragma once

#include "CKeyValuesX.h"

struct CUnknown102dcf70Entry	// one (activity id, weight) pair of a list
{
	int m_id;
	float m_flWeight;
};

class CUnknown102dcf70
{
public:
	const char *m_pszName;	// 0x00

	bool sub_102dcf70(CKeyValuesX *pKV, int *pCount, CUnknown102dcf70Entry *pEntries);	// fills up to 8 (id, weight) pairs from the sub keys of pKV (ids by name, weights as floats), then normalises the weights to 100; false without a key or a buffer
};
