// CPropSwitch: declared by pcdecomp transplant for 0x1020d6f0 from CBaseDoor (0x100efab0);
// only what matched code needs, as plain members.
#pragma once

class CPropSwitch : public CBaseEntity
{
public:
	virtual void vfunc113();	// slot 113 (Activate): after the base, finds the entity named by the string at +0x730 and, when it is a "prop_switch", keeps its handle at +0x740 (-1 when it is not a CPropSwitch); looks up the sequences "activate", "deactivate", "idle_on", "idle_off" into +0x7a8..+0x7b4 and starts the idle one (on when the byte at +0x7a5 is set)

	void vfunc104();
	void sub_1018e0d0();
	CPropSwitch *sub_1020d5f0();	// as in CKeepUpright (transplant)
	float sub_1020df00(int sequence);	// starts the animation sequence (negative: sequence 0): resets the sequence info, cycle 0, animtime = curtime and clears flag 0x40000 for a valid one, then forces a transmit, sets the think function 0x100080b7, the next think and returns the sequence's duration
	void sub_1020dd70();	// think function: while the switch is active (byte +0x65c), the sequence at +0x6f0 reaching the "on" sequence (+0x7a8) or "off" sequence (+0x7ac) stores the state at +0x670, fires the matching output (+0x744 / +0x75c) with the owner behind the handle at +0x10c and starts the next sequence (+0x7b0 / +0x7b4); otherwise stops thinking (flag 0x40000, ThinkSet(0)) unless byte +0x65d; when inactive or +0x65d is set, runs slot 250 and schedules the next think 10.0 seconds ahead
	void sub_10090950();	// CBaseAnimating::ResetSequenceInfo (stub 0x100117b1)
	float sub_10091080(int sequence);	// CBaseAnimating::SequenceDuration (stub 0x10009813)
	void sub_1020f330(inputdata_t *pInput);	// input handler: the integer input (0 for another type) minus one selects the state at +0x630; on a change zeroes the velocity, sets +0x3fc = -1.0f, moves the entity to (x at +0x800, y at +0x804, z from the table at +0x608[state]) and runs sub_100b3b00
	void sub_100b2e30(const float *pVec);	// stub 0x10013728
	int sub_1008f7b0(const char *pszName);	// CBaseAnimating::LookupSequence (stub 0x1000e057), called directly
};
