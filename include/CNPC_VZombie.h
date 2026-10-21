// CNPC_VZombie: declared by pcdecomp transplant for 0x103de4d0 from CNPC_Crow (0x10359240);
// only what matched code needs, as plain members.
#pragma once

struct CUnknown101c2a50;
class CBaseCombatCharacter;

class CNPC_VZombie : public CBaseEntity
{
public:
	int vfunc546(int arg);
	CNPC_VZombie *sub_103de220();	// as in CKeepUpright (transplant)
	void vfunc141(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// slot 141 "CNPC_VZombie::TraceAttack": sets the head-hit flag at +0x66e1 from the hit group (dword +0x44 of the trace, 1 = head) and, for a head hit or an attacker whose weapon flags have bit 15 / 16 (0x18000), sets the damage of pInfo from one of two cvars, then CAI_BaseNPC::vfunc141
	void sub_10015b13(CUnknown101c2a50 *pInfo, int b, char *pTrace);	// CAI_BaseNPC::vfunc141 (stub 0x10015b13), called directly
	bool vfunc201(CBaseCombatCharacter *pEnt, int b, int c, int d);	// slot 201 "CNPC_VZombie::FVisible": scope trace (entity name); when pEnt is the player record at +0x9c of the entity slot 167 gives, true unless that player passes CBaseCombatCharacter::sub_10146a80, else CAI_BaseNPCTroika::vfunc201(pEnt, b, c, 0); the fourth argument is not used
	bool sub_1000dbcf(CBaseCombatCharacter *pEnt, int b, int c, int d);	// CAI_BaseNPCTroika::vfunc201 (stub 0x1000dbcf), called directly
	virtual void vfunc105(const char *pszModel);	// slot 105 "CNPC_VZombie::SetModel": CAI_BaseNPCTroika::vfunc105, then the sound group (+0xb4) of the male / female zombie name (+0xc0) with the kind +0xbc = 2
	void vfunc103();	// slot 103 "CNPC_VZombie::Spawn" (declared as a plain member): solid flags 0x4000000 / 0x200000 / 0x8000, the distances at +0x6348 to 999999, a scrambled random value at +0x6364, then CNPC_VAnimal::vfunc103
	void sub_10012855(int flags);	// sets the solid flags, called directly
	void sub_100117ca();	// CNPC_VAnimal::vfunc103 (stub 0x100117ca), called directly
	virtual int vfunc124();	// slot 124 "CNPC_VZombie::DrawDebugTextOverlays": base lines, then (with bit 18 of the debug flags at +0x224) one "Cond: %s" overlay line per condition bit set in the 192 bit vector at +0x5c5c
	int sub_1029d4e0();	// CAI_BaseNPCTroika::vfunc124 (stub 0x10006f64), called directly
	void sub_103e0a00();	// "CNPC_VZombie::UpdateEnemyTarget"-like (called by vfunc431): with an enemy (slot 167) that has a character (+0x9c): a character that fails CBaseCombatCharacter::sub_10146a80 gets slot 544 (character, its slot 217 position), one that passes goes through slot 541 / sub_102dfa20 and then sub_10279c20(); without an enemy the entity behind the handle at +0x628c is used the same way (sub_10279a50 for a passing character, slot 596 otherwise)
	void sub_10279a50(CBaseEntity *pEnt);	// CAI_BaseNPC::sub_10279a50 (stub 0x1000b974), called directly
	void sub_10279c20();	// stub 0x10003422, called directly
	bool vfunc510();	// slot 510 "CNPC_VZombie::...": sets the dword at +0x10e8 to 9, then true (via CAI_BaseNPC::vfunc510) only for a calm zombie with a live enemy (handle +0x628c) that has no dialog partner and whose float at +0x6264 does not exceed the "Float Sound Info" stat 3
	char sub_1000b005();	// CAI_BaseNPCTroika::sub_102c1170 (stub 0x1000b005), called directly
	char sub_1000b212();	// CBaseCombatCharacter::sub_10341aa0 (stub 0x1000b212), called directly
	bool sub_10005f97();	// CAI_BaseNPC::vfunc510 (stub 0x10005f97), tail called
	void vfunc431();	// slot 431 "CNPC_VZombie::NPCThink" (plain member): scope trace (entity name); unless sub_1029f2e0() holds: sub_103e0a00() while the state at +0x6678 is 1, the inspection ranges when the vision distance (+0x63b8) is at most 1.0f, the Troika think, and slot 614 once the next think time (+0x17c) is not in the future
	char sub_1029f2e0();	// stub 0x1000347c, called directly by the think
	void sub_10292de0();	// CAI_BaseNPCTroika::vfunc431 (stub 0x10002a7c), called directly
};
