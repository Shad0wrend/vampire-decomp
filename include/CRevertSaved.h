// CRevertSaved: declared by pcdecomp transplant for 0x101844b0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CPointEntity.h"
#include "string_t.h"
#include "CBaseEntity.h"

struct CRevertSavedFade	// fade duration and hold time, handed by value to the screen fade helper
{
	float m_flFadeTime;
	float m_flFadeHold;
};

class CRevertSaved : public CPointEntity
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	virtual datamap_t *vfunc82();	// slot 82: this class's datamap (0x105836dc)
	void sub_1000cb8a();
	void vfunc173(CBaseEntity *a, CBaseEntity *b, int c, int d);	// slot 173 "CRevertSaved::InputReload"-like: fades the screen of every player (colour at +0x1a0, duration +0x45c, hold +0x460, flags 2), then thinks at +0x454 after now

	string_t m_iszMessage;	// 0x0450
	float m_flReload;	// 0x454
	float m_loadTime;	// 0x0458
	CRevertSavedFade m_fade;	// 0x45c
};
