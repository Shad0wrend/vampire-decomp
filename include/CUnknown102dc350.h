// CUnknown102dc350: object holding a handle array (+0x518, count at +0x524) and a byte flag at +0x516;
// real name not yet known.
#pragma once

class CUnknown102dc350
{
public:
	char pad0[0x516];
	char m_bFlag;
	char pad517;
	unsigned int *m_pHandles;
	char pad51c[8];
	int m_nHandles;

	void sub_102dc350();
};
