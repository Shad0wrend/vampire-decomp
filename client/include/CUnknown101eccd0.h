// CUnknown101eccd0: a record with an index (+0), a name (+8) and two clan masks (excluded at +0xc, required at +0x10);
// real name not yet known.
#pragma once

class CUnknown101eccd0
{
public:
	int m_index;	// 0x00
	char pad4[4];
	const char *m_name;	// 0x08
	unsigned int m_excludedMask;	// 0x0c
	unsigned int m_requiredMask;	// 0x10

	void sub_10150820();	// debug dump: "(%d): %s", then "Excluded: %s" per bit of the excluded mask and "Required: %s" per bit of the required mask
};
