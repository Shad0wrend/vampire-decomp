// CBreakableSurface: declared by pcdecomp transplant for 0x101135c0 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CBreakableSurface : public CBaseEntity
{
public:
	CBreakableSurface *vfunc5(unsigned int flags);
	void vfunc103();	// slot 103 (Spawn): CBreakable::vfunc103, then rejects the surface (Warning + remove) when its face check (+0x904) found several faces (1) or a face that is not a quad (2), else sets collision group 4 and clears the byte at +0x4c4 and the dword at +0x454; finally sets flag 0x20000000 and SetOccludesSound(1)
	void sub_1010d6a0();	// CBreakable::vfunc103 (stub 0x1000a10f), called directly

	char m_pad03e0[0x454 - 0x3e0];
	int m_n454;
	char m_pad0458[0x4c4 - 0x458];
	char m_b4c4;
	char m_pad04c5[0x904 - 0x4c5];
	int m_nFaceCheck;	// 0x904
};
