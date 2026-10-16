// CUnknown101c2a90: helper object with a scale pointer at +0, float at +0x44 and byte flags at +0x48/+0x49 (set from CAI_BaseNPCTroika::vfunc259 and others); real name not yet known.
#pragma once

struct CUnknown101c2a90Scale
{
	char pad0[0x3c];
	float m_fScale;
};

class CUnknown101c2a90
{
public:
	CUnknown101c2a90Scale *m_pScale;
	char pad4[0x40];
	float m_fValue;
	char m_bFlag;
	char m_bFlag2;

	float sub_101c2a70();
	void sub_101c2a90(char value);
	void sub_101c2ad0(char value);
};
