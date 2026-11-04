// CBaseParticleEntity: declared by pcdecomp transplant for 0x1042b590 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (no vtable pointer declared: the offsets are the real ones).
#pragma once

#include "CConstraintAnchor.h"

struct CParticleEdict_t;
struct CParticleTransmitInfo_t;

class CBaseParticleEntity : public CConstraintAnchorBase
{
public:
	CBaseParticleEntity();
	CBaseParticleEntity *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc241(int a, CParticleTransmitInfo_t *pInfo, int c, int d);	// "CBaseParticleEntity::...": false when bit 6 of the byte at +0x19c is set; asks the global at 0x1070b22c (slot 105) about d and the object slot 7(slot 3()) of the edict's object at +0x40; if it says no, false; else true unless sub_101d1a90(pInfo->field40 (0 when the flag byte at +0x44 is clear), this) holds

	char m_pad0004[0x19c - 0x4];
	unsigned char m_flags19c;	// 0x019c
	char m_pad019d[0x2e0 - 0x19d];
	CParticleEdict_t *m_pEdict2e0;	// 0x02e0
public:
	int vfunc79();
	virtual int vfunc80();
	int vfunc81();
	void vfunc113();	// slot 113 (plain member): sub_10008c5b(this), then CBaseEntity::vfunc113
};
