// CBaseAnimatingOverlay: declared by pcdecomp transplant for 0x10098a60 from CSimplePhysicsProp (0x1004fe80);
// only what matched code needs, as plain members.
#pragma once

class CBaseAnimatingOverlay
{
public:
	CBaseAnimatingOverlay *vfunc5(unsigned int flags);
	void sub_10004c3c();
	void vfunc268(int index, int a, int sequence, char flag);	// slot 268: initialises the 0x30 byte animation overlay record [index] (array at +0x738) with the sequence, the weights and fade times; clears the fade weights again when the sequence's flag bit 1 is set
	char *sub_1008d990(int sequence);	// CBaseAnimating::sub_1008d990 (stub 0x1000b4f6): the sequence description, 0 when invalid
};
