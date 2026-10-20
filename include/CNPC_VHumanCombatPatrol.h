// CNPC_VHumanCombatPatrol: declared by pcdecomp transplant for 0x10387750 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VHumanCombatPatrol : public CBaseEntity
{
public:
	CNPC_VHumanCombatPatrol *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VHumanCombatPatrol *sub_103876d0();	// as in CKeepUpright (transplant)
};
