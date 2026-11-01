// CFuncPlatRot: declared by pcdecomp transplant for 0x1015a550 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members (the object is addressed as a plain struct: the vtable pointer is at +0).
#pragma once

#include "Vector.h"

class CFuncPlatRot
{
public:
	CFuncPlatRot *vfunc5(unsigned int flags);
	void vfunc242();	// slot 242 of the rotating platform: the CFuncPlat slot 242, then the angular move of the final angles (+0x574) over the time left to the move's end
	void vfunc243();	// slot 243 of the rotating platform: the CFuncPlat slot 243, then the angular move of the start angles (+0x580) over the time left to the move's end
	void vfunc244();	// slot 244 of the rotating platform: the CFuncPlat slot 244, then SetLocalAngularVelocity(g_1070d9d0) and the think-style virtual call slot 64 with the final angles (+0x574)
	void vfunc245();	// slot 245 of the rotating platform: the CFuncPlat slot 245, then SetLocalAngularVelocity(g_1070d9d0), then slot 64 with the start angles (+0x580)
	void sub_1015a140();	// "SetupRotation": with a final angle (+0x54c) set, the start angles (+0x580) are the entity's angles (slot 221) and the final angles (+0x574) are the angles plus the move axis (+0x190) scaled by the final angle (the axis helper sub_10009967 runs first), and a parented entity gets them set (slot 64); without one both are the null vector
	void sub_10009967();	// CBaseToggle::AxisDir (stub 0x10009967), called directly

	char m_pad0000[0x190];
	Vector m_vecMoveAng;	// 0x190
	char m_pad019c[0x26c - 0x19c];
	void *m_pParent26c;	// 0x26c
	char m_pad0270[0x54c - 0x270];
	float m_flFinalAngle;	// 0x54c
	char m_pad0550[0x574 - 0x550];
	Vector m_vecFinalAngle;	// 0x574
	Vector m_vecStart;	// 0x580
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
