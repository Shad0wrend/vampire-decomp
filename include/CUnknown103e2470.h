// CUnknown103e2470: the flamethrower weapon (its flame-particle vector of 0x1c byte elements is at +0x450, a staging element
// at +0x464); declared apart from CWeaponRanged_FlameThrower because that header does not model the absolute offsets.
#pragma once

struct CFlameVec3
{
	float x, y, z;
};

struct CFlameEvent_t	// 0x3c byte record of the event list at +0x91c of the weapon
{
	int m_type;	// 0x00
	char m_pad04[4];
	CFlameVec3 m_origin;	// 0x08
	char m_pad14[0x2c - 0x14];
	CFlameVec3 m_angles;	// 0x2c
	int m_hOwner;	// 0x38
};

class CUnknown103e2470
{
public:
	char m_pad0000[0x450];
	int *m_pMemory;	// 0x450: vector of 0x1c byte elements (memory, allocation count, grow size, size, element pointer)
	int m_nAllocationCount;	// 0x454
	int m_nGrowSize;	// 0x458
	int m_nSize;	// 0x45c
	char *m_pElements;	// 0x460
	CFlameVec3 m_stagingOrigin;	// 0x464: element built by sub_103e2470 before it is appended
	CFlameVec3 m_stagingAngles;	// 0x470
	float m_stagingScale;	// 0x47c

	void sub_103e2470(CFlameEvent_t *pEvent);	// when the entity of the event's handle has type 0x57 or 0x50, builds a staging element (origin, angles, 3.0f) and appends it to the vector
};
