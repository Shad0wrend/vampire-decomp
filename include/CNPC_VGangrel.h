// CNPC_VGangrel: declared by pcdecomp transplant for 0x103770b0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VGangrel : public CBaseEntity
{
public:
	CNPC_VGangrel *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VGangrel *sub_10377030();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	char m_pad03e0[0x6668 - 0x3e0];
};
