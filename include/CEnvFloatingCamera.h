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
	typedef datamap_t *Datamap82;	// staged: becomes datamap_t *
	Datamap82 vfunc82();
};
