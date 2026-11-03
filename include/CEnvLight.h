// CEnvLight: declared by pcdecomp transplant for 0x10130b60 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

class CEnvLight
{
public:
	CEnvLight *vfunc5(unsigned int flags);
	void sub_1000cb8a();
	bool vfunc110(const char *szKeyName, const char *szValue);	// slot 110 "CEnvLight::KeyValue": the key "light" (case-insensitive) is taken as handled (true), anything else goes to CLight::vfunc110
	char m_pad0000[0x460 - 0x0];
};
