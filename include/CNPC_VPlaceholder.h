// CNPC_VPlaceholder: declared by pcdecomp transplant for 0x103a4320 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VPlaceholder : public CBaseEntity
{
public:
	CNPC_VPlaceholder *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VPlaceholder *sub_103a40c0();	// as in CKeepUpright (transplant)
	void vfunc420();	// slot 420: clears the dword at +0x62ec, calls the base slot 420 (CAI_BaseNPCTroika::vfunc420), sets the byte at +0x1480 and runs CBaseEntity::sub_100ac4e0(0, 0, 0)
public:
    virtual datamap_t * vfunc82();
public:
	virtual int vfunc138();
	virtual void vfunc316(int, int, int);
public:
	virtual bool vfunc590();
public:
	virtual void vfunc330(int, int);
public:
	virtual bool vfunc317(int);
	virtual bool vfunc318(int, int, int);
	virtual bool vfunc319(int, int, int);
	virtual bool vfunc320(int, int);
	virtual bool vfunc362(int);
	virtual bool vfunc363(int);
	virtual bool vfunc364(int);
	virtual bool vfunc365(int);
	virtual bool vfunc378(int, int);
	virtual bool vfunc587(int);
};
