// CPropHaunted: declared by pcdecomp transplant for 0x10212fd0 from CKeepUpright (0x10029200);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CPropHaunted : public CBaseEntity
{
public:
	CPropHaunted *sub_102139f0();
	void vfunc180();	// slot 180 (declared as a plain member): CBaseEntity::vfunc180, then for a live ghost entity (handle at +0x7d0) runs its slot 242 and schedules its next think 5.0 seconds ahead
	void vfunc104();	// slot 104 "Precache": CBreakableProp::vfunc104, then precaches the models named at +0x7bc / +0x7c0 and the sounds named at +0x7c4, +0x7c8, +0x7cc when set
	void sub_1000978c();	// CBreakableProp::vfunc104 (stub of 0x1018fb50), called directly
};
