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
	void vfunc420();	// slot 420: calls the base slot 420 (CNPC_VHumanCombatant::vfunc420, stub 0x1000dcba), then, when the active weapon (sub_1032e7b0) is set, calls slot 66 of it
	CNPC_VYukie *sub_103dd000();	// as in CKeepUpright (transplant)
	char vfunc599(int unused);	// slot 599: sets the byte at +0x6078, pokes the global at 0x1070b244 (slot 1 with 22.5 and 45) and stores the float answer plus the value at 0x1070b228 + 0xc as the time at +0x6074; true
	char vfunc600(int unused);	// slot 600: when the active weapon's slot 360 has bit 0x18000 and the byte at +0x6078 is clear, sets it, stamps a random 22.5..45 second delay + curtime at +0x6074 and pokes the global at 0x10924edc (slot 1); true then, else false
	CEntityVSlots *sub_1032e7b0();	// "CBaseCombatCharacter::GetActiveWeapon", called directly
	void vfunc601(int unused);	// slot 601: pokes the global at 0x10924edc (slot 1), clears the byte at +0x6078 and, when slot 308 is true, stores a random 5..10 second delay + curtime at +0x6070
	char vfunc602();	// slot 602: slot 308 true: curtime has reached the time at +0x6074; else the time at +0x6268 is within 1.5 * twice the frame time (0 when the game is paused)

	// Slot 438, declared as a plain member.
	int vfunc438();	// "SelectSchedule": +0x1b2c = 0x2a; in state 2 (+0x5cc0) clears the byte at +0x5b80 and asks slot 604 (weapon flags 0x18000) or slot 605 with the active weapon's flags, returning a non-zero answer; otherwise CNPC_VHumanCombatant::vfunc438
	int sub_103872d0();	// CNPC_VHumanCombatant::vfunc438 (stub 0x1000b10e), called directly
public:
	virtual void vfunc134();
	virtual void vfunc135();
	virtual void vfunc136();
	virtual void vfunc137();
	virtual int vfunc138();
	virtual void *vfunc580();	// slot 580
	virtual const char *vfunc451();	// slot 451: the class name "CNPC_VYukie"
};
