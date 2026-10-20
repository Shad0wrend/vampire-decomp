// CFunc_Dust: declared by pcdecomp transplant for 0x10113cc0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CFunc_Dust
{
public:
	CFunc_Dust *vfunc5(unsigned int flags);
	void sub_10004fca();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CFunc_Dust::KeyValue": StartDisabled (bit 0 of the flags at +0x474, set unless the value starts with '1'), Alpha (byte at +0x453) and Frozen (bit 2 of the flags), anything else goes to CBaseEntity::vfunc110
	bool sub_1009e430(const char *szKeyName, const char *szValue);	// CBaseEntity::vfunc110 (stub 0x1000fc86), called directly
};
