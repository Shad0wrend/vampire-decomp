// CLight: declared by pcdecomp transplant for 0x10130390 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (the vtable pointer is not modelled: the pad covers 0x00..0x44f).
#pragma once

class CLight
{
public:
	CLight *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101308d0();	// "CLight::FadeThink": steps the current light level at +0x458 toward the target at +0x459, sets the light style, re-arms the think (+0x17c)
	bool vfunc110(const char *szKeyName, const char *szValue);	// "CLight::KeyValue": "pitch" sets the pitch of the angles (slots 221 / 218), anything else goes to the base
	bool sub_1000fc86(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (jump stub)

	char m_pad00[0x450];
	int m_iStyle;	// 0x450
	const char *m_pattern;	// 0x454
	char m_cCurrent;	// 0x458
	char m_cTarget;	// 0x459
	float m_flFadeTime;	// 0x45c
};
