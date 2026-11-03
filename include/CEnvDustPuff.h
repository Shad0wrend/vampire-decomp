// CEnvDustPuff: declared by pcdecomp transplant for 0x10114680 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CEnvDustPuff
{
public:
	CEnvDustPuff *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	char m_pad0000[0x450 - 0x0];
	float m_flScale;	// 0x0450
	unsigned int m_rgbaColor;	// 0x0454
};
