// CNPC_VMalkavian: declared by pcdecomp transplant for 0x103895a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VMalkavian : public CBaseEntity
{
public:
	CNPC_VMalkavian *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VMalkavian *sub_10389520();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	void *sub_10389560();
	const char *sub_10389580();
	char sub_103896a0();
};
