// CNPC_VSabbatGunman: declared by pcdecomp transplant for 0x103a50e0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VSabbatGunman : public CBaseEntity
{
public:
	CNPC_VSabbatGunman *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VSabbatGunman *sub_103a5060();	// as in CKeepUpright (transplant)
	virtual void vfunc465(int a);	// slot 465: when the time at +0x654 lies beyond the first convar float (0 when that one is a command) stores the second convar's int (0 for a command) at +0x1484 and plays with the third convar's float (0 for a command) as the playback rate, else clears +0x1484 and uses -1.0f; then CAI_BaseNPCTroika::vfunc465
	void sub_10295a60(int a);	// CAI_BaseNPCTroika::vfunc465 (stub 0x100088aa), called directly
};
