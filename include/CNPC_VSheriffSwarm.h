// CNPC_VSheriffSwarm: declared by pcdecomp transplant for 0x103b1c60 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VSheriffSwarm : public CBaseEntity
{
public:
	CNPC_VSheriffSwarm *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VSheriffSwarm *sub_103b1be0();	// as in CKeepUpright (transplant)
public:
    virtual datamap_t * vfunc82();
public:
	virtual int vfunc138();
	virtual int vfunc451();
	virtual bool vfunc452();
	virtual int vfunc473();
	virtual int vfunc580();
public:
	virtual int vfunc432(int);
};
