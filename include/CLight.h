// CLight: declared by pcdecomp transplant for 0x10130390 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CLight
{
public:
	CLight *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101308d0();	// "CLight::FadeThink": steps the current light level at +0x458 toward the target at +0x459, sets the light style, re-arms the think (+0x17c)

	char m_pad04[0x450 - 4];
	int m_iStyle;	// 0x450
	const char *m_pattern;	// 0x454
	char m_cCurrent;	// 0x458
	char m_cTarget;	// 0x459
	float m_flFadeTime;	// 0x45c
};
