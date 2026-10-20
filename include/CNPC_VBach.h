// CNPC_VBach: declared by pcdecomp transplant for 0x10362c90 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VBach : public CBaseEntity
{
public:
	CNPC_VBach *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	int sub_10363c70(void *info);	// slot 390 override: when the byte at +0x66a8 is set, flags the hit at +0x66a6 and clears one of the dwords +0x6688/+0x6690 (or passes a zeroed copy of the damage info), then calls CNPC_VHuman::vfunc390
	CNPC_VBach *sub_10362c10();	// as in CKeepUpright (transplant)
	void vfunc104();	// slot 104 "Precache": the base Precache, three weapon items and the boss sounds
	void sub_100013f7();	// CNPC_VHuman::vfunc104 (Precache), called directly
};
