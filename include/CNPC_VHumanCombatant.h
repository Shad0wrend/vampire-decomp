// CNPC_VHumanCombatant: declared by pcdecomp transplant for 0x10386b20 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CNPC_VHumanCombatant : public CBaseEntity
{
public:
	CNPC_VHumanCombatant *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	void vfunc103();	// as in CNPC_VAndreiBlood (transplant)
	void sub_10384690();	// as in CNPC_VAndreiBlood (transplant)
	void sub_10012855(int a);	// as in CNPC_VAndreiBlood (transplant)
	CNPC_VHumanCombatant *sub_10386aa0();	// as in CKeepUpright (transplant)
	void sub_10387290(int *pEvent);	// slot 442 (animation event handler), called directly as the base implementation by CNPC_VCop::vfunc442
};
