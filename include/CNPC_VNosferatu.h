// CNPC_VNosferatu: declared by pcdecomp transplant for 0x103a14e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VNosferatu : public CBaseEntity
{
public:
	CNPC_VNosferatu *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VNosferatu *sub_103a1460();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	char *vfunc580();
	virtual const char *vfunc451();	// slot 451: the class name "CNPC_VNosferatu"
	virtual char vfunc452();	// slot 452
	char m_pad03e0[0x6668 - 0x3e0];
public:	// tail-call overrides (the game's 5-byte jmp bodies, link audit 2026-11-18)
	virtual void vfunc103();	// slot 103 (0x103a1b10): a tail call of CNPC_VVampireCall_103c4ef0::vfunc103
};
