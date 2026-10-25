// CFuncKeyframedMover: keyframed mover brush entity (CBaseEntity based); only what decompiled code needs.
#pragma once

#include "CBaseEntity.h"
#include "COutputEvent.h"

class CFuncKeyframedMover : public CBaseEntity
{
public:
	bool vfunc223();	// "CBaseEntity::IsSolidFlagSet" (slot 223): scope trace, reports when bit 2 of the byte at +0x2b4 is clear, returns true
	void sub_100a6150(int a, int b, int c);	// reports a message
	CFuncKeyframedMover *sub_10223330();	// constructor (the base is CBaseKeyframedMover, not modelled)
	virtual void vfunc103();	// slot 103 "CFuncKeyframedMover::Spawn": AddFlag(0x1000), CBaseEntity::vfunc103, SetModel(model name), SetSolid(1) (inlined scope trace), AddSolidFlags(4) (inlined scope trace) when spawn flag 1 is set, then slot 223
	CFuncKeyframedMover *vfunc5(unsigned int flags);	// scalar deleting destructor (plain member): the eight outputs, then the base body, then the entity delete when bit 0 of flags is set
	void sub_1000cb8a();	// destructor body (the CBaseEntity part)

	char m_pad03e0[0x4a4 - 0x3e0];
	COutputEvent m_Output4a4;
	COutputEvent m_Output4bc;
	char m_pad04d4[0x570 - 0x4d4];
	COutputEvent m_Output570;
	COutputEvent m_Output588;
	COutputEvent m_Output5a0;
	COutputEvent m_Output5b8;
	COutputEvent m_Output5d0;
	COutputEvent m_Output5e8;
};
