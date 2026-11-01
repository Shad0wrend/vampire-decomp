// CLight: declared by pcdecomp transplant for 0x10130390 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members (the vtable pointer is not modelled: the pad covers 0x00..0x44f).
#pragma once

#include "CBaseEntity.h"

struct inputdata_t;

class CLight
{
public:
	CLight *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	void sub_101308d0();	// "CLight::FadeThink": steps the current light level at +0x458 toward the target at +0x459, sets the light style, re-arms the think (+0x17c)
	bool vfunc110(const char *szKeyName, const char *szValue);	// "CLight::KeyValue": "pitch" sets the pitch of the angles (slots 221 / 218), anything else goes to the base
	bool sub_1000fc86(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (jump stub)
	void vfunc103();	// slot 103 (Spawn): without a name (+0x26c) only the base worker; else clamps the fade time and, for a style >= 32, sets the engine light style from the pattern (LightStyle, engine slot 62)
	void vfunc173(int a, int b, int useType, int d);	// slot 173 (Input use-like): for a style >= 32, asks the base ShouldToggle(useType, !(flags204 & 1)) and on true calls sub_100115fe()
	void sub_100115fe();
	void sub_10130800(inputdata_t *pInput);	// "CLight::InputSetPattern": remembers the current level, the new target level (first character of the pattern) and the pattern, restarts the fade think
	void sub_100ac4e0(int func, int thinkTime, const char *szContext);	// CBaseEntity::ThinkSet (stub 0x10007fe5)
	void sub_10130610();	// LightStyle(m_iStyle, the pattern, or "m" when it is empty, one character or starts with 'a') on the engine (slot 62), then clears bit 0 of the flags at +0x204
	void sub_10130690();	// LightStyle(m_iStyle, "a") on the engine (slot 62), then sets bit 0 of the flags at +0x204

	char m_pad00[0x17c];
	float m_flNextThink;	// 0x17c
	char m_pad180[0x204 - 0x180];
	unsigned int m_flags204;	// 0x204
	char m_pad208[0x450 - 0x208];
	int m_iStyle;	// 0x450
	const char *m_pattern;	// 0x454
	char m_cCurrent;	// 0x458
	char m_cTarget;	// 0x459
	float m_flFadeTime;	// 0x45c
public:
	typedef int Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
	void vfunc77();	// as in CNPC_VBach (transplant)
	void vfunc78();	// as in CNPC_VBach (transplant)
	void vfunc119();	// as in CNPC_VBach (transplant)
};
