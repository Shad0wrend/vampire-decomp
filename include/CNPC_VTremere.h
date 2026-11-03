// CNPC_VTremere: declared by pcdecomp transplant for 0x103b5b10 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once
#include "CBaseEntity.h"

class CNPC_VTremere : public CBaseEntity
{
public:
	CNPC_VTremere *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VTremere *sub_103b5a90();	// as in CKeepUpright (transplant)
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void *vfunc580();	// slot 580
	virtual const char *vfunc451();	// slot 451: the class name "CNPC_VTremere"
	virtual char vfunc452();	// slot 452
	char m_pad03e0[0x6668 - 0x3e0];
};
