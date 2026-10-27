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
};
