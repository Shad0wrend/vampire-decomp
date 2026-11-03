// CRotButton: a func_rot_button (a CBaseButton derivative). The header keeps the plain-member view the matched
// functions were written against; CRotButton is not declared to derive from CBaseButton here, so code that needs
// the inherited fields or vfunc slots casts `this` to CBaseButton (see CBaseButton.h for the slot table).
#pragma once

#include "Vector.h"
#include "CBaseButton.h"

class CRotButton
{
public:
	CRotButton *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void vfunc103();	// Spawn (slot 103, stub 0x10001262 -> 0x100c9a20)
	bool vfunc223();

	// fields the Spawn (vfunc103) uses, at their object offsets
	char m_pad0000[0x164];
	float m_flSpeed164;		// 0x164: movement speed
	char m_pad0168[0x190 - 0x168];
	Vector m_vecAngles190;	// 0x190: negated when flag 0x2 of +0x204 is set
	char m_pad019c[0x1ec - 0x19c];
	void *m_pfnTouch1ec;	// 0x1ec
	void *m_pfnThink1f0;	// 0x1f0: CBaseButton::sub_100c9250 or sub_100c9430
	char m_pad01f4[0x1fc - 0x1f4];
	int m_n1fc;				// 0x1fc: set to 2 when health > 0
	char m_pad0200[0x204 - 0x200];
	unsigned int m_flags204;	// 0x204: bit 2 negates the angles, bit 1 adds solid flag 4, 0x100 picks the touch function
	char m_pad0208[0x210 - 0x208];
	int m_nHealth210;		// 0x210
	char m_pad0214[0x26c - 0x214];
	void *m_pData26c;		// 0x26c: the "CBaseEntity::SetSolid" scope-trace name (0x106b8540 when null)
	char m_pad0270[0x4f8 - 0x270];
	int m_nState4f8;		// 0x4f8: set to 1
	float m_fl4fc;			// 0x4fc: scales the angles for the offset at +0x52c
	float m_fl500;			// 0x500: set to 1 when zero; -1 sets m_b55c
	char m_pad0504[0x520 - 0x504];
	Vector m_vec520;		// 0x520: copied from slot 221 (+0x374)
	Vector m_vec52c;		// 0x52c: slot 221 (+0x374) plus m_vecAngles190 * m_fl4fc
	char m_pad0538[0x55c - 0x538];
	char m_b55c;			// 0x55c: m_fl500 == -1.0f
	char m_b55d;			// 0x55d: set to 1
};
