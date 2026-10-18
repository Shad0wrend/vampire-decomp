// CAmbientGeneric: only the members that decompiled code needs are declared.
// Layout is declared flat (vptr and base members are padding) until the bases are recovered.
#pragma once

class CAmbientGeneric
{
public:
	char pad0[0x204];
	unsigned int m_spawnflags;

	unsigned int sub_101ac2f0();
	CAmbientGeneric *vfunc5(unsigned int flags);	// as in CLogicalEntity (transplant)
	void sub_1000cb8a();	// as in CLogicalEntity (transplant)
};
