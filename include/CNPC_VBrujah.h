// CNPC_VBrujah: declared by pcdecomp transplant for 0x103678b0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CNPC_VVampire.h"
#include "CBaseEntity.h"

class CNPC_VBrujah : public CNPC_VVampire
{
public:
	CNPC_VBrujah *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VBrujah *sub_10367830();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	char m_pad6664[0x6668 - 0x6664];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc103();	// slot 103 (0x10367ee0): a tail call of CNPC_VVampireCall_103c4ef0::vfunc103
};
