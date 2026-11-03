// CEnvFloatingCamera: declared by pcdecomp transplant for 0x10103900 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once

struct datamap_t;

class CEnvFloatingCamera
{
public:
	CEnvFloatingCamera *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	char m_pad0000[0x450 - 0x0];
	float m_flAmplitude;	// 0x0450
	float m_flFrequency;	// 0x0454
	float m_flDuration;	// 0x0458
	bool m_bEnabled;	// 0x045c
	char m_pad045d[0x460 - 0x45d];
};
