// CNPC_VVampire: declared by pcdecomp transplant for 0x103c4920 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

#include "CBaseEntity.h"

class CNPC_VVampire : public CBaseEntity
{
public:
	CNPC_VVampire *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VVampire *sub_103c48e0();	// as in CKeepUpright (transplant)
	void vfunc103();	// slot 103: the game's CNPC_VVampire::vfunc103 (stub 0x10014876)
	void vfunc144(int info);	// slot 144 (Event_Killed-like): the game's CNPC_VVampire::vfunc144 (0x103c4f40, stub 0x1000b8a2)
public:
    virtual datamap_t * vfunc82();
};
