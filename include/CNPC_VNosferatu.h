// CNPC_VNosferatu: declared by pcdecomp transplant for 0x103a14e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

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
};
