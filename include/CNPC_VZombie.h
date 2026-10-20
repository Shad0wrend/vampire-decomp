// CNPC_VZombie: declared by pcdecomp transplant for 0x103de4d0 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

struct CUnknown101c2a50;

class CNPC_VZombie : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VZombie *sub_103de220();	// as in CKeepUpright (transplant)
	void vfunc141(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// slot 141 "CNPC_VZombie::TraceAttack": sets the head-hit flag at +0x66e1 from the hit group (dword +0x44 of the trace, 1 = head) and, for a head hit or an attacker whose weapon flags have bit 15 / 16 (0x18000), sets the damage of pInfo from one of two cvars, then CAI_BaseNPC::vfunc141
	void sub_10015b13(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// CAI_BaseNPC::vfunc141 (stub 0x10015b13), called directly
	bool vfunc201(void *pEnt, int b, int c, int d);	// slot 201 "CNPC_VZombie::FVisible": scope trace (entity name); when pEnt is the player record at +0x9c of the entity slot 167 gives, true unless that player passes CBaseCombatCharacter::sub_10146a80, else CAI_BaseNPCTroika::vfunc201(pEnt, b, c, 0); the fourth argument is not used
	bool sub_1000dbcf(void *pEnt, int b, int c, int d);	// CAI_BaseNPCTroika::vfunc201 (stub 0x1000dbcf), called directly
};
