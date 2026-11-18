// CEnvLight: declared by pcdecomp transplant for 0x10130b60 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "CLight.h"

class CEnvLight : public CLight
{
public:
	CEnvLight *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CEnvLight::KeyValue": the key "light" (case-insensitive) is taken as handled (true), anything else goes to CLight::vfunc110
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	void vfunc103();	// slot 103 (0x10130b40): a tail call of CLight::vfunc103 (a base declares it plain vfunc103: this one hides it)
};
