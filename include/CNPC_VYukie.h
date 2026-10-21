// CNPC_VYukie: declared by pcdecomp transplant for 0x103dd090 from CPhysForce (0x10027690);
// only what matched code needs, as plain members.
#pragma once

class CEntityVSlots;

class CNPC_VYukie : public CBaseEntity
{
public:
	CNPC_VYukie *vfunc5(unsigned int flags);
	void sub_100123af();
	int vfunc546(int arg);	// as in CNPC_Crow (transplant)
	CNPC_VYukie *sub_103dd000();	// as in CKeepUpright (transplant)
	char vfunc600(int unused);	// slot 600: when the active weapon's slot 360 has bit 0x18000 and the byte at +0x6078 is clear, sets it, stamps a random 22.5..45 second delay + curtime at +0x6074 and pokes the global at 0x10924edc (slot 1); true then, else false
	CEntityVSlots *sub_1032e7b0();	// "CBaseCombatCharacter::GetActiveWeapon", called directly
	char vfunc602();	// slot 602: slot 308 true: curtime has reached the time at +0x6074; else the time at +0x6268 is within 1.5 * twice the frame time (0 when the game is paused)

	// Slot 438, declared as a plain member.
	int vfunc438();	// "SelectSchedule": +0x1b2c = 0x2a; in state 2 (+0x5cc0) clears the byte at +0x5b80 and asks slot 604 (weapon flags 0x18000) or slot 605 with the active weapon's flags, returning a non-zero answer; otherwise CNPC_VHumanCombatant::vfunc438
	int sub_103872d0();	// CNPC_VHumanCombatant::vfunc438 (stub 0x1000b10e), called directly
};
