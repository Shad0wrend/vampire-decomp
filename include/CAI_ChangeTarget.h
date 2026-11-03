// CAI_ChangeTarget: declared by pcdecomp transplant for 0x101cc0e0 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"

struct datamap_t;

class CAI_ChangeTarget
{
public:
	CAI_ChangeTarget *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	char vfunc117();
	char m_pad0000[0x450 - 0x0];
	string_t m_iszNewTarget;	// 0x0450
};
