// CNPC_VMalkavian: declared by pcdecomp transplant for 0x103895a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CNPC_VVampire.h"
#include "CBaseEntity.h"

class CNPC_VMalkavian : public CNPC_VVampire
{
public:
	virtual CBaseEntity *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VMalkavian *sub_10389520();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual float vfunc135(float);
	virtual bool vfunc136();
	virtual int vfunc137();
	virtual int vfunc138();
	void *sub_10389560();
	const char *sub_10389580();
	char sub_103896a0();
	char m_pad6664[0x6668 - 0x6664];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc103();	// slot 103 (0x10389bd0): a tail call of CNPC_VVampireCall_103c4ef0::vfunc103
};
