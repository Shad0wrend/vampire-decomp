// CAI_ChangeHintGroup: declared by pcdecomp transplant for 0x101cc110 from CLogicalEntity (0x1002b100);
// only what matched code needs, as plain members.
#pragma once
#include "string_t.h"

struct datamap_t;

class CAI_ChangeHintGroup
{
public:
	CAI_ChangeHintGroup *vfunc5(unsigned int flags);
	void sub_1000cb8a();
public:
	datamap_t * vfunc82();
	int vfunc117();
	char m_pad0000[0x450 - 0x0];
	int m_iSearchType;	// 0x0450
	string_t m_strSearchName;	// 0x0454
	string_t m_strNewHintGroup;	// 0x0458
	float m_flRadius;	// 0x045c
};
