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
	char m_pad0000[0x460 - 0x0];
};
