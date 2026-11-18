// CFuncKeyframedMover: keyframed mover brush entity (CBaseEntity based); only what decompiled code needs.
#pragma once
#include "CBaseKeyframedMover.h"

#include "CBaseEntity.h"
#include "COutputEvent.h"

class CFuncKeyframedMover : public CBaseKeyframedMover
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	CFuncKeyframedMover *sub_10223330();	// constructor (the base is CBaseKeyframedMover, not modelled)
	virtual void vfunc103();	// slot 103 "CFuncKeyframedMover::Spawn": AddFlag(0x1000), CBaseEntity::vfunc103, SetModel(model name), SetSolid(1) (inlined scope trace), AddSolidFlags(4) (inlined scope trace) when spawn flag 1 is set, then slot 223
	virtual CBaseEntity *vfunc5(unsigned int flags);	// scalar deleting destructor (plain member): the eight outputs, then the base body, then the entity delete when bit 0 of flags is set
	void sub_1000cb8a();	// destructor body (the CBaseEntity part)

};
