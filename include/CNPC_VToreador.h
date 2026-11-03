// CNPC_VToreador: declared by pcdecomp transplant for 0x103b5370 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VToreador : public CBaseEntity
{
public:
	CNPC_VToreador *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VToreador *sub_103b52f0();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void *vfunc580();	// slot 580
	virtual const char *vfunc451();	// slot 451: the class name "CNPC_VToreador"
	virtual char vfunc452();	// slot 452
	char m_pad03e0[0x6668 - 0x3e0];
};
