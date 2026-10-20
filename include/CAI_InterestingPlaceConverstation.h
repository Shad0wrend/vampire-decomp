// CAI_InterestingPlaceConverstation: point entity; only the members recovered so far (layout padded to the real offsets).
#pragma once

class CAI_InterestingPlaceConverstation
{
public:
	char pad0[0x454];
	const char *m_pszSound1;	// 0x454
	const char *m_pszSound2;	// 0x458
	char pad1[0x608 - 0x45c];
	int m_unk608;

	void sub_102db740(int value);
	void vfunc104();	// Precache: precaches the two sound names, warning about an invalid first one
	const char *sub_1000b5cd();	// the entity's name (stub of 0x100ab4f0)
};
