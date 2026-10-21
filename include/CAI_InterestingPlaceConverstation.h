// CAI_InterestingPlaceConverstation: point entity; only the members recovered so far (layout padded to the real offsets).
#pragma once

// 0x18-byte member objects at +0x46c (six of them), released by sub_100cd2d0.
struct CAI_IPItem
{
	char m_pad[0x18];

	void sub_100cd2d0();
};

// CUtlVector of 4-byte elements at +0x518: memory (pointer, allocation count, grow size), size, element pointer.
struct CAI_IPVec
{
	int *m_pMemory;
	int m_allocationCount;
	int m_growSize;
	int m_size;
	int *m_pElements;
};

class CAI_InterestingPlaceConverstation
{
public:
	char pad0[0x454];
	const char *m_pszSound1;	// 0x454
	const char *m_pszSound2;	// 0x458
	char pad45c[0x46c - 0x45c];
	CAI_IPItem m_items46c[6];	// 0x46c
	char pad4fc[0x518 - 0x4fc];
	CAI_IPVec m_vec518;	// 0x518
	char pad52c[0x608 - 0x52c];
	int m_unk608;

	void sub_102db740(int value);
	void vfunc104();	// Precache: precaches the two sound names, warning about an invalid first one
	const char *sub_1000b5cd();	// the entity's name (stub of 0x100ab4f0)
	CAI_InterestingPlaceConverstation *vfunc5(unsigned char flags);	// scalar deleting destructor: tears down the vector at +0x518 and the six items at +0x46c, the base destructor body (sub_1000cb8a), and frees the object when bit 0 of flags is set
	void sub_1000cb8a();	// base class destructor body (stub 0x1000cb8a)
};
