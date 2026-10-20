// CBaseToggle: declared by pcdecomp transplant for 0x101c0e70 from CBaseCineCam (0x1006d950);
// only what matched code needs, as plain members.
#pragma once

class CBaseToggle
{
public:
	CBaseToggle *vfunc5(unsigned int flags);
	bool vfunc110(const char *szKeyName, const char *szValue);	// "CBaseToggle::KeyValue": lip (float at +0x504) and distance (float at +0x4fc), anything else to the base
	bool sub_1000fc86(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (jump stub)
};
