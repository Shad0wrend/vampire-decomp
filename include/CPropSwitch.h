// CPropSwitch: declared by pcdecomp transplant for 0x1020d6f0 from CBaseDoor (0x100efab0);
// only what matched code needs, as plain members.
#pragma once

class CPropSwitch : public CBaseEntity
{
public:
	void vfunc104();
	void sub_1018e0d0();
	CPropSwitch *sub_1020d5f0();	// as in CKeepUpright (transplant)
	float sub_1020df00(int sequence);	// starts the animation sequence (negative: sequence 0): resets the sequence info, cycle 0, animtime = curtime and clears flag 0x40000 for a valid one, then forces a transmit, sets the think function 0x100080b7, the next think and returns the sequence's duration
	void sub_10090950();	// CBaseAnimating::ResetSequenceInfo (stub 0x100117b1)
	float sub_10091080(int sequence);	// CBaseAnimating::SequenceDuration (stub 0x10009813)
	void sub_1020f330(inputdata_t *pInput);	// input handler: the integer input (0 for another type) minus one selects the state at +0x630; on a change zeroes the velocity, sets +0x3fc = -1.0f, moves the entity to (x at +0x800, y at +0x804, z from the table at +0x608[state]) and runs sub_100b3b00
	void sub_100b2e30(const float *pVec);	// stub 0x10013728
};
