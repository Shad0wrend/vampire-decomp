// CNPC_VHunter: declared by pcdecomp transplant for 0x103880a0 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VHunter : public CBaseEntity
{
public:
	CNPC_VHunter *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VHunter *sub_10388010();	// as in CKeepUpright (transplant)
	int vfunc404(CBaseEntity *pEnt);	// slot 404: 1 for the entity of the handle at g_1093b650 while the global time is before g_1093b658, else the Troika base
	int sub_10299da0(CBaseEntity *pEnt);	// CAI_BaseNPCTroika::vfunc404, called directly
};
